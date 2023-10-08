#include <iostream>
using namespace std;

float pyramidVolume(float length, float width, float height, string unit)
{
    float volume = ((length * width) / 3) * height;
    if (unit == "meters")
    {
        volume = volume;
    }
    if (unit == "millimeters")
    {
        volume = volume * 1000;
    }
    if (unit == "centimeters")
    {
        volume = volume * 100;
    }
    if (unit == "kilometers")
    {
        volume = volume / 1000;
    }
    return volume;
}
main()
{
    float length, width, height;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    float volume = pyramidVolume(length, width, height, unit);
    cout << "The volume of the pyramid is: " << volume << " cubic " << unit;
}