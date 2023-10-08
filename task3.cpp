#include <iostream>
using namespace std;

float taxCalculator(char type, float price)
{
    float finalPrice, tax;
    if (type == 'M')
    {
        finalPrice = price + (price * 6 / 100);
    }
    if (type == 'E')
    {
        finalPrice = price + (price * 8 / 100);
    }
    if (type == 'S')
    {
        finalPrice = price + (price * 10 / 100);
    }
    if (type == 'V')
    {
        finalPrice = price + (price * 12 / 100);
    }
    if (type == 'T')
    {
        finalPrice = price + (price * 15 / 100);
    }
    return finalPrice;
}
main()
{
    char type;
    float price;
    float finalPrice;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    finalPrice = taxCalculator(type, price);
    cout << "The final price of a vehicle of type " << type << " after adding tax is $" << finalPrice << ".";
}