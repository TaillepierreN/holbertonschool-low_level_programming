# Project README

## Learning Objectives

Welcome to the "Low Level Programming" project! The goal of this project is to provide you with a hands-on experience in understanding the fundamentals of C programming and related concepts. By the end of this project, you are expected to be able to explain the following topics without relying on external resources:

### General

1. **Why C programming is awesome**
2. **Inventors of C**: Learn about Dennis Ritchie, Brian Kernighan, and Linus Torvalds.
3. **Compilation Process**: Understand what happens when you type `gcc main.c`.
4. **Entry Point**: Comprehend what an entry point is in a C program.
5. **Main Function**: Understand the significance of the `main` function.
6. **Text Printing**: Learn how to print text using `printf`, `puts`, and `putchar`.
7. **Size Calculation**: Use the unary operator `sizeof` to get the size of a specific type.
8. **Compilation with gcc**: Know how to compile using `gcc` and understand the default program name.
9. **C Coding Style**: Familiarize yourself with the official C coding style and how to check your code with `betty-style`.
10. **Header Inclusion**: Learn how to find the right header to include when using a standard library function.
11. **Main Function's Influence**: Understand how the `main` function influences the return value of the program.

### 0-preprocessor

- Write a script that runs a C file through the preprocessor and saves the result into another file.
- The C file name will be saved in the variable `$CFILE`.
- The output should be saved in the file `c`.

### 1. Compiler

- Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.

### 2. Assembler

- Write a script that generates the assembly code of a C code and saves it in an output file.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

### 3. Name

- Write a script that compiles a C file and creates an executable named `cisfun`.
- The C file name will be saved in the variable `$CFILE`.

### 4. Hello, puts

- Write a C program that prints exactly "Programming is like building a multilingual puzzle," followed by a new line.
- Use the function `puts`.
- Your program should end with the value `0`.

### 5. Hello, printf

- Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.
- Use the function `printf`.
- Your program should return `0`.
- Your program should compile without warning when using the `-Wall` gcc option.

### 6. Size is not grandeur, and territory does not make a nation

- Write a C program that prints the size of various types on the computer it is compiled and run on.
- Produce the exact same output as in the example.
- Warnings are allowed.
- Your program should return `0`.
- If using Linux on Vagrant, you might need to install the package `libc6-dev-i386` to test the `-m32` gcc option.

### 8. Intel (Advanced)

- Write a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)

- Write a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts.
- Your program should return `1`.
- Your program should compile without any warnings when using the `-Wall` gcc option.

Feel free to explore, learn, and enjoy the journey into the depths of C programming!