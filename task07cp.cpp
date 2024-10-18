#include <iostream>
#include <iomanip>
using namespace std;

void calculatePercentage(int count);

int main ()
{
    int count;
    cout << "Enter numbers count: ";
    cin >> count;
    calculatePercentage(count);
    
}

void calculatePercentage(int count)
{
    float n, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter a number: ";
        cin >> n;
        if (n < 200)
            p1++;
        else if (n < 400)
            p2++;
        else if (n < 600)
            p3++;
        else if (n < 800)
            p4++;
        else if (n >= 800)
            p5++;
    }
    cout << fixed << setprecision(2) << (p1/count)*100 << "%" << endl;
    cout << fixed << setprecision(2) << (p2/count)*100 << "%" << endl;
    cout << fixed << setprecision(2) << (p3/count)*100 << "%" << endl;
    cout << fixed << setprecision(2) << (p4/count)*100 << "%" << endl;
    cout << fixed << setprecision(2) << (p5/count)*100 << "%" << endl;
}