#include <iostream>
using namespace std;

int calcultePrice(int money, int year); 

int main ()
{
    int m, y, price;
    cout << "Enter money: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;
    price = calcultePrice(m,y);
    if (m >= price)
    {
        cout << "Yes! He will live a carefree life and will have " << m-price << " dollars left.";
    }
    else
    {
        cout << "He will need " << price-m << " dollars to survive.";
    }
    return 0;
}

int calcultePrice(int money, int year)
{
    int price = 0,age;
    for (int i = 1800; i <= year; i++)
    {
        if (i%2 == 0)
        {
            price += 12000;
        }
        else
        {
            age = 18 + (i - 1800);
            price += (12000 + age*50);
        }

    }
    return price;
}