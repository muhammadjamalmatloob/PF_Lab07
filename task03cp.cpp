#include <iostream>
using namespace std;

int totalDigits(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Total number of digits: " << totalDigits(n);
}

int totalDigits(int n)
{
    int c = 1;
    while (true)
    {
        if (n/10 == 0)
        {
            break;
        }
        else
        {
            c++;
            n = n/10;
        }
    }
    return c;
}