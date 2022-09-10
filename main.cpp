#include "StringFunction.h"
#include "tests.h"

int main ()
{
    testSTRCHR  ();
    testSTRLEN  ();
    testSTRCPY  ();
    testSTRNCPY ();
    testSTRCAT  (); 
    testSTRNCAT ();
    testSTRCMP  (); 

    return 0;
}
