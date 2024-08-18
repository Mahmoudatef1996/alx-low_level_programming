#include <stdarg.h>
#ifndef VAR_H
#define VAR_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct format_spec {
    char specifier;
    void (*f)(va_list args);
} format_spec_t;
#endif
