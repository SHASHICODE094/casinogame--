#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int ch;
    cout << "--------------MENU------------\n";
    cout << " 1. Paper \n";
    cout << " 2. Secior \n";
    cout << " 3. Rock \n";
    cout << "Enter your choice\n";
    cout << "You : ";
    cin >> ch;
    srand(time(0));

    int min = 1, max = 3;
    int randomNum = min + rand() % (max - min + 1); // Formula for range

    // cout << "Random number between " << min << " and " << max << ": " << randomNum << std::endl;
    cout << "\n";
    if (randomNum == 1)
    {
        cout << "Computer : " << randomNum << "\n";

        if (randomNum == ch)
        {
            cout << "No result";
        }
        else if (ch == 2)
        {
            cout << "You won";
        }
        else if (ch == 3)
        {
            cout << "You loss";
        }
        else
        {
            cout << "it's 1";
        }
    }

    if (randomNum == 2)
    {
        cout << "Computer : " << randomNum << "\n";

        if (randomNum == ch)
        {
            cout << "No result";
        }
        else if (ch == 3)
        {
            cout << "You won";
        }
        else if (ch == 1)
        {
            cout << "You loss";
        }
        else
        {
            cout << "it's 1";
        }
    }

    else if (randomNum == 3)
    {
        cout << "Computer : " << randomNum << "\n";

        if (randomNum == ch)
        {
            cout << "No result";
        }
        else if (ch == 1)
        {
            cout << "You won";
        }
        else if (ch == 2)
        {
            cout << "You loss";
        }
        else
        {
            cout << "it's 1";
        }
    }
    // else
    // {
    //     cout << "you got wong"<<randomNum;
    // }
    return 0;
}