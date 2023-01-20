#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{
    int treated = 0, untreated = 0, doc = 7;
    int day = 0, patients = 0;
    cout << "Enter days: ";
    cin >> day;
    for (int x = 1; x <= day; x++)
    {
        cout << "Enter number of patients: ";
        cin >> patients;
        untreated += patients;
        if (x % 3 == 0)
        {
            if (untreated >= treated)
            {
                doc++;
            }
        }
        if (patients <= doc)
        {
            treated += patients;
            untreated = untreated - patients;
        }
        else if (untreated >= doc)
        {
            untreated = untreated - doc;
            treated += doc;
        }
    }
    cout << treated << endl
         << untreated;
}