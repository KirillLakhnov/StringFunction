#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>
#include <string.h>

#include "StringFunction.h"

struct TEST_STRCHR 
{
    char* str;
    char  ch;
};

struct TEST_STRLEN
{
    char* str;
};

struct TEST_STR_CPY_CAT
{
    char* string_destination;
    char* string_source;
};

struct TEST_STRN_CPY_CAT
{
    char* string_destination;
    char* string_source;
    size_t n;
};

struct TEST_STRCMP
{
    char* str1;
    char* str2;
};


void testSTRCHR  ();

void testSTRLEN  ();

void testSTRCPY  ();

void testSTRNCPY ();

void testSTRCAT  ();

void testSTRNCAT ();

void testSTRCMP  ();

#endif // TESTS_H