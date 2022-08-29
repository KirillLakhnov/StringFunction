#include "tests.h"

void testSTRCHR ()
{
    struct TEST_STRCHR test_strchr[] = { {strdup("abcdefghigklmnopqrstuvwxyz"), 'p'},
                                         {strdup("qwerty"),                     'u'},
                                         {strdup("1234567"),                    '6'},
                                       };
    
    printf("STRCHR function test\n");

    for (int i = 0; i < sizeof (test_strchr) / sizeof (test_strchr[0]); i++)
    {
        if (strchr (test_strchr[i].str, test_strchr[i].ch) == STRCHR (test_strchr[i].str, test_strchr[i].ch))
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed.\n", i);
        }

        /* 
        int j = 0;
        do
        {
            free (&test_strchr[i].str[j]);
        }
        while (test_strchr[i].str[j++] != '\0'); */

    }
}

void testSTRLEN ()
{
    struct TEST_STRLEN test_strlen[] = { {strdup("12345678")   },
                                         {strdup("sdDBHXKJDS") },
                                         {strdup("ghjehdkrrd") },
                                       };

    printf("STRLEN function test\n");

    for (int i = 0; i < sizeof (test_strlen) / sizeof (test_strlen[0]); i++)
    {
        if (strlen (test_strlen[i].str) == STRLEN (test_strlen[i].str))
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed.\n", i);
        }
    }
}

void testSTRCPY ()
{
    struct TEST_STR_CPY_CAT test_strcpy[] = { {strdup("13454342"), strdup("837ey839092")},
                                              {strdup("12345678"), strdup("qwertyuio")  },
                                            };
    
    printf("STRCPY function test\n");

    for (int i = 0; i < sizeof (test_strcpy) / sizeof (test_strcpy[0]); i++)
    {
        char* string_destination;

        strcpy (string_destination, test_strcpy[i].string_source);
        STRCPY (test_strcpy[i].string_destination, test_strcpy[i].string_source);

        if (strcmp (test_strcpy[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed.\n", i);
        } 
    }
}

void testSTRNCPY ()
{
    struct TEST_STRN_CPY_CAT test_strncpy[] = { {strdup("13454342"), strdup("837ey839092"), 6},
                                                {strdup("12345678"), strdup("qwertyuio"),   8},
                                               };

    printf("STRNCPY function test\n");

    for (int i = 0; i < sizeof (test_strncpy) / sizeof (test_strncpy[0]); i++)
    {
        char string_destination[strlen(test_strncpy[i].string_destination)+1];

        strcpy (string_destination, test_strncpy[i].string_destination);

        strncpy (string_destination, test_strncpy[i].string_source, test_strncpy[i].n);
        STRNCPY (test_strncpy[i].string_destination, test_strncpy[i].string_source, test_strncpy[i].n);

        if (strcmp (test_strncpy[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed.\n", i);
        } 
    }
} 

void testSTRCAT ()
{
    struct TEST_STR_CPY_CAT test_strcat[] = { {strdup("134548634"),     strdup("837ey8egdjh")},
                                              {strdup("13abcdefghkl2"), strdup("1234567")    },
                                            };
    
    printf("STRCAT function test\n");

    for (int i = 0; i < sizeof (test_strcat) / sizeof (test_strcat[0]); i++)
    {
        char string_destination[strlen(test_strcat[i].string_destination)+1];

        strcpy (string_destination, test_strcat[i].string_destination);

        strcat (string_destination, test_strcat[i].string_source);
        STRCAT (test_strcat[i].string_destination, test_strcat[i].string_source);

        if (strcmp (test_strcat[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed.\n", i);
        }
    }
}

void testSTRNCAT ()
{
    struct TEST_STRN_CPY_CAT test_strncat[] = { {strdup("134548634"),    strdup("837ey8egdjh"),  6},
                                                {strdup("13abcdefghkl2"), strdup("1234567"),     8},
                                              };

    printf("STRNCAT function test\n");

    for (int i = 0; i < sizeof (test_strncat) / sizeof (test_strncat[0]); i++)
    {
        char string_destination[strlen(test_strncat[i].string_destination)+1];

        strcpy (string_destination, test_strncat[i].string_destination);

        strcat (string_destination, test_strncat[i].string_source);
        STRCAT (test_strncat[i].string_destination, test_strncat[i].string_source);

        if (strcmp (test_strncat[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed.\n", i);
        }
    }
}

void testSTRCMP ()
{
    struct TEST_STRCMP test_strcmp[] = { {strdup("123456"), strdup("123456") },
                                         {strdup("5890"),   strdup("6890")   },
                                         {strdup("qwerty"), strdup("qwertyu")},
                                        };

     printf("STRCMP function test\n");

    for (int i = 0; i < sizeof (test_strcmp) / sizeof (test_strcmp[0]); i++)
    {
        if (strcmp(test_strcmp[i].str1, test_strcmp[i].str2) == STRCMP (test_strcmp[i].str1, test_strcmp[i].str2))
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed.\n", i);
        }
    }
}


