# Configuration MySQL pour Gestion Club

## Étapes d'installation

### 1. Installer MySQL Server
- Téléchargez MySQL depuis: https://dev.mysql.com/downloads/mysql/
- Installez et configurez avec le mot de passe root (ou laissez vide)

### 2. Installer MySQL Connector/C
- Téléchargez depuis: https://dev.mysql.com/downloads/connector/c/
- Installez dans `C:\Program Files\MySQL\MySQL Connector C 6.1` (ou 8.0)

### 3. Créer la base de données
Ouvrez MySQL Workbench ou ligne de commande MySQL:
```bash
mysql -u root -p
```
Puis exécutez:
```sql
source database_schema.sql
```
Ou copiez-collez le contenu du fichier `database_schema.sql`

### 4. Compilation avec MySQL

#### Option A: Avec g++ (MSYS2/MinGW)
```bash
g++ -o GestionClub Main.cpp Src/*.cpp -I"C:/Program Files/MySQL/MySQL Connector C 6.1/include" -L"C:/Program Files/MySQL/MySQL Connector C 6.1/lib" -lmysql
```

#### Option B: Créer un Makefile
Créez un fichier `Makefile`:
```makefile
CXX = g++
MYSQL_INCLUDE = C:/Program Files/MySQL/MySQL Connector C 6.1/include
MYSQL_LIB = C:/Program Files/MySQL/MySQL Connector C 6.1/lib

CXXFLAGS = -I"$(MYSQL_INCLUDE)"
LDFLAGS = -L"$(MYSQL_LIB)" -lmysql

SOURCES = Main.cpp Src/Etudiant.cpp Src/Club.cpp Src/Membre.cpp Src/Database.cpp Src/GestionClub.cpp
TARGET = GestionClub.exe

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(SOURCES) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET)

clean:
	del $(TARGET)

run: $(TARGET)
	./$(TARGET)
```

Puis compilez avec:
```bash
make
```

### 5. Copier la DLL
Copiez `libmysql.dll` depuis `C:\Program Files\MySQL\MySQL Connector C 6.1\lib` vers le dossier de votre projet.

### 6. Configuration de la connexion
Dans `Main.cpp`, modifiez si nécessaire:
```cpp
Database db("localhost", "root", "votre_mot_de_passe", "gestion_club");
```

## Structure de la base de données

### Table: etudiants
- id (INT, PRIMARY KEY, AUTO_INCREMENT)
- nom (VARCHAR 100)
- prenom (VARCHAR 100)
- tele (VARCHAR 20)

### Table: clubs
- id (INT, PRIMARY KEY, AUTO_INCREMENT)
- nom (VARCHAR 100)
- description (TEXT)

### Table: membres
- id (INT, PRIMARY KEY, AUTO_INCREMENT)
- etudiant_id (INT, FOREIGN KEY)
- club_id (INT, FOREIGN KEY)
- date_adhesion (DATE)

## Utilisation de la classe Database

```cpp
// Créer une instance
Database db("localhost", "root", "", "gestion_club");

// Se connecter
if (db.connect()) {
    // Requête SELECT
    MYSQL_RES* result = db.executeQuery("SELECT * FROM etudiants");
    if (result != nullptr) {
        MYSQL_ROW row;
        while ((row = mysql_fetch_row(result)) != nullptr) {
            cout << row[0] << " " << row[1] << endl;
        }
        mysql_free_result(result);
    }
    
    // Requête INSERT/UPDATE/DELETE
    db.executeUpdate("INSERT INTO clubs (nom, description) VALUES ('Test', 'Description')");
    
    // Déconnexion
    db.disconnect();
}
```