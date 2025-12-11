# 📚 Libft - Custom C Library

<div align="center">

![42 School](https://img.shields.io/badge/42-School-000000?style=for-the-badge&logo=42&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![License](https://img.shields.io/badge/license-MIT-blue?style=for-the-badge)

*A comprehensive C library recreating standard library functions and more*

[English](#english) | [Français](#français)

</div>

---

## English

### 📖 Table of Contents
- [About](#about)
- [Features](#features)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Functions List](#functions-list)
- [Author](#author)

### 🎯 About

**Libft** is a custom C library developed as part of the 42 school curriculum. This project involves recreating various standard C library functions and extending them with additional utilities. The library is organized into modular components, making it easy to maintain and extend.

This library serves as a foundation for future C projects, providing reliable and well-tested implementations of common functions.

### ✨ Features

- **70+ functions** organized into logical modules
- **Modular architecture** with separate headers for each category
- **Well-documented** code with detailed function descriptions
- **Strict compilation** with `-Wall -Wextra -Werror` flags
- **Memory-safe** implementations
- **Extended functionality** beyond standard library functions

### 📂 Project Structure

```
libft/
├── char/           # Character manipulation functions
├── str/            # String manipulation functions
├── memory/         # Memory management functions
├── list/           # Linked list operations
├── math/           # Mathematical utilities
├── convert/        # Type conversion functions
├── print/          # Output functions (ft_printf, fd output)
├── gnl/            # Get Next Line implementation
├── includes/       # Header files
│   └── libft/
└── Makefile        # Build configuration
```

### 🚀 Installation

#### Prerequisites
- GCC or Clang compiler
- Make

#### Build Instructions

1. **Clone the repository:**
```bash
git clone https://github.com/EniumRaphael/libft.git
cd libft
```

2. **Compile the library:**
```bash
make
```

This will create `libft.a`, a static library ready to use in your projects.

3. **Clean build artifacts:**
```bash
make clean      # Remove object files
make fclean     # Remove object files and library
make re         # Rebuild from scratch
```

### 💻 Usage

#### Basic Usage Example

1. **Include the headers in your code:**
```c
#include "libft/str.h"
#include "libft/memory.h"
#include "libft/print.h"
```

2. **Compile your program with libft:**
```bash
clang -Wall -Wextra -Werror -I includes your_program.c -L. -lft -o your_program
```

#### Example Program

```c
#include "libft/str.h"
#include "libft/print.h"
#include "libft/convert.h"

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    ft_printf("String: %s\n", str);
    ft_printf("Length: %d\n", ft_strlen(str));
    
    int num = ft_atoi("42");
    char *num_str = ft_itoa(num);
    ft_printf("Number: %s\n", num_str);
    
    free(str);
    free(num_str);
    return (0);
}
```

### 🧪 Testing

Run the test suite:
```bash
make test
```

This will compile and run all tests in the `test/` directory.

### 📋 Functions List

#### Character Functions (`char/`)
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_isspace` | Check if character is whitespace |
| `ft_toupper` | Convert to uppercase |
| `ft_tolower` | Convert to lowercase |

#### String Functions (`str/`)
| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculate string length |
| `ft_strchr` | Locate character in string |
| `ft_strrchr` | Locate last occurrence of character |
| `ft_strcmp` | Compare two strings |
| `ft_strncmp` | Compare strings up to n characters |
| `ft_strcpy` | Copy string |
| `ft_strncpy` | Copy n characters of string |
| `ft_strdup` | Duplicate string |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Trim characters from string |
| `ft_split` | Split string by delimiter |
| `ft_substr` | Extract substring |
| `ft_strmapi` | Apply function to each character |
| `ft_striteri` | Iterate through string with function |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strnstr` | Locate substring in string |

#### Memory Functions (`memory/`)
| Function | Description |
|----------|-------------|
| `ft_memset` | Fill memory with constant byte |
| `ft_bzero` | Zero a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory with overlap handling |
| `ft_memchr` | Scan memory for character |
| `ft_memcmp` | Compare memory areas |
| `ft_calloc` | Allocate and zero memory |

#### Linked List Functions (`list/`)
| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new list element |
| `ft_lstadd_front` | Add element at the beginning |
| `ft_lstadd_back` | Add element at the end |
| `ft_lstsize` | Count list elements |
| `ft_lstlast` | Get last element |
| `ft_lstdelone` | Delete one element |
| `ft_lstclear` | Delete and free all elements |
| `ft_lstiter` | Iterate through list |
| `ft_lstmap` | Map function over list |

#### Mathematical Functions (`math/`)
| Function | Description |
|----------|-------------|
| `ft_abs` | Absolute value |
| `ft_power` | Power calculation |
| `ft_sqrt` | Square root |
| `ft_min` | Minimum of two numbers |
| `ft_max` | Maximum of two numbers |

#### Conversion Functions (`convert/`)
| Function | Description |
|----------|-------------|
| `ft_atoi` | String to integer |
| `ft_atoll` | String to long long |
| `ft_atou` | String to unsigned |
| `ft_itoa` | Integer to string |

#### Print Functions (`print/`)
| Function | Description |
|----------|-------------|
| `ft_printf` | Formatted output to stdout |
| `ft_dprintf` | Formatted output to file descriptor |
| `ft_putchar_fd` | Output character to fd |
| `ft_putstr_fd` | Output string to fd |
| `ft_putendl_fd` | Output string with newline to fd |
| `ft_putnbr_fd` | Output number to fd |

#### Get Next Line (`gnl/`)
| Function | Description |
|----------|-------------|
| `get_next_line` | Read line from file descriptor |
| `get_next_line_clear` | Free GNL static memory |

### 👨‍💻 Author

**Raphael Parodi** (rparodi)
- 42 School Student
- GitHub: [@EniumRaphael](https://github.com/EniumRaphael)

### 📄 License

This project is part of the 42 school curriculum. Feel free to use it for learning purposes.

---

## Français

### 📖 Table des matières
- [À propos](#à-propos)
- [Fonctionnalités](#fonctionnalités)
- [Structure du projet](#structure-du-projet)
- [Installation](#installation-1)
- [Utilisation](#utilisation-1)
- [Tests](#tests)
- [Liste des fonctions](#liste-des-fonctions)
- [Auteur](#auteur-1)

### 🎯 À propos

**Libft** est une bibliothèque C personnalisée développée dans le cadre du cursus de l'école 42. Ce projet consiste à recréer diverses fonctions de la bibliothèque standard C et à les étendre avec des utilitaires supplémentaires. La bibliothèque est organisée en composants modulaires, ce qui la rend facile à maintenir et à étendre.

Cette bibliothèque sert de fondation pour les futurs projets en C, fournissant des implémentations fiables et bien testées de fonctions courantes.

### ✨ Fonctionnalités

- **Plus de 70 fonctions** organisées en modules logiques
- **Architecture modulaire** avec des headers séparés pour chaque catégorie
- **Code bien documenté** avec des descriptions détaillées des fonctions
- **Compilation stricte** avec les flags `-Wall -Wextra -Werror`
- **Implémentations sûres** au niveau mémoire
- **Fonctionnalités étendues** au-delà de la bibliothèque standard

### 📂 Structure du projet

```
libft/
├── char/           # Fonctions de manipulation de caractères
├── str/            # Fonctions de manipulation de chaînes
├── memory/         # Fonctions de gestion mémoire
├── list/           # Opérations sur listes chaînées
├── math/           # Utilitaires mathématiques
├── convert/        # Fonctions de conversion de types
├── print/          # Fonctions de sortie (ft_printf, sortie fd)
├── gnl/            # Implémentation de Get Next Line
├── includes/       # Fichiers d'en-tête
│   └── libft/
└── Makefile        # Configuration de compilation
```

### 🚀 Installation

#### Prérequis
- Compilateur GCC ou Clang
- Make

#### Instructions de compilation

1. **Cloner le dépôt :**
```bash
git clone https://github.com/EniumRaphael/libft.git
cd libft
```

2. **Compiler la bibliothèque :**
```bash
make
```

Cela créera `libft.a`, une bibliothèque statique prête à être utilisée dans vos projets.

3. **Nettoyer les artifacts de compilation :**
```bash
make clean      # Supprimer les fichiers objets
make fclean     # Supprimer les fichiers objets et la bibliothèque
make re         # Recompiler depuis zéro
```

### 💻 Utilisation

#### Exemple d'utilisation basique

1. **Inclure les headers dans votre code :**
```c
#include "libft/str.h"
#include "libft/memory.h"
#include "libft/print.h"
```

2. **Compiler votre programme avec libft :**
```bash
clang -Wall -Wextra -Werror -I includes votre_programme.c -L. -lft -o votre_programme
```

#### Programme exemple

```c
#include "libft/str.h"
#include "libft/print.h"
#include "libft/convert.h"

int main(void)
{
    char *str = ft_strdup("Bonjour, 42!");
    ft_printf("Chaîne: %s\n", str);
    ft_printf("Longueur: %d\n", ft_strlen(str));
    
    int num = ft_atoi("42");
    char *num_str = ft_itoa(num);
    ft_printf("Nombre: %s\n", num_str);
    
    free(str);
    free(num_str);
    return (0);
}
```

### 🧪 Tests

Exécuter la suite de tests :
```bash
make test
```

Cela compilera et exécutera tous les tests du répertoire `test/`.

### 📋 Liste des fonctions

#### Fonctions de caractères (`char/`)
| Fonction | Description |
|----------|-------------|
| `ft_isalpha` | Vérifie si le caractère est alphabétique |
| `ft_isdigit` | Vérifie si le caractère est un chiffre |
| `ft_isalnum` | Vérifie si le caractère est alphanumérique |
| `ft_isascii` | Vérifie si le caractère est ASCII |
| `ft_isprint` | Vérifie si le caractère est imprimable |
| `ft_isspace` | Vérifie si le caractère est un espace blanc |
| `ft_toupper` | Convertit en majuscule |
| `ft_tolower` | Convertit en minuscule |

#### Fonctions de chaînes (`str/`)
| Fonction | Description |
|----------|-------------|
| `ft_strlen` | Calcule la longueur d'une chaîne |
| `ft_strchr` | Localise un caractère dans une chaîne |
| `ft_strrchr` | Localise la dernière occurrence d'un caractère |
| `ft_strcmp` | Compare deux chaînes |
| `ft_strncmp` | Compare n caractères de chaînes |
| `ft_strcpy` | Copie une chaîne |
| `ft_strncpy` | Copie n caractères d'une chaîne |
| `ft_strdup` | Duplique une chaîne |
| `ft_strjoin` | Concatène deux chaînes |
| `ft_strtrim` | Supprime des caractères d'une chaîne |
| `ft_split` | Divise une chaîne par délimiteur |
| `ft_substr` | Extrait une sous-chaîne |
| `ft_strmapi` | Applique une fonction à chaque caractère |
| `ft_striteri` | Itère sur une chaîne avec une fonction |
| `ft_strlcpy` | Copie de chaîne avec limite de taille |
| `ft_strlcat` | Concaténation de chaîne avec limite |
| `ft_strnstr` | Localise une sous-chaîne |

#### Fonctions mémoire (`memory/`)
| Fonction | Description |
|----------|-------------|
| `ft_memset` | Remplit la mémoire avec un octet constant |
| `ft_bzero` | Met à zéro une chaîne d'octets |
| `ft_memcpy` | Copie une zone mémoire |
| `ft_memmove` | Copie mémoire avec gestion de chevauchement |
| `ft_memchr` | Recherche un caractère en mémoire |
| `ft_memcmp` | Compare des zones mémoire |
| `ft_calloc` | Alloue et initialise à zéro |

#### Fonctions de listes chaînées (`list/`)
| Fonction | Description |
|----------|-------------|
| `ft_lstnew` | Crée un nouvel élément de liste |
| `ft_lstadd_front` | Ajoute un élément au début |
| `ft_lstadd_back` | Ajoute un élément à la fin |
| `ft_lstsize` | Compte les éléments de la liste |
| `ft_lstlast` | Obtient le dernier élément |
| `ft_lstdelone` | Supprime un élément |
| `ft_lstclear` | Supprime et libère tous les éléments |
| `ft_lstiter` | Itère sur la liste |
| `ft_lstmap` | Applique une fonction sur la liste |

#### Fonctions mathématiques (`math/`)
| Fonction | Description |
|----------|-------------|
| `ft_abs` | Valeur absolue |
| `ft_power` | Calcul de puissance |
| `ft_sqrt` | Racine carrée |
| `ft_min` | Minimum de deux nombres |
| `ft_max` | Maximum de deux nombres |

#### Fonctions de conversion (`convert/`)
| Fonction | Description |
|----------|-------------|
| `ft_atoi` | Chaîne vers entier |
| `ft_atoll` | Chaîne vers long long |
| `ft_atou` | Chaîne vers unsigned |
| `ft_itoa` | Entier vers chaîne |

#### Fonctions d'affichage (`print/`)
| Fonction | Description |
|----------|-------------|
| `ft_printf` | Sortie formatée vers stdout |
| `ft_dprintf` | Sortie formatée vers descripteur de fichier |
| `ft_putchar_fd` | Affiche un caractère sur fd |
| `ft_putstr_fd` | Affiche une chaîne sur fd |
| `ft_putendl_fd` | Affiche une chaîne avec retour ligne sur fd |
| `ft_putnbr_fd` | Affiche un nombre sur fd |

#### Get Next Line (`gnl/`)
| Fonction | Description |
|----------|-------------|
| `get_next_line` | Lit une ligne depuis un descripteur de fichier |
| `get_next_line_clear` | Libère la mémoire statique de GNL |

### 👨‍💻 Auteur

**Raphael Parodi** (rparodi)
- Étudiant à l'école 42
- GitHub: [@EniumRaphael](https://github.com/EniumRaphael)

### 📄 Licence

Ce projet fait partie du cursus de l'école 42. N'hésitez pas à l'utiliser à des fins d'apprentissage.

---

<div align="center">

**Made with ❤️ at 42 School**

</div>
