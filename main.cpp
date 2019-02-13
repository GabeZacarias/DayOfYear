#include <iostream>
#include <cstdio>
#include "dayOfYear.h"

using namespace std;

int main()
{
    int userInput = 0;
    char quit;
    bool stop = false;
    DayOfYear d(userInput);

    cout << "The program converts a number";
    cout << endl << "into a string representing the month of day" << endl << endl;

    while (stop == false)
    {

        if (userInput < 1 || userInput > 365)
        {
            cout << "Enter a whole number between 1 and 365 or 'Q' to quit: ";
            cin >> userInput;
        }

        if (userInput >= 1 && userInput <= 365)
        {
            d.return_day_of_year(userInput);
            cout << endl;
            cout << "Enter a whole number between 1 and 365 or 'Q' to quit: ";
            cin >> userInput;
        }

        scanf("%c", &quit);

        if (quit == 'q' || quit == 'Q')
        {
            cout << endl << "Thanks";
            stop = true;
        }
    }

	return 0;
}
