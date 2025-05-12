#include <iostream>
using namespace std;

#include <math.h>

// files
#include "menu.h"
#include "io.h"
#include "types.h"

int main()
{
    int choice;
    startMenuMessage();
    choice = menu();

    switch (choice)
    {
    case 1:
        /* code */
        break;
    
    case 2:

        break;
    
    case 3:

        break;

    case 0:
        exitMessage();
        return 0;

    default:
        break;
    }

    return 0;
}