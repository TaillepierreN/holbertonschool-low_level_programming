## Holberton School Low-Level Programming - Functions and Nested Loops

Welcome to the Holberton School Low-Level Programming repository for the "Functions and Nested Loops" module. This collection of C programming projects covers fundamental concepts in the world of low-level programming.

### Learning Objectives

At the end of this project, you are expected to be able to explain:

- What are nested loops and how to use them
- What is a function and how to use functions
- The difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- The purpose and usage of gcc flags: -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to use them with `#include`

### Project Descriptions

1. **_putchar**
   - Description: Write a program that prints `_putchar`, followed by a new line.
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar`

2. **I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
   - Description: Write a function that prints the alphabet in lowercase, followed by a new line.
   - Prototype: `void print_alphabet(void)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet`

3. **10 x alphabet**
   - Description: Write a function that prints the alphabet in lowercase 10 times, followed by a new line.
   - Prototype: `void print_alphabet_x10(void)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10`

4. **islower**
   - Description: Write a function that checks for a lowercase character.
   - Prototype: `int _islower(int c)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower`

5. **isalpha**
   - Description: Write a function that checks for an alphabetic character.
   - Prototype: `int _isalpha(int c)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha`

6. **Sign**
   - Description: Write a function that prints the sign of a number.
   - Prototype: `int print_sign(int n)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign`

7. **There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
   - Description: Write a function that computes the absolute value of an integer.
   - Prototype: `int _abs(int)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs`

8. **There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**
   - Description: Write a function that prints every minute of the day of Jack Bauer, from 00:00 to 23:59.
   - Prototype: `void jack_bauer(void)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24`

9. **Learn your times table**
   - Description: Write a function that prints the 9 times table, starting with 0.
   - Prototype: `void times_table(void)`
   - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table`

10. **a + b**
    - Description: Write a function that adds two integers and returns the result.
    - Prototype: `int add(int, int)`
    - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add`

11. **98 Battery Street, the OG**
    - Description: Write a function that prints all natural numbers from `n` to 98, followed by a new line.
    - Prototype: `void print_to_98(int n)`
    - Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98`

Feel free to explore each project's directory for the corresponding source code and additional files. Happy coding!