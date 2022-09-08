#ifndef STRING_FUNCTION_H
#define STRING_FUNCTION_H

#include <stdio.h>
#include <math.h>
#include <assert.h>

/** \brief my_puts - outputs a string to the standard output stream.
 * 
 * \param[in] str - a pointer to the line to be output.
 */
int my_puts (char* str);

/** \brief my_strchr - searches for the first occurrence of the character whose code is specified in the ch argument, in the string pointed to by the str argument.
 * 
 * \param[in] str - a pointer to the string in which the search will be performed.
 * \param[in] ch - the desired symbol.
 */
char* my_strchr (char *str, const char ch);

/** \brief my_strlen - calculates the number of characters in a string up to the first occurrence of the end-of-line character.
 * 
 * \param[in] str - a pointer to a string. 
 * \return The number of characters in the string before the first occurrence of the end-of-line character.
 */
int my_strlen (const char *str);

/** \brief my_strcpy - copies data from the string pointed to by the source argument to the string pointed to by the destination argument until an end-of-line character is encountered.
 * 
 * \param[in] string_destination - a pointer to the row to which the data will be copied.
 * \param[in] string_source - a pointer to the string source of the copied data.
 * \return The function returns a pointer to the row to which the data is copied.
 */
char* my_strcpy (char* string_destination, const char* string_source);

/** \brief my_strncpy - copies data from the string pointed to by the source argument to the string pointed to by the destination argument until the end-of-line character (null character) is encountered or the number of copied characters reaches the value specified in the argument n.
 * 
 * \param[in] string_destination - a pointer to the row to which the data will be copied.
 * \param[in] string_source - a pointer to the string source of the copied data.
 * \param[in] n - copy length limit.
 * \return The function returns a pointer to the row to which the data is copied.
 */
char* my_strncpy (char* string_destination, const char* string_source, const size_t n);

/** \brief my_strcat - adds to the string pointed to by the destination argument the string pointed to by the source argument.
 * \param[in] string_destination - a pointer to the array to which the string will be added.
 * \param[in] string_source - a pointer to the array from which the string will be copied.
 * \return The function returns a pointer to the array to which the string (destination) is added.
 */
char* my_strcat (char* string_destination, const char* string_source);

/** \brief my_strncat - adds to the string pointed to by the destination argument, the string pointed to by the append argument, until an end-of-line character is encountered or until n characters are added.
 * \param[in] string_destination - a pointer to the array to which the string will be added.
 * \param[in] string_source - a pointer to the array from which the string will be copied.
 * \param[in] n - the maximum length of the line to be added.
 * \return The function returns a pointer to the array to which the string (destination) is added.
 */
char* my_strncat (char* string_destination, const char* string_source, const size_t n);

/** \brief my_strcmp - byte-by-byte compares the character codes of the two strings pointed to by the arguments of the function.
 * 
 * \param[in] str1 - pointer to the string being compared.
 * \param[in] str2 - pointer to the string being compared.
 * \return the difference in the code of the characters pointed to by str1 and str2.
 */
int my_strcmp (const char* str1, const char* str2); 

/** \brief my_fgets - reads a string from the data stream until the "new line" character is encountered or the file ends, or until the length of the string being read exceeds the limit of the argument n.
 * 
 * \param[in] str - a pointer to the array in which the read string will be placed.
 * \param[in] n - the maximum allowed length of the read string.
 * \param[in] input_stream - a pointer to the data stream.
 * \return a pointer to the array in which the read data is placed.
 */
char* my_fgets (char* str, int n, FILE* input_stream);

/** \brief my_strdup - duplicates the string pointed to by the argument str.
 * 
 * \param[in] str - a pointer to the duplicated string.
 * \return a pointer to a duplicate string.
 */
char* my_strdup (const char* str);



#endif // STRING_FUNCTION_H
