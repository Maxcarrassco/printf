#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct prv - struct prv
 * @id: chat
 * @f: function pointer
 */

typedef struct prv
{
	char id;
	int (*f)(va_list args);
} prv_t;


int _printf(const char *format, ...);

int (*get_func(const char id))(va_list);

int _putchar(int ch);

int pr_char(va_list args);

int pr_str(va_list args);

int pr_bin(va_list args);
int cnvrt_to_bin(unsigned int n, int *cnt);

#endif
