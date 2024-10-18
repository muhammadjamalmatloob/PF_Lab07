#include <iostream>
using namespace std;

int gcd(int n1, int n2);
int lcm(int n1, int n2);

int main ()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "GCD: " << gcd(n1,n2) << endl;
    cout << "LCM: " << lcm(n1,n2);
}

int gcd(int n1, int n2)
{
    int temp;
    while (true)
    {
        if (n1%n2 == 0)
        {
            return n2;
        }
        temp = n1;
        n1 = n2;
        n2 = temp%n2;
    }
}

int lcm(int n1, int n2)
{
    return (n1*n2)/gcd(n1,n2);
}