#include <iostream>
#include <conio.h>
using namespace std;
void printHeader();
int menu();
int main()
{
    system("cls");
    string name1 = "", name2 = "", name3 = "";
    float hourlyRate1 = 0.0, hourlyRate2 = 0.0, hourlyRate3 = 0.0;
    float totalHours1 = 0.0, totalHours2 = 0.0, totalHours3 = 0.0;
    float totalWage1 = 0.0, totalWage2 = 0.0, totalWage3 = 0.0;
    int option;
    while (true)
    {
        printHeader();
        option = menu();
        if (option == 1)
        {
            cout << "Enter the Name of 1st Employee: ";
            cin >> name1;
            cout << "Enter the Hourly Rate of 1st Employee: $";
            cin >> hourlyRate1;
            cout << "Enter the Total Hours Worked of 1st Employee: ";
            cin >> totalHours1;
        }
        if (option == 2)
        {
            cout << "Enter the Name of 2nd Employee: ";
            cin >> name2;
            cout << "Enter the Hourly Rate of 2nd Employee: $";
            cin >> hourlyRate2;
            cout << "Enter the Total Hours Worked of 2nd Employee: ";
            cin >> totalHours2;
        }
        if (option == 3)
        {
            cout << "Enter the Name of 3rd Employee: ";
            cin >> name3;
            cout << "Enter the Hourly Rate of 3rd Employee: $";
            cin >> hourlyRate3;
            cout << "Enter the Total Hours of 3rd Employee: ";
            cin >> totalHours3;
        }
        if (option == 4)
        {
            system("cls");
            printHeader();
            totalWage1 = hourlyRate1 * totalHours1;
            cout << "The Total Wage of " << name1 << " is " << totalWage1 << "$"<< endl;
            totalWage2 = hourlyRate2 * totalHours2;
            cout << "The Total Wage of " << name2 << " is " << totalWage2 << "$"<< endl;
            totalWage3 = hourlyRate3 * totalHours3;
            cout << "The Total Wage of " << name3 << " is " << totalWage3 << "$"<< endl;
            
        }
        if (option == 5)
        {
            system("cls");
            printHeader();
            cout << "                   ALL EMPLOYEES DATA TABLE" << endl <<endl;
            cout << "NAME"<< "\t"<< "HOURLY RATE"<< "\t"<< "TOTAL HOURS WORKED"<< "\t"<< "TOTAL WAGE" << endl;
            cout << name1 << "\t" << hourlyRate1 << "\t"<< "\t" << totalHours1 << "\t" << "\t"<< "\t"<< totalWage1 << endl;
            cout << name2 << "\t" << hourlyRate2 << "\t"<< "\t" << totalHours2 << "\t" << "\t"<< "\t"<< totalWage2 << endl;
            cout << name3 << "\t" << hourlyRate3 << "\t"<< "\t" << totalHours3 << "\t" << "\t"<< "\t"<< totalWage3 << endl;
            
        }
        if (option == 6)
        {
            return 0;
        }
        cout << "Press any key to continue..";
        getch();
        system("cls");
    }
    
}

void printHeader()
{
    cout << "************************************************************" << endl;
    cout << "*             EMPLOYEE WAGE MANAGEMENT SYSTEM              *" << endl;
    cout << "************************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
int menu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1. Add 1st Employee Data" << endl;
    cout << "2. Add 2nd Employee Data" << endl;
    cout << "3. Add 3rd Employee Data" << endl;
    cout << "4. Calculate Total Time of each Employee" << endl;
    cout << "5. View All Data in Table" << endl;
    cout << "6. Exit" << endl;
    cout << "Your Option.. ";
    cin >> option;
    return option;
}
