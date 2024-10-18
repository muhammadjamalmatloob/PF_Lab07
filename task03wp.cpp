#include <iostream>
using namespace std;

void printCounting();

int main()
{
    printCounting();
    return 0;
}

void printCounting()
{
    cout << "Counting (1-10): " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
}