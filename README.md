
# _printf

Function that prints a formatted string to standard output.
Custom implementation of the C standard library function `printf`.

# Flowchart

<img width="1814" height="1348" alt="DiagramPrintfFinal" src="https://github.com/user-attachments/assets/945edf95-5e51-47de-aea6-595066de0ab9" />


## Project Description

This project is a simplified recreation of the `printf` function from the C standard library.

| Specifier  | Description                          |
|---------------|------------------------------------- |
| `%c`          | Print a character                    |
| `%s`          | Print a string of character          |
| `%d`          | Print a signed decimal               |
| `%i`          | Print an integer (same as `%d`)      |
| `%r`          | Print a string of character backward |
| `%%`          | Print the character  `%`             |

---
## Compilation command

Use the following `gcc` command to compile all source files into an executable:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf
```
## Requirements

- **Allowed editors**
  - `vi`
  - `vim`
  - `emacs`

- **File formatting**
  - All the files must end with a **new line**
  - A `README.md` file at the **root of the project folder** is **mandatory**

- **Coding style**
  - The code must follow the **Betty style**
  - Using:
    - `betty-style.pl`
    - `betty-doc.pl`

- **Code constraints**
  - Global variables are **not allowed**
  - No more than **5 functions per file**

- **Header file**
  - The prototypes of all the functions must be included in a header file named:
    ```
    main.h
    ```
  - All the header files must be **include guarded**

- **Main files**
  - There is no main file pushed, you have to create it yourself to compile

## Examples

Here are some examples of how to use the `_printf` function:

### 1. Print a date (D/M/Y)

```c
_printf("%s %d %s %d\n", "Today is", 22, "July", 2025);

=>  Today is 22 July 2025
```

### 2. Print the first letter of a name and age

```c
char first = 'A';
int age = 8;

_printf("The first letter of my name is %c and I am %i\n", first, age);

=>  The first letter of my name is A and I am 8
```

### 3. Print a sentence using %

```c
_printf("Completion: 100%%\n");

=>  Completion: 100%
```
## Running Tests

You can test the `_printf` function by compiling it with a test file like `main.c`.

### Example test file:

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

## Authors

- Coquemont Antoine
- Maï Le Meur
