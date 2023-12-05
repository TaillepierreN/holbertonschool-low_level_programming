# Makefile Project README

This repository contains a series of Makefiles for the "holbertonschool-low_level_programming" project. Each Makefile corresponds to a specific task and demonstrates the use of Make for building and managing a C project.

## Task 0 - Basic Makefile

**File:** 0-Makefile

**Objective:**
Create a basic Makefile that compiles the source files (`main.c` and `school.c`) into an executable named `school`. The Makefile includes a single rule, `all`, which builds the executable.

**Usage:**
```bash
make -f 0-Makefile
```

## Task 1 - Makefile with Compiler and Source Variables

**File:** 1-Makefile

**Objective:**
Extend the Makefile to include variables for the compiler (`CC`) and source files (`SRC`). The `all` rule should use these variables to build the executable.

**Usage:**
```bash
make -f 1-Makefile
```

## Task 2 - Makefile with Object Files

**File:** 2-Makefile

**Objective:**
Create a more useful Makefile that introduces variables for object files (`OBJ`) and the executable name (`NAME`). The `all` rule should recompile only the updated source files.

**Usage:**
```bash
make -f 2-Makefile
```

## Task 3 - Makefile with Cleaning Rules

**File:** 3-Makefile

**Objective:**
Enhance the Makefile to include rules for cleaning the project. Rules include `clean`, `oclean`, `fclean`, and `re`. These rules ensure the project can be cleaned, object files removed, and the project recompiled.

**Usage:**
```bash
make -f 3-Makefile
```

## Task 4 - Complete Makefile with Compiler Flags

**File:** 4-Makefile

**Objective:**
Create a comprehensive Makefile that includes additional rules (`clean`, `oclean`, `fclean`, `re`) and introduces the `CFLAGS` variable for compiler flags. The `all` rule should recompile only updated source files.

**Usage:**
```bash
make -f 4-Makefile
```

Feel free to explore each Makefile for a deeper understanding of how Makefiles can be structured and utilized in C projects.