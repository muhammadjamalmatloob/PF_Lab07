#include <iostream>
using namespace std;

int digitSum(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits: " << digitSum(n);
    return 0;
}

int digitSum(int n)
{
    int sum = 0;
    while (true)
    {
        sum += (n%10);
        if (n/10 == 0)
            break;
        n /= 10;
    }
    if (n < 0)
        sum = -sum;
    return sum;
}