#ifndef STRING_FUNCTION_H
#define STRING_FUNCTION_H

#include <stdio.h>
#include <math.h>
#include <assert.h>

int PUTS (char* str);

char* STRCHR (char *str, const char ch);

int STRLEN (const char *str);

char* STRCPY (char* string_destination, const char* string_source);

char* STRNCPY (char* string_destination, const char* string_source, const size_t n);

char* STRCAT (char* string_destination, const char* string_source);

char* STRNCAT (char* string_destination, const char* string_source, const size_t n);

int STRCMP (const char* str1, const char* str2); 

char* FGETS (char* str, int n, FILE* input_stream);

char* STRDUP (const char* str);



#endif // STRING_FUNCTION_H