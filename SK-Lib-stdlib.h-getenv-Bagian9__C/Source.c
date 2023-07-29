#pragma warning(disable:4996)

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char* libvar;

    libvar = getenv("LIB");

    if (libvar != NULL) {
        printf("Original LIB variable is: %s\n", libvar);
    }
        
    _putenv("LIB=c:\\mylib;c:\\yourlib");

    libvar = getenv("LIB"); 

    if (libvar != NULL) {
        printf("New LIB variable is: %s\n", libvar);
    }
        
    _getch();
    return 0;
}