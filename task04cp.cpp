#include <iostream>
using namespace std;

int frequencyChecker(int n, int d);

int main()
{
    int n,d;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the digit to check: ";
    cin >> d;
    cout << "Frequency: " << frequencyChecker(n,d);
    return 0;
}

int frequencyChecker(int n, int d)
{
    int f = 0;
    while (true)
    {
        if (n%10 == d || n%10 == -d)
            f++;
        if (n/10 == 0)
            break;
        n/=10;
    }
    return f;
}
