#include <iostream>
using namespace std;

void printTable(int n);

int main ()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printTable(n);
    return 0;
}

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << i*n << endl;
    }
}