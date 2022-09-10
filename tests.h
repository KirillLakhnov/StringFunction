#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>
#include <string.h>

#include "StringFunction.h"

const int STR_MAX = 50;

struct TEST_STRCHR 
{
    char str[STR_MAX];
    char  ch;
};

struct TEST_STRLEN
{
    const char* str;
};

struct TEST_STR_CPY_CAT
{
    char string_destination[STR_MAX];
    char string_source[STR_MAX];
};

struct TEST_STRN_CPY_CAT
{
    char string_destination[STR_MAX];
    char string_source[STR_MAX];
    size_t n;
};

struct TEST_STRCMP
{
    const char* str1;
    const char* str2;
};


void testSTRCHR  ();

void testSTRLEN  ();

void testSTRCPY  ();

void testSTRNCPY ();

void testSTRCAT  ();

void testSTRNCAT ();

void testSTRCMP  ();

#endif // TESTS_H
