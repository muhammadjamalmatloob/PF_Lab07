#include <iostream>
using namespace std;

void generateFibonacci(int len);

int main()
{
    int len;
    cout << "Enter the length of Fibonacci Series: ";
    cin >> len;
    generateFibonacci(len);
    return 0;
}

void generateFibonacci(int len)
{
    int temp, n1 = 0, n2 = 1;
    for (int i = 1; i < len; i++)
    {
        temp = n1;
        n1 = n2;
        n2 = temp + n2;
        cout << temp << ", ";
    }
    cout << n1;
}