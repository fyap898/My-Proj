#include "menu.h"
#include "types.h"

/*
    Name: startMenuMessage
    Input: NA
    Description: Display message when first running the game.
*/
void startMenuMessage()
{
    cout << "\n\n";
    cout << Bold << Cyan << "Welcome to THE GAME\n" << Reset;

    return;
}

/*
    Name: menu
    Input: NA
    Description: Display choices for the menu
*/
int menu()
{
    int choice = -1;
    bool not_selected = true;

    while((choice < 0) || (choice > 4))
    {
        cout << "Please select\n\n";
        cout << "(1)    New Game" << endl
            << "(2)    Continue Game" << endl
            << "(3)    How to Play" << endl
            << Red << "(0)    Exit\n\n" << Reset;
        cout << "Choice: ";

        char input;
        cin >> input;

        // Convert char digit to int
        if (input >= '0' && input < '4') {
            choice = input - '0';
        } else {
            cout << Red << Bold << "\n\n\nInvalid input. Please enter 0–4.\n\n" << Reset;
        }

        // Clear buffer (remove leftover newline)
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    return choice;
}

/*
    Name: exitMessage
    Input: NA
    Description: Display exit message
*/
void exitMessage()
{
    cout << Cyan << Bold << "Thank You For Playing\n\n" << Reset;
}

/*
    Name: askToSave
    Input: NA
    Description: Display message and ask if user wanted to 
                 save their progress
*/
int askToSave()
{
    int choice;
    bool not_selected = true;

    while(not_selected || !((choice == 2) || (choice == 1)))
    {
        cout << WhiteBack << Black << "Do you want to save your game?\n\n" << Reset;
        cout << "(1) Yes" << endl
            << "(2) No\n\n";

        char input = cin.get();

        choice = static_cast<int>(input - '0');
        not_selected = false;
    }

    return choice;
    
}