# C - Structures, typedef

## Learning Objectives

By the end of this project, you should be able to understand and explain the following concepts:

### General
- Structures: What they are, when to use them, why to use them, and how to use them
- Typedef: Its purpose and how to use it effectively

## Tasks

### 0. Poppy
**Mandatory**
Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

**Example:**
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### 1. A dog is the only thing on earth that loves you more than you love yourself
**Mandatory**
Write a function `init_dog` that initializes a variable of type `struct dog`.

**Example:**
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
**Mandatory**
Write a function `print_dog` that prints a `struct dog`.

**Example:**
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read
**Mandatory**
Define a new type `dog_t` as a new name for the type `struct dog`.

**Example:**
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### 4. A door is what a dog is perpetually on the wrong side of
**Mandatory**
Write a function `new_dog` that creates a new dog.

**Example:**
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
**Mandatory**
Write a function `free_dog` that frees dogs.

**Example:**
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

## Repository Structure

- **GitHub Repository:** holbertonschool-low_level_programming
- **Directory:** structures_typedef
- **Files:**
  - dog.h
  - 0-main.c
  - 1-init_dog.c
  - 2-print_dog.c
  - 3-main.c
  - 4-new_dog.c
  - 5-main.c
  - 5-free_dog.c