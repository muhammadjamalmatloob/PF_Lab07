#include <iostream>
#include <string>
using namespace std;

int calculateMoney(int age, int w_price, int t_price);

int main ()
{
    int age, w_p, t_p;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> w_p;
    cout << "Enter the unit price of each toy: ";
    cin >> t_p;
    if (calculateMoney(age,w_p,t_p) >= w_p)
        cout << "Yes! \n" << calculateMoney(age,w_p,t_p) - w_p;
    else
        cout << "No !\n" << w_p - calculateMoney(age,w_p,t_p);
    return 0;
}

int calculateMoney(int age, int w_price, int t_price)
{
    int total = (age/2)*t_price;
    if (age%2 != 0)
        total = (age/2 + 1)*t_price;
    for (int i = 1; i <= (age/2); i++)
    {
        total += (i*10 - 1);
    }
    return total;
}