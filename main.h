#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD

/*libraries*/
#include<stdlib.h>
#include<stdio.h>
=======
>>>>>>> 4d0ff69651dec698e7b98bf41dcd568e951a8b42
#include <stdarg.h>
#include <unistd.h>

<<<<<<< HEAD
/*prototypes*/
int (*get_func(const char *s))(va_list);
int _printf(const char *format, ...);
=======
int _printf(const char *format, ...); /*Prototype of _printf*/
int print_char(char c);
int print_string(char *s);
int get_spec_format(char *);
>>>>>>> 4d0ff69651dec698e7b98bf41dcd568e951a8b42

#endif