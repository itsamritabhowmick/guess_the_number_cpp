#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void gamecode(int n, int attempt)
{
    int guess;
    int count = 0;
    int fl = 0;
    while (count < attempt)
    {
        cout << "\nEnter your number: ";
        cin >> guess;
        if (guess > n)
        {
            cout << "\nToo large number. Try again.";
            count++;
        }
        else if (guess < n)
        {
            cout << "\nToo small number. Try again.";
            count++;
        }
        else
        {
            fl = 1;
            cout << "\nYour number is right now..";
            break;
        }
    }
    if (fl == 1)
    {
        cout << "\nCongratulations!!! You guess in " << count + 1 << " attempts" << endl;
    }
    else
    {
        cout << "\nYou loose." << endl;
    }
}
void easy()
{
    srand(time(0));
    int n = rand();
    n = (n % 10) + 1;
    gamecode(n, 5);
}
void medium()
{
    srand(time(0));
    int n = rand();
    n = (n % 100) + 1;
    gamecode(n, 7);
}
void hard();
int main()
{
    int level;
    cout << "\nEnter the level for this game: ";
    cin >> level;
    if (level == 1)
    {
        easy();
    }
    else if (level == 2)
    {
        medium();
    }
    else if (level == 3)
    {
        // hard();
    }
    return 0;
}