#include "Header.h"

int (*get_func(const char *s, int a))(va_list)
{
    f_funct arr[] = {

        {"c", print_chr}, 
        {"s", print_str},
		{"i", print_int}, 
        {"d", print_int},
        {"%"}, print_for}, 
        {NULL, NULL},}
}