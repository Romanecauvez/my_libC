# My Lib_C
## But first, what is the lib C?

The libC is a standard library of the C language. It contains most of the functions we will use during the year, including some that we will see and recreate:

- [x] [my_putchar](#0)
- [x] [my_dputchar](#1)
- [x] [my_putstr](#2)
- [x] [my_dputstr](#3)
- [x] [my_put_nbr](#4)
- [x] [my_dput_nbr](#5)
- [x] [my_isneg](#6)
- [x] [my_strlen](#7)
- [x] [my_strcat](#8)
- [x] [my_strdup](#9)
- [x] [my_strcpy](#10)
- [x] [my_strncpy](#11)
- [x] [my_arraylen](#12)
- [x] [my_getnbr](#13)
- [x] [my_strcmp](#14)
- [x] [my_strncmp](#15)
- [x] [my_strclean](#16)
- [x] [my_str_to_word_array](#17)
- [x] [my_strlowcase](#18)
- [x] [my_strhighcase](#19)
- [x] [my_dput_scientific_min](#20)
- [x] [my_put_scientific_min](#21)
- [x] [my_dput_float_scient](#22)
- [x] [my_put_float_scient](#23)
- [x] [my_dputnbr_base_min](#24)
- [x] [my_putnbr_base_min](#25)
- [x] [my_dput_scientific](#26)
- [x] [my_put_scientific](#27)
- [x] [my_print_char_arr](#28)
- [x] [my_strcapitalize](#29)
- [x] [my_dputnbr_base](#30)
- [x] [my_strcleanfull](#31)
- [x] [my_putnbr_base](#32)
- [x] [my_int_to_str](#33)
- [x] [my_dput_unbr](#34)
- [x] [my_dputfloat](#35)
- [x] [my_dpointer](#36)
- [x] [my_putfloat](#37)
- [x] [my_put_unbr](#38)
- [x] [my_swapchar](#39)
- [x] [my_dprintf](#40)
- [x] [my_strrev](#41)
- [x] [my_nbrlen](#42)
- [x] [power](#43)
- [x] [free_array](#44)
---
- [x] function(s) implemented
- [ ] function(s) to be done
---
## Makefile

The Makefile is here to compile everything and create a binary. It is divided into different rules (you can add your own rules):

-  ```BASH
   make
    ```
    Build functions and the binary.

-  ```BASH
   make clean
    ```
    Remove the .o files.

-  ```BASH
   make fclean
    ```
    make clean & remove the binary.

-  ```BASH
   make re
    ```
    fclean & rebuild everything.

### my_putchar {#0}
```C
void my_putchar(char c);
```
Writes a given character to the standard output.

### my_dputchar {#1}
```C
void my_dputchar(int fd, char c);
```
Writes a given character to the given output.

### my_putstr {#2}
```C
int my_putstr(char *str);
```
Writes a given string to the standard output.

### my_dputstr {#3}
```C
int my_dputstr(int fd, char *str);
```
Writes a given string to the given output.

### my_put_nbr {#4}
```C
int my_put_nbr(int nbr);
```
Writes a given number to the standard output.

### my_dput_nbr {#5}
```C
int my_dput_nbr(int fd, int nbr);
```
Writes a given number to the given output.

### my_isneg {#6}
```C
int my_isneg(int n);
```
Returns 1 if the number given is greater than zero and 0 if not.

### my_strlen {#8}
```C
int my_strlen(char const *str);
```
Returns the length of the given string.

### my_strcat {#9}
```C
char *my_strcat(char *dest, char const *src);
```
Concatenates a string (src) into another (dest).

### my_strdup {#10}
```C
char *my_strdup(char const *src);
```
Duplicates a string.

### my_strcpy {#11}
```C
char *my_strcpy(char *dest, char const *src);
```
Copies a string (src) into another (dest).

### my_strncpy {#12}
```C
char *my_strncpy(char *dest, char const *src, int n);
```
Copies a string (src) into another (dest) for the number (n) of characters specified.

### my_arraylen {#14}
```C
int my_arraylen(char **array);
```
Returns the length of the given array.

### my_getnbr {#15}
```C
int my_getnbr(char const *str);
```
Returns an integer from a given string.

### my_strcmp {#16}
```C
int my_strcmp(char const *s1, char const *s2);
```
Returns 0 if the two strings are the same, -1 if the second is shorter, and 1 if it is longer.

### my_strncmp {#17}
```C
int my_strncmp(char const *s1, char const *s2, int n);
```
Returns 0 if the two strings are the same for the number (n) of characters specified, otherwise returns the difference between the ASCII values of the mismatched characters.

### my_strclean {#18}
```C
char *my_strclean(char *src, char c);
```
Cleans the given string by removing all occurrences of the specified character (c).

### my_str_to_word_array {#19}
```C
char **my_str_to_word_array(char *str, char c);
```
Splits a string into an array of words using the specified character as a delimiter.

### my_strlowcase {#7}
```C
char *my_strlowcase(char *str);
```
Converts a string to lowercase.

### my_strhighcase {#20}
```C
char *my_strhighcase(char *str);
```
Converts a string to uppercase.

### my_dput_scientific_min {#21}
```C
int my_dput_scientific_min(int fd, double nbr, int precision);
```
Writes a double in scientific notation with minimal formatting to the given output.

### my_put_scientific_min {#22}
```C
int my_put_scientific_min(double nbr, int precision);
```
Writes a double in scientific notation with minimal formatting to the standard output.

### my_dput_float_scient {#23}
```C
int my_dput_float_scient(int fd, double nbr, int precision);
```
Writes a double in scientific notation to the given output.

### my_put_float_scient {#24}
```C
int my_put_float_scient(double nbr, int precision);
```
Writes a double in scientific notation to the standard output.

### my_dputnbr_base_min {#25}
```C
int my_dputnbr_base_min(int fd, int nbr, char *base);
```
Writes an integer in a specified base with minimal formatting to the given output.

### my_putnbr_base_min {#26}
```C
int my_putnbr_base_min(int nbr, char *base);
```
Writes an integer in a specified base with minimal formatting to the standard output.

### my_dput_scientific {#27}
```C
int my_dput_scientific(int fd, double nbr, int precision);
```
Writes a double in scientific notation to the given output.

### my_put_scientific {#28}
```C
int my_put_scientific(double nbr, int precision);
```
Writes a double in scientific notation to the standard output.

### my_print_char_arr {#29}
```C
void my_print_char_arr(char **arr);
```
Prints an array of strings.

### my_strcapitalize {#30}
```C
char *my_strcapitalize(char *str);
```
Capitalizes the first letter of each word in a string.

### my_dputnbr_base {#31}
```C
int my_dputnbr_base(int fd, int nbr, char *base);
```
Writes an integer in a specified base to the given output.

### my_strcleanfull {#32}
```C
char *my_strcleanfull(char *src);
```
Cleans a string by removing all unnecessary spaces and tabs.

### my_putnbr_base {#33}
```C
int my_putnbr_base(int nbr, char *base);
```
Writes an integer in a specified base to the standard output.

### my_int_to_str {#34}
```C
char *my_int_to_str(int nbr);
```
Converts an integer to a string.

### my_dput_unbr {#35}
```C
int my_dput_unbr(int fd, unsigned int nbr);
```
Writes an unsigned integer to the given output.

### my_dputfloat {#36}
```C
int my_dputfloat(int fd, double nbr, int precision);
```
Writes a double to the given output with specified precision.

### my_dpointer {#37}
```C
int my_dpointer(int fd, void *ptr);
```
Writes a pointer address to the given output.

### my_putfloat {#38}
```C
int my_putfloat(double nbr, int precision);
```
Writes a double to the standard output with specified precision.

### my_put_unbr {#39}
```C
int my_put_unbr(unsigned int nbr);
```
Writes an unsigned integer to the standard output.

### my_swapchar {#40}
```C
void my_swapchar(char *a, char *b);
```
Swaps two characters.

### my_dprintf {#41}
```C
int my_dprintf(int fd, const char *format, ...);
```
Prints formatted output to the given file descriptor.

### my_strrev {#42}
```C
char *my_strrev(char *str);
```
Reverses a string.

### my_nbrlen {#43}
```C
int my_nbrlen(int nbr);
```
Returns the length of an integer.

### power {#44}
```C
double power(double base, int exponent);
```
Returns the result of raising a base to an exponent.

### free_array {#45}
```C
void free_array(char **arr);
```
Frees a dynamically allocated array of strings.