# Libft - Your First C Library

## Overview
**Libft** is a custom C library that replicates essential standard C functions and introduces additional utility functions. This project enhances your understanding of C by implementing fundamental functions from scratch. It serves as a foundation for future projects in your programming curriculum.

---

## Project Structure

- **Part 1 - Standard C Library Functions**  
  Re-implementation of various **libc** functions such as `ft_strlen`, `ft_memcpy`, `ft_strchr`, etc.

- **Part 2 - Additional Functions**  
  Custom implementations like `ft_substr`, `ft_strjoin`, `ft_itoa`, and more for string manipulation and memory handling.

---

## Installation

Clone the repository and compile the library:

```sh
git clone https://github.com/your-username/libft.git  
cd libft  
make  
```
This generates libft.a, a static library that you can link to your C projects.

---

## Usage

Include libft.h in main.c file and compile it with libft.a:
```main.c
#include "libft.h"

int main() {
    char str[] = "Hello, World!";
    int len = ft_strlen(str);
    printf("String length: %d\n", len);
    return 0;
}
```
Compile with:
```sh
gcc main.c -L. -lft -o program
```
---

## License
This project is part of the 42 School Curriculum and follows its coding standards.
