#include <iostream>
using namespace std;

int projectTimeCalculation(float time, float days, float workers)
{
    float finalTime = workers * (0.9 * 10 * days);
    return finalTime;
}
main()
{
    float time, days, workers, finalTime;
    cout << "Enter the needed hours: ";
    cin >> time;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    finalTime = projectTimeCalculation(time, days, workers);
    if (time > finalTime)
    {
        int roundedfinalTime = time - finalTime;
        cout << "Not enough time! " << roundedfinalTime << " hours needed.";
    }
    if (time < finalTime)
    {
        int roundedfinalTime = finalTime - time;
        cout << "Yes!" << roundedfinalTime << " hours left.";
    }
}