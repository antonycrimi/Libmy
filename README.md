# libmy

{EPITECH.} first year project.

Recoding libc functions into a C static library.

## Requirements

 - [Make](https://www.gnu.org/software/make/)
 - [GCC](https://gcc.gnu.org/)

## Get started

### Compile the library

Navigate to the root of the repository from your Terminal and run `make` to build the `libmy.a` static library.

### Use libmy

 - Copy this repository inside a folder in your project directory.
 - Include the `my.h` header file in your `.c` files where you want to use libmy:
```cpp
#include "my.h"
```
 - If you put this repository in a folder named `lib/`, run this command to compile a `main.c` file using the library:
```
gcc main.c -L lib/ -l my -I lib/include/
```

## Functions

Here is a list of all libmy function prototypes:

```cpp
int my_cat(char *filepath);
int my_compute_factorial_rec(int nb);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
char *my_evil_str(char *str);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
char *my_int_to_string(int nb);
int my_is_prime(int nb);
bool my_is_sorted(int *array, int size);
int my_isneg(int n);
void my_putchar(char c);
int my_putnbr_base(int nb, char *base);
int my_putnbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *str);
char *my_strdup(char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *str, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
```