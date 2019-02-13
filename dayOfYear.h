#ifndef DAYOFYEAR_H_INCLUDED
#define DAYOFYEAR_H_INCLUDED
#include <string>

using namespace std;

class DayOfYear
{
    private:
        int userInput;

    public:
        DayOfYear(int u);
        void return_day_of_year(int userInput);
        int days[12] = {31, 28, 31, 30, 31, 30,  31, 31, 30, 31, 30, 31};
        string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
};

DayOfYear::DayOfYear(int u)
{
    userInput = u;
}

void DayOfYear::return_day_of_year(int userInput)
{
    for(int i = 0; i < 12; i++)
    {
        if(userInput <= days[i])
        {
            cout << endl << month[i] << " " << userInput << endl;
            return;
        }

        else
            userInput = userInput - days[i];
    }
}

#endif // DAYOFYEAR_H_INCLUDED
