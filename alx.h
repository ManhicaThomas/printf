#ifndef ALX_H
#define ALX_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int print_integer(va_list args);


/**
 * struct format - Matches the conversion specifiers for printf
 * @id: The type char pointer of the specifier
 * @f: The type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int print_pntr(va_list val);
int print_h_deci(unsigned long int num);
int print_H_deci(unsigned int num);
int print_vip_string(va_list val);
int print_H(va_list val);
int print_h(va_list val);
int print_octa(va_list val);
int print_unsigned(va_list args);
int print_binar(va_list val);
int print_strngrev(va_list args);
int print_rot13(va_list args);
int print_intgr(va_list args);
int print_deci(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_char(va_list val);
int print_str(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
