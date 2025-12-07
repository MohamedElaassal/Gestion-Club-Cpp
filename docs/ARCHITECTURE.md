# Project Architecture Guide

## 📐 Architecture Overview

The Club Management System follows a **Model-View-Controller (MVC)** architectural pattern adapted for Qt's signal-slot mechanism.

## 🏗 Design Patterns

### 1. Singleton Pattern
**Database Class** (`include/database/database.h`)
- Ensures only one database connection exists throughout the application lifecycle
- Provides global access point via `Database::instance()`

```cpp
class Database {
public:
    static Database& instance();
    // ...
private:
    Database(); // Private constructor
    static Database* m_instance;
};
```

### 2. Dialog Pattern
**All Dialog Classes** (`include/dialogs/`)
- Encapsulates form logic in reusable dialog components
- Provides clean separation between data entry and main UI
- Modal dialogs ensure user focus on data entry

### 3. Model-View Architecture
**Qt's MVC Implementation**
- `QSqlTableModel`: Model for direct table editing
- `QSqlQueryModel`: Model for complex queries
- `QTableView`: View for displaying tabular data

## 📦 Component Structure

### Layer 1: Presentation Layer (`ui/`)
- **Responsibility**: User interface layouts
- **Technology**: Qt Designer XML files
- **Files**: `*.ui`
- **Purpose**: Define visual structure, widgets, and layouts

### Layer 2: View Layer (`src/` + `include/`)
- **Responsibility**: UI logic and user interaction handling
- **Files**: 
  - `mainwindow.cpp/h`: Main application window
  - `*dialog.cpp/h`: Form dialogs
- **Purpose**: Handle user input, display data, trigger business logic

### Layer 3: Business Logic Layer (`src/database/`)
- **Responsibility**: Database operations and business rules
- **Files**: `database.cpp/h`
- **Purpose**: 
  - Manage database connections
  - Execute queries
  - Ensure data integrity

### Layer 4: Data Layer (SQLite Database)
- **Responsibility**: Data persistence
- **Technology**: SQLite
- **Purpose**: Store all application data

## 🔄 Data Flow

```
User Input → UI Event → Signal → Slot → Business Logic → Database → Response → UI Update
```

### Example: Adding a Student

1. **User clicks "Add Student" button**
   ```cpp
   // mainwindow.cpp
   void MainWindow::on_addStudentButton_clicked()
   ```

2. **Main window opens dialog**
   ```cpp
   StudentDialog dialog(this);
   if (dialog.exec() == QDialog::Accepted)
   ```

3. **User fills form and clicks OK**
   ```cpp
   // studentdialog.cpp
   void StudentDialog::accept()
   ```

4. **Dialog validates and inserts data**
   ```cpp
   QSqlQuery query(Database::instance().getConnection());
   query.prepare("INSERT INTO etudiants ...");
   query.exec();
   ```

5. **Main window refreshes model**
   ```cpp
   m_studentModel->select();
   ```

6. **Table view automatically updates**

## 📊 Class Diagram

```
┌─────────────────┐
│   MainWindow    │
├─────────────────┤
│ - ui            │
│ - models        │
├─────────────────┤
│ + setupModels() │
│ + on_*_clicked()│
└────────┬────────┘
         │
         ├─────────────┬─────────────┬──────────────┐
         │             │             │              │
    ┌────▼────┐  ┌─────▼─────┐ ┌────▼─────┐  ┌────▼─────┐
    │ Student │  │   Club    │ │Membership│  │  Login   │
    │ Dialog  │  │  Dialog   │ │ Dialog   │  │  Dialog  │
    └────┬────┘  └─────┬─────┘ └────┬─────┘  └────┬─────┘
         │             │             │              │
         └─────────────┴─────────────┴──────────────┘
                       │
                  ┌────▼────┐
                  │Database │
                  │(Singleton)│
                  └────┬────┘
                       │
                  ┌────▼────┐
                  │ SQLite  │
                  │   DB    │
                  └─────────┘
```

## 🔐 Security Considerations

### Password Handling
- Passwords should be hashed (currently stored as plain text - **TODO**)
- Recommended: Use `QCryptographicHash` with SHA-256 + salt

### SQL Injection Prevention
- All queries use prepared statements
- User input is parameterized via `query.bindValue()`

### Session Management
- Current implementation: Basic login/logout
- Future: Implement session tokens and timeouts

