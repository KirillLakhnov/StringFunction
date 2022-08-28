#include "StringFunction.h"

int PUTS (const char* str)
{
    assert (str);
    
    int i = 0;
    while (str[++i - 1] != '\0')
    {
        putchar (str[i-1]);
    }
    putchar ('\n');
    
    return 0;
}

char* STRCHR (char *str, const char ch)
{
    assert (str);

    int i = 0;

    do
    {
        if (ch == str[i])
        {
            return str+i;
        }
    } 
    while (str[++i -1] != '\0');

    return nullptr;
    
}

int STRLEN (const char *str)
{
    assert (str);

    int lenght_string = 0;
    while (str[lenght_string] != '\0')
    {
        lenght_string++;
    }

    return lenght_string;
}

char* STRCPY (char* string_destination, const char* string_source)
{
    assert (string_destination);
    assert (string_source);

    int i = 0;
    do
    {
        string_destination[i] = string_source[i];
    } 
    while (string_source[++i - 1] != '\0');
    

    return string_destination;
}

char* STRNCPY (char* string_destination, const char* string_source, const size_t n)
{
    assert (string_destination);
    assert (string_source);

    int i = 0;
    do
    {
        string_destination[i] = string_source[i];
    } 
    while (string_source[++i - 1] != '\0' && (i - 1) < (n - 1));
    
    return string_destination;
}

char* STRCAT (char* string_destination, const char* string_source)
{
    assert (string_destination);
    assert (string_source);

    int length_destination = STRLEN (string_destination);
    int i = 0;
    do
    {
        string_destination[i + length_destination] = string_source[i];

    } 
    while (string_source[++i - 1] != '\0');
    
    return string_destination;
}

char* STRNCAT (char* string_destination, const char* string_source, const size_t n)
{
    assert (string_destination);
    assert (string_source);  
    
    int length_destination = STRLEN (string_destination);
    int i = 0;
    do
    {
        string_destination[i + length_destination] = string_source[i];
    } 
    while (string_source[++i - 1] != '\0' && (i - 1) < (n - 1));
    
    return string_destination;
}

int STRCMP (const char* str1, const char* str2)
{
    assert (str1);
    assert (str2);
    
    int i = 0;
    while (str1[++i - 1] == str2[i - 1] && (str1[i - 1] && str2[i - 1]) != '\0') ;

    return str1[i - 1] - str2[i - 1];
}


char* FGETS (char* str, int n, FILE* input_stream)
{
    assert (str);
    assert (input_stream);

    fscanf (input_stream, "%s", str);

    return str;
}

char* STRDUP (const char* str)
{
    assert (str);

    size_t str_length = (size_t) STRLEN(str);
    char* str_duplicate = (char*) calloc (str_length + 1, 1);

    int i = 0;
    do
    {
        str_duplicate[i]=str[i];
    } 
    while (str[++i - 1] != '\0');
    
    return str_duplicate; 
}

ssize_t GETLINE (char** lineptr, size_t* n, FILE* input_stream)
{

}




