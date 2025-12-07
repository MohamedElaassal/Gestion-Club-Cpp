# 🚀 Quick Start Guide

Get up and running with Club Management System in 5 minutes!

## ⚡ Fast Track

```bash
# 1. Clone the repository
git clone https://github.com/MohamedElaassal/Gestion-Club-Cpp.git
cd Gestion-Club-Cpp

# 2. Open in Qt Creator
# File → Open File or Project → Gestion-Club-Qt.pro

# 3. Build and Run (Ctrl+R)
```

## 📋 Prerequisites Checklist

Before you begin, ensure you have:

- ✅ **Qt 6.10.1 or higher** - [Download Qt](https://www.qt.io/download)
- ✅ **Qt Creator** - Included with Qt installation
- ✅ **C++ Compiler** - MinGW (Windows), GCC (Linux), or Clang (macOS)
- ✅ **Git** - For cloning the repository

## 🎯 Step-by-Step Installation

### Step 1: Install Qt

1. Download Qt from [qt.io/download](https://www.qt.io/download)
2. Run the installer
3. Select these components during installation:
   - ✅ Qt 6.10.1 (or latest)
   - ✅ MinGW 64-bit (Windows)
   - ✅ Qt Creator
   - ✅ Qt SQL Module
   - ✅ Qt Widgets Module

### Step 2: Clone the Repository

**Option A: Using Git**
```bash
git clone https://github.com/MohamedElaassal/Gestion-Club-Cpp.git
cd Gestion-Club-Cpp
```

**Option B: Download ZIP**
1. Go to repository page
2. Click "Code" → "Download ZIP"
3. Extract to your desired location

### Step 3: Open in Qt Creator

1. Launch **Qt Creator**
2. Click **File** → **Open File or Project**
3. Navigate to the project folder
4. Select **Gestion-Club-Qt.pro**
5. Click **Open**

### Step 4: Configure the Project

1. Qt Creator will show "Configure Project" screen
2. Select **Desktop Qt 6.10.1 MinGW 64-bit** kit
3. Click **Configure Project**

### Step 5: Build the Project

**Option A: Using Qt Creator**
- Press **Ctrl+B** (Windows/Linux) or **Cmd+B** (macOS)
- Or click **Build** → **Build Project**

**Option B: Using Command Line**
```bash
# Generate Makefile
qmake Gestion-Club-Qt.pro

# Build
make
```

### Step 6: Run the Application

**Using Qt Creator**
- Press **Ctrl+R** (Windows/Linux) or **Cmd+R** (macOS)
- Or click the green **▶️ Run** button

**Using Command Line**
```bash
# Windows
.\release\Gestion-Club-Qt.exe

# Linux/macOS
./Gestion-Club-Qt
```

## 🎓 First Time Usage

### 1. Register a User

When you first launch the app:

1. Click **"S'inscrire"** (Register)
2. Fill in the registration form:
   - **Username**: Your desired username
   - **Email**: Your email address
   - **Password**: A secure password
   - **Confirm Password**: Re-enter password
3. Click **"S'inscrire"** to complete registration

### 2. Login

1. Enter your username and password
2. Click **"Se connecter"** (Login)
3. You'll be taken to the main dashboard

### 3. Add Your First Student

1. Go to **"📚 Students"** tab
2. Click **"Add Student"** button
3. Fill in student details:
   - Name
   - First Name
   - Email
   - Phone
   - Date of Birth
4. Click **"OK"** to save

### 4. Create a Club

1. Go to **"🏆 Clubs"** tab
2. Click **"Add Club"** button
3. Enter:
   - Club Name
   - Description
4. Click **"OK"** to save

### 5. Add Membership

1. Go to **"🔗 Memberships"** tab
2. Click **"Add Membership"** button
3. Select:
   - A student from the dropdown
   - A club from the dropdown
4. Click **"OK"** to create membership

## 🎨 Quick UI Tour

### Main Window Components

```
┌─────────────────────────────────────────────────┐
│  🎓 Club Management System     🚪 Déconnexion  │  ← Header
├─────────────────────────────────────────────────┤
│  📚 Students │ 🏆 Clubs │ 🔗 Memberships       │  ← Tabs
├─────────────────────────────────────────────────┤
│  🔍 Search: [________________] [Search]         │  ← Search Bar
├─────────────────────────────────────────────────┤
│                                                 │
│            📊 Data Table View                   │  ← Table
│                                                 │
├─────────────────────────────────────────────────┤
│  [➕ Add] [✏️ Edit] [🗑️ Delete]                │  ← Action Buttons
└─────────────────────────────────────────────────┘
```

### Tab Overview

- **📚 Students Tab**: Manage student records
- **🏆 Clubs Tab**: Manage club information
- **🔗 Memberships Tab**: Manage student-club relationships

## 🔧 Troubleshooting

### Build Errors

**Problem**: `qmake: command not found`
```bash
# Solution: Add Qt to PATH
export PATH="/path/to/Qt/6.10.1/gcc_64/bin:$PATH"
```

**Problem**: Missing SQL module
```bash
# Solution: Reinstall Qt with SQL module checked
```

### Runtime Errors

**Problem**: "Could not connect to the database"
```bash
# Solution: Ensure you have write permissions in the app directory
# Database file is created automatically on first run
```

**Problem**: Stylesheet not loading
```bash
# Solution: Verify resources.qrc includes style.qss
# Run qmake again to regenerate resource files
```

### Qt Creator Issues

**Problem**: Kit not detected
```bash
# Solution:
# 1. Go to Tools → Options → Kits
# 2. Auto-detect button
# 3. Manually add kit if needed
```

## 📱 Keyboard Shortcuts

### Qt Creator
- **Build**: `Ctrl+B`
- **Run**: `Ctrl+R`
- **Debug**: `F5`
- **Stop**: `Shift+F5`
- **Switch Header/Source**: `F4`

### Application
- **Tab Navigation**: `Ctrl+Tab`
- **Search**: `Ctrl+F` (when implemented)
- **Close Dialog**: `Esc`
- **Accept Dialog**: `Enter`

## 📚 Next Steps

Now that you're set up:

1. ✅ **Explore Features**: Try all CRUD operations
2. ✅ **Read Documentation**: Check `docs/ARCHITECTURE.md`
3. ✅ **Customize**: Modify `resources/style.qss` for custom themes
4. ✅ **Contribute**: See `CONTRIBUTING.md` to contribute
5. ✅ **Report Issues**: Found a bug? Open an issue on GitHub

## 🎓 Learning Resources

### Qt Fundamentals
- [Qt Widgets Tutorial](https://doc.qt.io/qt-6/qtwidgets-tutorials-notepad-example.html)
- [Qt SQL Programming](https://doc.qt.io/qt-6/qtsql-index.html)
- [Signals & Slots](https://doc.qt.io/qt-6/signalsandslots.html)

### C++ Basics
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/)
- [Modern C++](https://en.cppreference.com/w/)

### Database
- [SQLite Tutorial](https://www.sqlitetutorial.net/)
- [Qt SQL Examples](https://doc.qt.io/qt-6/qtsql-examples.html)

## 💡 Pro Tips

1. **Regular Backups**: The database file `club_management.db` contains all data
2. **Version Control**: Use Git branches for experimenting with features
3. **Debug Mode**: Build in Debug mode for development (more informative errors)
4. **Release Mode**: Build in Release mode for production (optimized performance)
5. **Database Browser**: Use [DB Browser for SQLite](https://sqlitebrowser.org/) to view the database

## 🆘 Getting Help

### Before Asking for Help

1. Check this Quick Start Guide
2. Read the [README.md](README.md)
3. Review [ARCHITECTURE.md](docs/ARCHITECTURE.md)
4. Search existing [GitHub Issues](https://github.com/MohamedElaassal/Gestion-Club-Cpp/issues)

### How to Ask for Help

1. **GitHub Issues**: Best for bugs and feature requests
2. **Discussions**: For questions and general discussion
3. **Stack Overflow**: Tag with `qt` and `c++`

### Reporting Issues

Include:
- Qt version (`qmake --version`)
- OS and version
- Compiler and version
- Steps to reproduce
- Error messages or screenshots

## ✅ Verification Checklist

After completing setup:

- [ ] Application builds without errors
- [ ] Application runs successfully
- [ ] Can register a new user
- [ ] Can login with credentials
- [ ] Can add a student
- [ ] Can add a club
- [ ] Can create a membership
- [ ] Can search and filter data
- [ ] Can logout successfully

## 🎉 You're Ready!

Congratulations! You've successfully set up the Club Management System. Happy coding! 🚀

---

**Need more details?** Check out the full [README.md](README.md)

**Want to contribute?** Read [CONTRIBUTING.md](CONTRIBUTING.md)

**Questions?** Open an issue or discussion on GitHub
