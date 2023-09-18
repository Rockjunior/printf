#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
struct format : takes and matches conversion specifiers for printf
@fd : type char ptr of the specifier for (d,i,b,u,o,x,X,S,p,+,space,#,l,h,r,R,)
@f : type ptr to function for conversion specier
*/

typedef struct PrintSpec {
    char *specifier;
    int (*print_function)();
} PrintSpec;

int custom_printf_pointer(va_list val);
int custom_printf_hex_aux(unsigned long int num);
int custom_printf_HEX_aux(unsigned int num);
int custom_printf_custom_string(va_list val);
int custom_printf_HEX(va_list val);
int custom_printf_hex(va_list val);
int custom_printf_oct(va_list val);
int custom_printf_unsigned(va_list args);
int custom_printf_binary(va_list val);
int custom_printf_reverse(va_list args);
int custom_printf_rot13(va_list args);
int custom_printf_int(va_list args);
int custom_printf_decimal(va_list args);
int custom_strlen(char *s);
int custom_strcpy(char *dest, char *src);
int custom_strlenc(const char *s);
int custom_reverse_string(char *s);
int custom_strlenc(const char *s);
int custom_printf_percent(void);
int custom_printf_char(va_list val);
int custom_printf_string(va_list val);
int custom_putchar(char c);
int my_printf(const char *format, ...);

#endif

/*<CODERS/>
~Rockjunior
~Kadimastermind
*/
