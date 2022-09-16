#include "tests.h"

void testSTRCHR ()
{
    struct TEST_STRCHR test_strchr[] = { {"abcdefghigklmnopqrstuvwxyz", 'p'},
                                         {"qwerty",                     'u'},
                                         {"1234567",                    '6'},
                                       };
    
    printf("my_strchr function test\n");

    for (int i = 0; i < sizeof (test_strchr) / sizeof (test_strchr[0]); i++)
    {
        if (strchr (test_strchr[i].str, test_strchr[i].ch) == my_strchr (test_strchr[i].str, test_strchr[i].ch))
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed. "
                    "The result of the function should have been %c, but it turned out \"%s\"\n", i, test_strchr[i].ch, my_strchr (test_strchr[i].str, test_strchr[i].ch));
        }
    }

    printf("\n");
}

void testSTRLEN ()
{
    struct TEST_STRLEN test_strlen[] = { {"12345678"  },
                                         {"sdDBHXKJDS"},
                                         {"ghjehdkrrd"},
                                       };

    printf("my_strlen function test\n");

    for (int i = 0; i < sizeof (test_strlen) / sizeof (test_strlen[0]); i++)
    {
        if (strlen (test_strlen[i].str) == my_strlen (test_strlen[i].str))
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed. "
                    "The result of the function should have been %lu, but it turned out %d\n", i, strlen (test_strlen[i].str), my_strlen (test_strlen[i].str));
        }
    }

    printf("\n");
}

void testSTRCPY ()
{
    struct TEST_STR_CPY_CAT test_strcpy[] = { {"13454342", "837ey839092"},
                                              {"12345678", "qwertyuio"  },
                                            };
    
    printf("my_strcpy function test\n");

    for (int i = 0; i < sizeof (test_strcpy) / sizeof (test_strcpy[0]); i++)
    {
        char string_destination[STR_MAX] = "";

        strcpy (string_destination, test_strcpy[i].string_source);
        my_strcpy (test_strcpy[i].string_destination, test_strcpy[i].string_source);

        if (strcmp (test_strcpy[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed. "
                    "The result of the function should have been %s, but it turned out %s\n", i, strcpy (string_destination, test_strcpy[i].string_source), my_strcpy (test_strcpy[i].string_destination, test_strcpy[i].string_source));
        } 
    }

    printf("\n");
}

void testSTRNCPY ()
{
    struct TEST_STRN_CPY_CAT test_strncpy[] = { {"13454342", "837ey839092", 6},
                                                {"12345678", "qwertyuio",   8},
                                               };

    printf("my_strncpy function test\n");

    for (int i = 0; i < sizeof (test_strncpy) / sizeof (test_strncpy[0]); i++)
    {
        char string_destination[STR_MAX] = "";

        strcpy (string_destination, test_strncpy[i].string_destination);

        strncpy (string_destination, test_strncpy[i].string_source, test_strncpy[i].n);
        my_strncpy (test_strncpy[i].string_destination, test_strncpy[i].string_source, test_strncpy[i].n);

        if (strcmp (test_strncpy[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed. "
                    "The result of the function should have been %s, but it turned out %s\n", i, strncpy (string_destination, test_strncpy[i].string_source, test_strncpy[i].n), my_strncpy (test_strncpy[i].string_destination, test_strncpy[i].string_source, test_strncpy[i].n));
        } 
    }

    printf("\n");
} 

void testSTRCAT ()
{
    struct TEST_STR_CPY_CAT test_strcat[] = { {"134548634",     "837ey8egdjh"},
                                              {"13abcdefghkl2", "1234567"    },
                                            };
    
    printf("my_strcat function test\n");

    for (int i = 0; i < sizeof (test_strcat) / sizeof (test_strcat[0]); i++)
    {
        char string_destination[STR_MAX] = "";

        strcpy (string_destination, test_strcat[i].string_destination);

        strcat (string_destination, test_strcat[i].string_source);
        my_strcat (test_strcat[i].string_destination, test_strcat[i].string_source);

        if (strcmp (test_strcat[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed. "
                    "The result of the function should have been %s, but it turned out %s\n", i, strcat (string_destination, test_strcat[i].string_source), my_strcat (test_strcat[i].string_destination, test_strcat[i].string_source));
        }
    }

    printf("\n");
}

void testSTRNCAT ()
{
    struct TEST_STRN_CPY_CAT test_strncat[] = { {"134548634",    "837ey8egdjh",  6},
                                                {"13abcdefghkl2", "1234567",     8},
                                              };

    printf("my_strncat function test\n");

    for (int i = 0; i < sizeof (test_strncat) / sizeof (test_strncat[0]); i++)
    {
        char string_destination[STR_MAX] = "";

        strcpy (string_destination, test_strncat[i].string_destination);

        strncat (string_destination, test_strncat[i].string_source, test_strncat[i].n );
        my_strncat (test_strncat[i].string_destination, test_strncat[i].string_source, test_strncat[i].n );

        if (strcmp (test_strncat[i].string_destination, string_destination) == 0)
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed. "
                    "The result of the function should have been %s, but it turned out %s\n", i, strncat (string_destination, test_strncat[i].string_source, test_strncat[i].n ), my_strncat (test_strncat[i].string_destination, test_strncat[i].string_source, test_strncat[i].n ));
        }
    }

    printf("\n");
}

void testSTRCMP ()
{
    struct TEST_STRCMP test_strcmp[] = { {"123456", "123456" },
                                         {"5890",   "6890"   },
                                         {"qwerty", "qwertyu"},
                                        };

     printf("my_strcmp function test\n");

    for (int i = 0; i < sizeof (test_strcmp) / sizeof (test_strcmp[0]); i++)
    {
        if (strcmp(test_strcmp[i].str1, test_strcmp[i].str2) == my_strcmp (test_strcmp[i].str1, test_strcmp[i].str2))
        {
            printf ("Test %d is successful!\n", i);
        }
        else
        {
            printf ("Test %d failed. "
                    "The result of the function should have been %d, but it turned out %d\n", i, strcmp(test_strcmp[i].str1, test_strcmp[i].str2), my_strcmp (test_strcmp[i].str1, test_strcmp[i].str2));
        }
    }

    printf("\n");
}