## 🗃 Database Design

### Normalization
- **3NF (Third Normal Form)** achieved
- No transitive dependencies
- Primary keys on all tables

### Referential Integrity
```sql
FOREIGN KEY (etudiant_id) REFERENCES etudiants(id) ON DELETE CASCADE
FOREIGN KEY (club_id) REFERENCES clubs(id) ON DELETE CASCADE
```

### Constraints
- `UNIQUE`: Prevent duplicate emails, usernames
- `NOT NULL`: Ensure required fields
- `PRIMARY KEY AUTOINCREMENT`: Automatic ID generation

## 🎨 UI/UX Architecture

### Theme System
- Centralized in `resources/style.qss`
- Qt Style Sheets (QSS) similar to CSS
- Applied globally via `QApplication::setStyleSheet()`

### Color Palette
```qss
Primary:   #3498db (Blue)
Success:   #27ae60 (Green)
Warning:   #f39c12 (Orange)
Danger:    #e74c3c (Red)
Text:      #2c3e50 (Dark Gray)
Background:#ecf0f1 (Light Gray)
```

### Responsive Design
- Minimum window sizes defined
- Layout managers handle resizing
- Widgets adapt to available space

## 🧪 Testing Strategy (Planned)

### Unit Tests
- Test database operations
- Test business logic in dialogs
- Mock database for isolated testing

### Integration Tests
- Test complete workflows
- Test database transactions
- Test UI interactions

### Manual Testing Checklist
- [ ] All CRUD operations for students
- [ ] All CRUD operations for clubs
- [ ] Membership assignment/removal
- [ ] Search and filter functionality
- [ ] Login/logout flow
- [ ] Data validation
- [ ] Error handling

## 🚀 Performance Considerations

### Database Optimization
- Indexes on frequently queried columns (email, name)
- Query result caching in models
- Lazy loading for large datasets

### UI Responsiveness
- Asynchronous operations for heavy tasks
- Progress indicators for long operations
- Pagination for large result sets (future enhancement)

## 🔧 Build System

### QMake Structure
```qmake
# Project Configuration
QT += core gui sql widgets
CONFIG += c++17

# Paths
INCLUDEPATH += include include/dialogs include/database

# Sources, Headers, Forms
SOURCES += src/*.cpp src/dialogs/*.cpp src/database/*.cpp
HEADERS += include/*.h include/dialogs/*.h include/database/*.h
FORMS += ui/*.ui

# Resources
RESOURCES += resources/resources.qrc

# Output directories
OBJECTS_DIR = build/obj
MOC_DIR = build/moc
RCC_DIR = build/rcc
UI_DIR = build/ui
```

## 📝 Code Standards

### Naming Conventions
- **Classes**: PascalCase (`StudentDialog`)
- **Functions**: camelCase (`setupModels()`)
- **Variables**: camelCase with prefix (`m_studentModel`)
- **Constants**: UPPER_SNAKE_CASE
- **UI widgets**: descriptiveNameType (`studentTableView`)

### File Organization
```
Class Declaration (.h)
├── Includes
├── Forward declarations
├── Class definition
│   ├── Public members
│   ├── Public slots
│   ├── Private slots
│   └── Private members
└── End guard

Class Implementation (.cpp)
├── Includes
├── Constructor(s)
├── Destructor
├── Public methods
├── Private methods
└── Slots
```

## 🔄 Signal-Slot Connections

### Auto-Connection
Qt Creator automatically connects signals to slots following naming convention:
```cpp
// UI widget named "addStudentButton"
// Automatically calls:
void on_addStudentButton_clicked();
```

### Manual Connection (when needed)
```cpp
connect(sender, SIGNAL(signal()), receiver, SLOT(slot()));
// Or modern syntax:
connect(sender, &Sender::signal, receiver, &Receiver::slot);
```

## 📚 Further Reading

- [Qt Documentation](https://doc.qt.io/)
- [Qt Model/View Programming](https://doc.qt.io/qt-6/model-view-programming.html)
- [Qt SQL Module](https://doc.qt.io/qt-6/qtsql-index.html)
- [C++17 Features](https://en.cppreference.com/w/cpp/17)
- [Design Patterns](https://refactoring.guru/design-patterns)

---

**Last Updated**: December 2025  
**Version**: 1.0.0
