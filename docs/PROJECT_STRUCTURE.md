# 📁 Project Structure Overview

## Directory Tree

```
Gestion-Club-Cpp/
│
├── 📄 README.md                          ⭐ Main documentation
├── 📄 LICENSE                            📜 MIT License
├── 📄 CONTRIBUTING.md                    🤝 Contribution guidelines
├── 📄 .gitignore                         🚫 Git ignore rules
├── 📄 Gestion-Club-Qt.pro                ⚙️ Qt project file
│
├── 📁 src/                               💻 Source files (.cpp)
│   ├── 📄 main.cpp                       🚀 Application entry point
│   ├── 📄 mainwindow.cpp                 🖼️ Main window implementation
│   │
│   ├── 📁 dialogs/                       💬 Dialog implementations
│   │   ├── 📄 studentdialog.cpp          👨‍🎓 Student form
│   │   ├── 📄 clubdialog.cpp             🏆 Club form
│   │   ├── 📄 membershipdialog.cpp       🔗 Membership form
│   │   ├── 📄 logindialog.cpp            🔐 Login form
│   │   └── 📄 registerdialog.cpp         📝 Registration form
│   │
│   └── 📁 database/                      🗄️ Database layer
│       └── 📄 database.cpp               💾 Database operations
│
├── 📁 include/                           📋 Header files (.h)
│   ├── 📄 mainwindow.h                   🖼️ Main window header
│   │
│   ├── 📁 dialogs/                       💬 Dialog headers
│   │   ├── 📄 studentdialog.h
│   │   ├── 📄 clubdialog.h
│   │   ├── 📄 membershipdialog.h
│   │   ├── 📄 logindialog.h
│   │   └── 📄 registerdialog.h
│   │
│   └── 📁 database/                      🗄️ Database headers
│       └── 📄 database.h
│
├── 📁 ui/                                🎨 Qt Designer files (.ui)
│   ├── 📄 mainwindow.ui                  🖼️ Main window layout
│   ├── 📄 studentdialog.ui               👨‍🎓 Student form layout
│   ├── 📄 clubdialog.ui                  🏆 Club form layout
│   ├── 📄 membershipdialog.ui            🔗 Membership form layout
│   ├── 📄 logindialog.ui                 🔐 Login layout
│   └── 📄 registerdialog.ui              📝 Registration layout
│
├── 📁 resources/                         🎁 Application resources
│   ├── 📄 style.qss                      🎨 Stylesheet (CSS-like)
│   └── 📄 resources.qrc                  📦 Resource collection file
│
├── 📁 icons/                             🖼️ Application icons
│
├── 📁 docs/                              📚 Documentation
│   ├── 📄 ARCHITECTURE.md                🏗️ Architecture guide
│   ├── 📄 QUICK_START.md                 🚀 Quick start guide
│   └── 📄 UI_ENHANCEMENTS.md             🎨 UI/UX documentation
│
└── 📁 build/                             🔨 Build artifacts (auto-generated)
    ├── 📁 obj/                           🔧 Object files
    ├── 📁 moc/                           ⚙️ Meta-object compiler output
    ├── 📁 rcc/                           📦 Resource compiler output
    └── 📁 ui/                            🖼️ Generated UI headers

```

## 📊 File Count Summary

| Category          | Count | Description                          |
|-------------------|-------|--------------------------------------|
| Source Files      | 7     | .cpp implementation files            |
| Header Files      | 7     | .h declaration files                 |
| UI Files          | 6     | Qt Designer layout files             |
| Resources         | 2     | Stylesheets and resource definitions |
| Documentation     | 5     | README, guides, and references       |
| Configuration     | 3     | Project, git, and license files      |

## 🎯 Key Directories Explained

### `/src` - Source Code
Contains all C++ implementation files organized by functionality:
- **Main application**: Entry point and main window
- **Dialogs**: Form implementations for data entry
- **Database**: Data access layer with SQL operations

**Why?** Separates implementation from declarations, following C++ best practices.

### `/include` - Headers
Contains all header files with class declarations:
- Mirrors the structure of `/src`
- Public interfaces and API definitions
- Qt meta-object declarations (Q_OBJECT)

**Why?** Clean separation between interface and implementation.

### `/ui` - User Interface
Qt Designer XML files defining visual layouts:
- Created/edited in Qt Designer
- Compiled into C++ headers during build
- Define widgets, layouts, and properties

**Why?** Visual design separated from code logic.

