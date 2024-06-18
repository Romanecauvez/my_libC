# My Lib_C

## But first what is the lib C ?
the libC is a standard library of the C language, she contains most of functions we will use during the year including some that we will see and recreate :

- [x] [my_putchar](#0)
- [x] [my_dputchar](#1)
- [x] [my_putstr](#2)
- [x] [my_dputstr](#3)
- [x] [my_put_nbr](#4)
- [x] [my_dput_nbr](#5)
- [x] [my_isneg](#6)
- [x] [my_strlen](#8)
- [ ] [my_strcat](#9)
- [ ] [my_strdup](#10)
- [ ] [my_strcpy](#11)
- [ ] [my_strncpy](#12)
- [ ] [my_arraylen](#14)
- [ ] [my_getnbr](#15)
- [ ] [my_strcmp](#16)
- [ ] [my_strncmp](#17)
- [ ] [my_strclean](#18)
- [ ] [my_str_to_word_array](#19)
- [ ] [my_strlowcase](#7)
- [ ] [my_strhighcase](#20)

---
- [x] function(s) implemented 
- [ ] function(s) to be done
---

## Makefile

The Makefile is here to compile everything and create a binary. He is devided in different rules (you can add your own rules) :

 -  ```BASH
    make
    ```
    build functions and the binary

 - ```BASH
    make clean
    ```
    remove the `.o` files

 -  ```BASH
    make fclean
    ```
    `make clean` & remove the binary

 -  ```BASH
    make re
    ```
    `fclean` & rebuild everything

<!-- j'hesite entre les deux ...

| **rule** | **Description** |
| ----------- | ----------- |
| make | build functions and the binary |
| make clean | remove the `.o` files |
| make fclean | `make clean` & remove the binary |
| make re | `fclean` & rebuild everything | -->

### my_putchar {#0}

```C
void my_putchar(char c);
```
writes a given character in the standard output.

### my_dputchar {#1}

```C
void my_dputchar(int fd, char c);
```
writes a given character in the given output.

### my_putstr {#2}

```C
int my_putstr(char *str);
```
Writes a given string in the standard output.

### my_dputstr {#3}

```C
int my_dputstr(int fd, char *str);
```
writes a given string in the given output.

### my_put_nbr {#4}

```C
int my_put_nbr(int nbr);
```
writes a given number in the standard output.

### my_dput_nbr {#5}

```C
int my_dput_nbr(int fd, int nbr);
```
writes a given number in the given output.

### my_isneg {#6}

```C
int my_isneg(int n);
```
Returns 1 if the number given is superior to zero and 0 if not.

### my_strlen {#8}

```C
int my_strlen(char const *str);
```
Returns the lenght of the given string.

### my_strcat {#9}

```C
char *my_strcat(char *dest, char const *src);
```
Cats a string (src) in another (dest). (add)

### my_strdup {#10}

```C
char *my_strdup(char const *src);
```
Dublicates a string.

### my_strcpy {#11}

```C
char *my_strcpy(char *dest, char const *src);
```
Copy a string (src) in another (dest). (replace)

### my_strncpy {#12}

```C
char *my_strncpy(char *dest, char const *src, int n);
```
Copy a string (src) in another (dest) the number (n) of times you want. (replace)

### my_arraylen {#14}

```C
int my_arraylen(char **array);
```
Returns the lenght of the given array.

### my_getnbr {#15}

```C
int my_getnbr(char const *str);
```
Returns an int given in a string. (translate)

### my_strcmp {#16}

```C
int my_strcmp(char const *s1, char const *s2);
```
Returns 0 if the two strings given are the same -1 if the second one is shorter and 1 if it is longer.

### my_strncmp {#17}

```C
int my_strncmp(char const *s1, char const *s2, int n);
```
Returns 0 if the two strings given are the same for the number (n) of character(s) given and if they're not the difference between the ascii values of the two characters not matching.

### my_strclean {#18}

```C
char *my_strclean(char *src, char c);
```
Clean the given string by removing all the multiple statements of the character (c) given.

### my_str_to_word_array {#19}

```C
char **my_str_to_word_array(char *str, char c);
```
Separates in an array the words of the given string by the given character.

### my_strlowcase {#7}

```C
char *my_strlowcase(char *str);
```
Translate a string intirely in lowcase.

### my_strhighcase {#20}

```C
char *my_strhighcase(char *str);
```
Translate a string intirely in highcase.

<!-- 
objects : 
 - `f` : comment 
 - `g` : comment
---
> "Citation diverse"
>> personne de la citation
>>> date
---
    term
def

1. This :
   1. me
      1. love
      2. creation
   2. you
   3. them
2. That :
   - maybe :
      - someday
      - another time
   - don't know
   - why not ? -->