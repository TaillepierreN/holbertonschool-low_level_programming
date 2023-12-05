# Project: Static Libraries

## Learning Objectives

### General
- **What is a static library, how does it work, how to create one, and how to use it**
  - A static library is a collection of object files (compiled source code) bundled together. It works by linking the compiled object files directly into the executable at compile time, creating a standalone executable file. To create a static library, you compile the source code into object files and then use the `ar` (archiver) command to bundle them together into a library. Finally, you can use the library by including its header file and linking it during compilation.

- **Basic usage of ar, ranlib, nm**
  - `ar`: The archiver command is used to create and modify static libraries. It allows you to create an archive, add or delete files from an archive, and list the contents of an archive.
  - `ranlib`: The ranlib command is used to generate an index for the archive, which improves the speed of linking.
  - `nm`: The nm command is used to display the symbols (functions and variables) defined in an object file or a library.

## Tasks

### 0. A library is not a luxury but one of the necessities of life
- **Create the static library libmy.a**
  - Create a static library called `libmy.a` containing various functions (_putchar, _islower, _isalpha, _abs, _isupper, _isdigit, _strlen, _puts, _strcpy, _atoi, _strcat, _strncat, _strncpy, _strcmp, _memset, _memcpy, _strchr, _strspn, _strpbrk, _strstr).
  - Push the main.h file to the repository, containing all the prototypes of the functions.

### 1. Without libraries, what have we? We have no past and no future
- **Create a script called create_static_lib.sh**
  - The script should create a static library called `liball.a` from all the .c files in the current directory.

## Example Usage

### Compiling and Linking with the Static Library

```bash
# Compile the main.c file using the static library libmy.a
gcc -std=gnu89 main.c -L. -lmy -o quote

# Run the executable
./quote
```

### Running create_static_lib.sh

```bash
# Run the script to create the static library liball.a
./create_static_lib.sh

# Check the contents of the created library
ar -t liball.a
```

## Repository Structure

- **GitHub Repository:** holbertonschool-low_level_programming
- **Directory:** static_libraries
- **Files:**
  - libmy.a
  - main.h
  - main.c (example usage)
  - create_static_lib.sh