### `/resources` - Assets
Application resources embedded in the executable:
- **style.qss**: Global stylesheet (Qt's CSS)
- **resources.qrc**: Resource collection manifest
- Icons and images (referenced in .qrc)

**Why?** Single-file deployment, resources always available.

### `/docs` - Documentation
Comprehensive project documentation:
- **ARCHITECTURE.md**: Technical design and patterns
- **QUICK_START.md**: Getting started guide
- **UI_ENHANCEMENTS.md**: UI/UX design choices

**Why?** Knowledge sharing and onboarding.

### `/build` - Build Output
Auto-generated files during compilation:
- Not in version control (.gitignore)
- Recreated on each build
- Platform and configuration specific

**Why?** Keeps source tree clean, allows multiple build configurations.

## 🔄 Build Process Flow

```
┌─────────────┐
│  Developer  │
└──────┬──────┘
       │
       ├──────► 📄 Edit .cpp/.h files ──────► src/, include/
       │
       ├──────► 🎨 Design UI ──────────────► ui/ (Qt Designer)
       │
       └──────► 🎨 Style application ──────► resources/style.qss
       
                        ⬇️
                        
┌───────────────────────────────────────────────────────┐
│                    qmake                               │
│  Reads: Gestion-Club-Qt.pro                           │
│  Generates: Makefile                                  │
└──────────────────┬────────────────────────────────────┘
                   ⬇️
┌───────────────────────────────────────────────────────┐
│                    make                                │
│  1. moc (Meta-Object Compiler) ────► build/moc/      │
│  2. uic (UI Compiler) ────────────► build/ui/         │
│  3. rcc (Resource Compiler) ───────► build/rcc/       │
│  4. C++ Compiler ──────────────────► build/obj/       │
│  5. Linker ────────────────────────► Executable       │
└──────────────────┬────────────────────────────────────┘
                   ⬇️
         ✅ Gestion-Club-Qt.exe
```

## 📐 Architecture Layers

```
┌─────────────────────────────────────────────┐
│          Presentation Layer                  │
│  📁 ui/*.ui + resources/style.qss           │
│  (Visual design, layouts, styling)          │
└──────────────┬──────────────────────────────┘
               │
┌──────────────▼──────────────────────────────┐
│           View Layer                         │
│  📁 src/*.cpp + include/*.h                 │
│  (UI logic, event handling, user interaction)│
└──────────────┬──────────────────────────────┘
               │
┌──────────────▼──────────────────────────────┐
│        Business Logic Layer                  │
│  📁 src/database/ + include/database/       │
│  (Database operations, business rules)      │
└──────────────┬──────────────────────────────┘
               │
┌──────────────▼──────────────────────────────┐
│          Data Layer                          │
│  💾 club_management.db (SQLite)             │
│  (Persistent data storage)                  │
└─────────────────────────────────────────────┘
```

## 🗂️ File Naming Conventions

| Type              | Pattern                | Example                |
|-------------------|------------------------|------------------------|
| Main Window       | `mainwindow.*`         | `mainwindow.cpp`       |
| Dialog Classes    | `*dialog.*`            | `studentdialog.h`      |
| Database Classes  | `database.*`           | `database.cpp`         |
| UI Files          | `*.ui`                 | `mainwindow.ui`        |
| Resources         | `resources.qrc`        | `resources.qrc`        |
| Stylesheets       | `*.qss`                | `style.qss`            |
| Documentation     | `*.md` (uppercase)     | `README.md`            |

## 🚀 Quick Navigation Guide

**Want to...?**

- 🔧 **Modify UI logic** → Check `/src` and `/include`
- 🎨 **Change appearance** → Edit `/resources/style.qss`
- 🖼️ **Redesign layout** → Open `/ui/*.ui` in Qt Designer
- 💾 **Add database feature** → Edit `/src/database/database.cpp`
- 📚 **Read documentation** → Browse `/docs` folder
- ⚙️ **Configure build** → Modify `Gestion-Club-Qt.pro`
- 🐛 **Debug build issues** → Check `/build` output

## 📦 Deployment

### For Distribution
```
MyApp-Distribution/
├── Gestion-Club-Qt.exe         (Executable)
├── Qt6Core.dll                 (Qt libraries)
├── Qt6Gui.dll
├── Qt6Widgets.dll
├── Qt6Sql.dll
├── platforms/                  (Qt plugins)
│   └── qwindows.dll
└── sqldrivers/                 (Database drivers)
    └── qsqlite.dll
```

### Included in Executable
- UI layouts (from `ui/`)
- Stylesheets (from `resources/`)
- Icons (from `resources/`)

**Not included**: Database file (created at runtime)

## 🔍 Finding Things

### By Functionality
- **Authentication**: `logindialog.*`, `registerdialog.*`
- **Student Management**: `studentdialog.*`, main tab in `mainwindow.*`
- **Club Management**: `clubdialog.*`, main tab in `mainwindow.*`
- **Memberships**: `membershipdialog.*`, main tab in `mainwindow.*`
- **Database**: `database.*` in `/src/database` and `/include/database`

### By Type
- **All C++ code**: `/src/**/*.cpp`
- **All headers**: `/include/**/*.h`
- **All layouts**: `/ui/*.ui`
- **All documentation**: `/docs/*.md` and `*.md` in root

## 📈 Growth Path

As the project grows, consider adding:

```
├── 📁 tests/                   (Unit and integration tests)
├── 📁 utils/                   (Utility classes)
├── 📁 models/                  (Data models)
├── 📁 views/                   (Custom widgets)
├── 📁 controllers/             (MVC controllers)
├── 📁 services/                (Business services)
└── 📁 translations/            (i18n files)
```

---

**Last Updated**: December 2025  
**Structure Version**: 1.0 (Refactored)
