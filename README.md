# 🎓 Club Management System

<div align="center">

![Qt](https://img.shields.io/badge/Qt-6.10.1-41CD52?style=for-the-badge&logo=qt&logoColor=white)
![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![SQLite](https://img.shields.io/badge/SQLite-3-003B57?style=for-the-badge&logo=sqlite&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

**A modern, elegant desktop application for managing student clubs and memberships**

[Features](#-features) • [Installation](#-installation) • [Usage](#-usage) • [Project Structure](#-project-structure) • [Contributing](#-contributing)

</div>

---

## 📋 Table of Contents

- [Overview](#-overview)
- [Features](#-features)
- [Screenshots](#-screenshots)
- [Technologies](#-technologies)
- [Installation](#-installation)
- [Building from Source](#-building-from-source)
- [Usage](#-usage)
- [Project Structure](#-project-structure)
- [Database Schema](#-database-schema)
- [Contributing](#-contributing)
- [License](#-license)
- [Authors](#-authors)

---

## 🌟 Overview

The **Club Management System** is a comprehensive desktop application designed to streamline the administration of student clubs in educational institutions. Built with Qt6 and modern C++17, it provides an intuitive interface for managing students, clubs, and their memberships with a focus on usability and aesthetic design.

### Why This Project?

- **🎯 Academic Excellence**: Developed as an academic project showcasing best practices in C++ and Qt development
- **💼 Real-World Application**: Solves actual administrative challenges in managing student organizations
- **🎨 Modern UI/UX**: Features a polished, professional interface with smooth animations and gradients
- **📊 Data Integrity**: Implements robust database management with proper relationships and constraints

---

## ✨ Features

### 👥 Student Management
- ✅ Add, edit, and delete student records
- ✅ Store comprehensive information (name, email, phone, date of birth)
- ✅ Real-time search and filtering capabilities
- ✅ Unique student identification system

### 🏆 Club Management
- ✅ Create and manage multiple clubs
- ✅ Track club descriptions and details
- ✅ Quick search functionality
- ✅ Visual club overview with member counts

### 🔗 Membership Management
- ✅ Assign students to clubs
- ✅ Track membership relationships
- ✅ Filter memberships by student or club
- ✅ Easy membership addition and removal

### 🔐 Security & Authentication
- ✅ User authentication system
- ✅ Secure login with password protection
- ✅ User registration functionality
- ✅ Session management with logout capability

### 🎨 Modern UI/UX
- ✅ Beautiful gradient color schemes
- ✅ Smooth animations and transitions
- ✅ Responsive table views with alternating colors
- ✅ Professional form layouts with validation
- ✅ Hover effects and interactive buttons
- ✅ Custom styled components

---

## 📸 Screenshots

### Login Screen
Beautiful login interface with gradient background and smooth animations.

### Main Dashboard
Tabbed interface providing access to all major functionalities:
- Student management with search
- Club management with filtering
- Membership tracking and management

### Dialog Forms
Professional dialog windows for adding and editing records with:
- Input validation
- Date pickers
- Styled buttons with hover effects
- Confirmation dialogs

---

## 🛠 Technologies

### Core Framework
- **Qt 6.10.1**: Modern C++ framework for cross-platform GUI applications
- **Qt Widgets**: Traditional desktop UI components
- **Qt SQL**: Database abstraction layer

### Programming Language
- **C++17**: Modern C++ with advanced features
- **QMake**: Qt's build system

### Database
- **SQLite**: Lightweight, serverless SQL database engine
- **Qt SQL Module**: For database connectivity and queries

### Development Tools
- **Qt Creator**: Official Qt IDE
- **MinGW 64-bit**: GCC compiler for Windows
- **Git**: Version control system

---

## 📦 Installation

### Prerequisites

Before you begin, ensure you have the following installed:

1. **Qt 6.10.1 or higher**
   - Download from [Qt Official Website](https://www.qt.io/download)
   - Include Qt Widgets and Qt SQL modules

2. **C++ Compiler**
   - MinGW 64-bit (included with Qt)
   - Or MSVC 2019/2022 on Windows
   - GCC on Linux
   - Clang on macOS

3. **Qt Creator** (recommended)
   - Included with Qt installation
   - Version 13.0 or higher

### Quick Start

```bash
# Clone the repository
git clone https://github.com/MohamedElaassal/Gestion-Club-Cpp.git

# Navigate to project directory
cd Gestion-Club-Cpp

# Open in Qt Creator
# File → Open File or Project → Select Gestion-Club-Qt.pro
```

---

## 🔨 Building from Source

### Using Qt Creator (Recommended)

1. **Open Project**
   ```
   File → Open File or Project → Gestion-Club-Qt.pro
   ```

2. **Configure Kit**
   - Select Desktop Qt 6.10.1 MinGW 64-bit
   - Click "Configure Project"

3. **Build**
   - Press `Ctrl+B` or
   - Build → Build Project "Gestion-Club-Qt"

4. **Run**
   - Press `Ctrl+R` or
   - Click the green play button

### Using Command Line

```bash
# Generate Makefile
qmake Gestion-Club-Qt.pro

# Compile
make

# Run (Windows)
.\release\Gestion-Club-Qt.exe

# Run (Linux/Mac)
./Gestion-Club-Qt
```

### Build Configuration

The project uses the following build directories:
- `build/obj/` - Object files
- `build/moc/` - Meta-object compiler output
- `build/rcc/` - Resource compiler output
- `build/ui/` - UI header files

---

## 🚀 Usage

### First Launch

1. **Database Initialization**
   - The application automatically creates the SQLite database on first run
   - Database file: `club_management.db`

2. **User Registration**
   - Click "S'inscrire" (Register) on the login screen
   - Fill in your details (username, email, password)
   - Complete registration

3. **Login**
   - Enter your credentials
   - Click "Se connecter" (Login)

### Managing Students

1. Navigate to the **Students** tab
2. **Add Student**: Click "Add Student" button
   - Fill in: Name, First Name, Email, Phone, Date of Birth
   - Click "OK" to save
3. **Edit Student**: Select a student → Click "Edit"
4. **Delete Student**: Select a student → Click "Delete" → Confirm
5. **Search**: Use the search bar to filter students

### Managing Clubs

1. Navigate to the **Clubs** tab
2. **Add Club**: Click "Add Club" button
   - Enter club name and description
   - Click "OK" to save
3. **Edit Club**: Select a club → Click "Edit"
4. **Delete Club**: Select a club → Click "Delete" → Confirm
5. **Search**: Use the search bar to filter clubs

### Managing Memberships

1. Navigate to the **Memberships** tab
2. **Add Membership**: Click "Add Membership"
   - Select a student from dropdown
   - Select a club from dropdown
   - Click "OK"
3. **Remove Membership**: Select a membership → Click "Remove" → Confirm
4. **Filter**: Use student/club filters to find specific memberships

### Logout

- Click the **🚪 Déconnexion** button in the top-right corner
- Confirm logout
- You'll be redirected to the login screen

---

## 📁 Project Structure

```
Gestion-Club-Cpp/
├── 📄 README.md                    # This file
├── 📄 Gestion-Club-Qt.pro          # Qt project file
├── 📄 LICENSE                      # MIT License
│
├── 📁 src/                         # Source files
│   ├── 📄 main.cpp                 # Application entry point
│   ├── 📄 mainwindow.cpp           # Main window implementation
│   │
│   ├── 📁 dialogs/                 # Dialog implementations
│   │   ├── 📄 studentdialog.cpp    # Student form dialog
│   │   ├── 📄 clubdialog.cpp       # Club form dialog
│   │   ├── 📄 membershipdialog.cpp # Membership form dialog
│   │   ├── 📄 logindialog.cpp      # Login dialog
│   │   └── 📄 registerdialog.cpp   # Registration dialog
│   │
│   └── 📁 database/                # Database layer
│       └── 📄 database.cpp         # Database connection & queries
│
├── 📁 include/                     # Header files
│   ├── 📄 mainwindow.h             # Main window header
│   │
│   ├── 📁 dialogs/                 # Dialog headers
│   │   ├── 📄 studentdialog.h
│   │   ├── 📄 clubdialog.h
│   │   ├── 📄 membershipdialog.h
│   │   ├── 📄 logindialog.h
│   │   └── 📄 registerdialog.h
│   │
│   └── 📁 database/                # Database headers
│       └── 📄 database.h
│
├── 📁 ui/                          # Qt Designer UI files
│   ├── 📄 mainwindow.ui            # Main window layout
│   ├── 📄 studentdialog.ui         # Student form layout
│   ├── 📄 clubdialog.ui            # Club form layout
│   ├── 📄 membershipdialog.ui      # Membership form layout
│   ├── 📄 logindialog.ui           # Login layout
│   └── 📄 registerdialog.ui        # Registration layout
│
├── 📁 resources/                   # Application resources
│   ├── 📄 resources.qrc            # Qt resource collection
│   └── 📄 style.qss                # Application stylesheet (CSS-like)
│
├── 📁 icons/                       # Application icons
│
├── 📁 build/                       # Build output (generated)
│   ├── 📁 obj/                     # Object files
│   ├── 📁 moc/                     # Meta-object compiler files
│   ├── 📁 rcc/                     # Resource compiler files
│   └── 📁 ui/                      # Generated UI headers
│
└── 📁 docs/                        # Documentation
    └── 📄 UI_ENHANCEMENTS.md       # UI/UX documentation
```

### Directory Explanations

- **`src/`**: Contains all C++ implementation files organized by functionality
- **`include/`**: Header files with class declarations and interfaces
- **`ui/`**: Qt Designer XML files defining the visual layouts
- **`resources/`**: Embedded resources like stylesheets and images
- **`build/`**: Automatically generated build artifacts (not in git)
- **`docs/`**: Project documentation and guides

---

## 🗄 Database Schema

The application uses SQLite with the following schema:

### Users Table
```sql
CREATE TABLE utilisateurs (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    nom_utilisateur TEXT UNIQUE NOT NULL,
    email TEXT UNIQUE NOT NULL,
    mot_de_passe TEXT NOT NULL
);
```

### Students Table
```sql
CREATE TABLE etudiants (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    nom TEXT NOT NULL,
    prenom TEXT NOT NULL,
    email TEXT UNIQUE NOT NULL,
    telephone TEXT,
    date_naissance DATE
);
```

### Clubs Table
```sql
CREATE TABLE clubs (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    nom TEXT UNIQUE NOT NULL,
    description TEXT
);
```

### Memberships Table
```sql
CREATE TABLE membres (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    etudiant_id INTEGER NOT NULL,
    club_id INTEGER NOT NULL,
    FOREIGN KEY (etudiant_id) REFERENCES etudiants(id) ON DELETE CASCADE,
    FOREIGN KEY (club_id) REFERENCES clubs(id) ON DELETE CASCADE,
    UNIQUE(etudiant_id, club_id)
);
```

### Relationships
- **One-to-Many**: A student can be a member of multiple clubs
- **One-to-Many**: A club can have multiple student members
- **Many-to-Many**: Implemented through the memberships junction table
- **Cascade Delete**: Removing a student/club automatically removes associated memberships

---

## 🎨 Customization

### Styling

The application uses Qt Style Sheets (QSS) for theming. To customize:

1. Open `resources/style.qss`
2. Modify colors, fonts, or spacing
3. Rebuild the project to see changes

**Key Style Variables:**
- Primary Color: `#3498db` (Blue)
- Success Color: `#27ae60` (Green)
- Warning Color: `#f39c12` (Orange)
- Danger Color: `#e74c3c` (Red)

### Adding New Features

1. Create new dialog class (if needed)
2. Design UI in Qt Designer
3. Implement business logic in corresponding .cpp file
4. Update database schema if required
5. Add to main window tabs or menus

---

## 🤝 Contributing

Contributions are welcome! Please follow these guidelines:

### How to Contribute

1. **Fork the Repository**
   ```bash
   git clone https://github.com/your-username/Gestion-Club-Cpp.git
   ```

2. **Create a Feature Branch**
   ```bash
   git checkout -b feature/AmazingFeature
   ```

3. **Commit Your Changes**
   ```bash
   git commit -m "Add some AmazingFeature"
   ```

4. **Push to the Branch**
   ```bash
   git push origin feature/AmazingFeature
   ```

5. **Open a Pull Request**

### Coding Standards

- Follow Qt coding conventions
- Use meaningful variable and function names
- Comment complex logic
- Maintain consistent indentation (4 spaces)
- Write descriptive commit messages

### Reporting Issues

- Use the GitHub issue tracker
- Provide clear reproduction steps
- Include screenshots if applicable
- Mention your OS and Qt version

---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

```
MIT License

Copyright (c) 2025 Mohamed Elaassal

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions...
```

---

## 👥 Authors

**Mohamed Elaassal**
- GitHub: [@MohamedElaassal](https://github.com/MohamedElaassal)
- GitHub: [@HAMZA-EL-OUATTAB](https://github.com/HAMZA-EL-OUATTAB)
- Project: [Gestion-Club-Cpp](https://github.com/MohamedElaassal/Gestion-Club-Cpp)

### Academic Context
This project was developed as part of academic coursework, demonstrating:
- Object-Oriented Programming in C++
- GUI Development with Qt Framework
- Database Design and Management
- Software Architecture and Design Patterns
- Version Control with Git

---

## 🙏 Acknowledgments

- **Qt Framework**: For providing an excellent cross-platform development framework
- **SQLite**: For the lightweight, reliable database engine
- **Qt Community**: For extensive documentation and support
- **Academic Advisors**: For guidance and feedback throughout development

---

## 📞 Support

If you encounter any issues or have questions:

1. Check the [Issues](https://github.com/MohamedElaassal/Gestion-Club-Cpp/issues) page
2. Read the documentation in the `docs/` folder
3. Contact the maintainer through GitHub

---

## 🚀 Future Enhancements

Potential features for future versions:

- [ ] Export data to CSV/PDF
- [ ] Advanced reporting and statistics
- [ ] Email notifications for club events
- [ ] Multi-language support (i18n)
- [ ] Dark mode theme
- [ ] Cloud database sync
- [ ] Mobile companion app
- [ ] Role-based access control
- [ ] Activity logging and audit trail

---

## 📊 Project Status

**Current Version**: 1.0.0  
**Status**: ✅ Active Development  
**Last Updated**: December 2025

---

<div align="center">

**⭐ Star this repository if you find it helpful!**

Made with ❤️ and Qt

[Back to Top](#-club-management-system)

</div>
