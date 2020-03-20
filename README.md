# 0x11. C - printf

## Requirements
## General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the _Betty_ style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have topush them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- Dont forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the \_putchar function for this project

## Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va\_start (man 3 va\_start)
- va\_end (man 3 va\_end)
- va\_copy (man 3 va\_copy)
- va\_arg (man 3 va\_arg)

## Built By:
Viet Tran
Gabriel Abdul-Raheem

## Descritption
The \_printf function produces an output according to a format. Based on the chosen format specifier, the program will call a different function to produce the output.

### Project contents

Files | Short Description |
| --- | --- |
|holberton.h| Header file containing all protoypes for functions|
|\_printf.c | prints formatted output |
|\_putchar.c | writes the character to stdout|
|print\_char | prints char to stdout using \_putchar |
|print\_dec.c | print a decimal number |
|print\_int.c | print an integer |
|print\_number.c| print any number to stdout|
|print\_rev.c | prints a string in reverse order |
|print\_rot.c | prints a string in rot13|
|print\_string.c| prints a string
### Example
To print a string:
```c
	#include "lists.h"

	char *string;

	string = "Hello, world!";
	_printf("%s\n", string);
end
```
To print an int:
```c
	#include "lists.h"

	int my_int = 7;

	_printf("%d\n", int);
end
```
