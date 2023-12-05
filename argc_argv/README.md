# Project: argc, argv

## Learning Objectives

### General
- **How to use arguments passed to your program**
  - Learn how to retrieve and use command-line arguments passed to a C program using `argc` and `argv`.

- **What are two prototypes of main that you know of, and in which case do you use one or the other**
  - `int main(void)`: This prototype is used when the program does not take any command-line arguments.
  - `int main(int argc, char *argv[])`: This prototype is used when the program expects command-line arguments. `argc` represents the number of arguments, and `argv` is an array of strings containing the arguments.

- **How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters**
  - To avoid compiler warnings about unused variables or parameters, you can use `__attribute__((unused))` or `(void)` in the function parameter list.
  - For example:
    ```c
    void myFunction(__attribute__((unused)) int unusedVar) {
        // Function code
    }
    ```

## Tasks

### 0. It ain't what they call you, it's what you answer to
- **Write a program that prints its name**
  - Prints the name of the program, even if the program is renamed.
  - Example:
    ```bash
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
    $ ./mynameis
    ./mynameis
    ```

### 1. Silence is argument carried out by other means
- **Write a program that prints the number of arguments passed into it.**
  - Prints the number of arguments, followed by a new line.
  - Example:
    ```bash
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
    $ ./nargs
    0
    $ ./nargs hello
    1
    $ ./nargs "hello, world"
    1
    $ ./nargs hello, world
    2
    ```

### 2. The best argument against democracy is a five-minute conversation with the average voter
- **Write a program that prints all arguments it receives.**
  - Prints all arguments, one per line.
  - Example:
    ```bash
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
    $ ./args
    ./args
    $ ./args "You can do anything, but not everything."
    ./args
    You
    can
    do
    anything,
    but
    not
    everything.
    ```

### 3. Neither irony nor sarcasm is argument
- **Write a program that multiplies two numbers.**
  - Prints the result of the multiplication, followed by a new line.
  - Example:
    ```bash
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
    $ ./mul 2 3
    6
    $ ./mul 2 -3
    -6
    $ ./mul 2 0
    0
    $ ./mul 245 3245342
    795108790
    $ ./mul
    Error
    ```

### 4. To infinity and beyond
- **Write a program that adds positive numbers.**
  - Prints the result of the addition, followed by a new line.
  - Example:
    ```bash
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
    $ ./add 1 1
    2
    $ ./add 1 10 100 1000
    1111
    $ ./add 1 2 3 e 4 5
    Error
    $ ./add
    0
    ```

### 5. Minimal Number of Coins for Change
- **Write a program that prints the minimum number of coins to make change for an amount of money.**
  - Example:
    ```bash
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
    $ ./change 
    Error
    $ ./change 10
    1
    $ ./change 100
    4
    $ ./change 101
    5
    $ ./change 13
    3
    ```

## Repository Structure

- **GitHub Repository:** holbertonschool-low_level_programming
- **Directory:** argc_argv
- **Files:**
  - 0-whatsmyname.c
  - 1-args.c
  - 2-args.c
  - 3-mul.c
  - 4-add.c
  - 100-change.c