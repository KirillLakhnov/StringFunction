#include "StringFunction.h"

int my_puts (const char* str)
{
    assert (str);
    
    int i = 0;
    while (str[i] != '\0')
    {
        putchar (str[i++]);
    }
    putchar ('\n');
    
    return 0;
}

char* my_strchr (char* str, const char ch)
{
    assert (str);

    int i = 0;

    do
    {
        if (ch == str[i])
        {
            return str + i;
        }
    } 
    while (str[i++] != '\0');

    return nullptr;
    
}

int my_strlen (const char* str)
{
    assert (str);

    int lenght_string = 0;
    while (str[lenght_string] != '\0')
    {
        lenght_string++;
    }

    return lenght_string;
}

char* my_strcpy (char* string_destination, const char* string_source)
{
    assert (string_destination);
    assert (string_source);

    int i = 0;
    do
    {
        string_destination[i] = string_source[i];
    } 
    while (string_source[i++] != '\0');
    

    return string_destination;
}

char* my_strncpy (char* string_destination, const char* string_source, const size_t n)
{
    assert (string_destination);
    assert (string_source);
    
    int i = 0;
    do
    {
        string_destination[i] = string_source[i];
    }
    while (string_source[i] != '\0' && (i++) < (n - 1));

    
    return string_destination;
}


char* my_strcat (char* string_destination, const char* string_source)
{
    assert (string_destination);
    assert (string_source);

    int length_destination = my_strlen (string_destination);
    int i = 0;
    do
    {
        string_destination[i + length_destination] = string_source[i];

    } 
    while (string_source[i++] != '\0');
    
    return string_destination;
}

char* my_strncat (char* string_destination, const char* string_source, const size_t n)
{
    assert (string_destination);
    assert (string_source);  
    
    int length_destination = my_strlen (string_destination);
    int i = 0;
    do
    {
        string_destination[i + length_destination] = string_source[i];
    } 
    while (string_source[i] != '\0' && (i++) < (n - 1));
    
    return string_destination;
}

int my_strcmp (const char* str1, const char* str2)
{
    assert (str1);
    assert (str2);
    
    int i = 0;
    while (str1[i] == str2[i] && (str1[i] && str2[i++]) != '\0')
        ;

    return str1[i] - str2[i];
}

char* my_fgets (char* str, int n, FILE* input_stream)
{
    assert (str);
    assert (input_stream);
    
    int i = 0;
    char c = 0;
    while ((c = getc(input_stream)) != '\n' && c != EOF && i < n)
    {
        i++;
        putchar(c);
    }
    
    return str;
}

char* my_strdup (const char* str)
{
    assert (str);

    size_t str_length = (size_t) my_strlen (str);
    char* str_duplicate = (char*) calloc (str_length + 1, 1);

    return my_strcpy (str_duplicate, str);
}






