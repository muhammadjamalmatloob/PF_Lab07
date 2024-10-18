#include <iostream>
using namespace std;

int showSum();

int main()
{
    cout << showSum();
    return 0;
}

int showSum()
{
    int sum = 0; 
    for (int i = 1; i <= 5; i++)
    {
        sum +=i;
    }
    return sum;
}