#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
main()
{
  float perBus = 0.0, perTruck = 0.0, perTrain = 0.0, average = 0.0;
  float tonage = 0.0, totalprice = 0.0, prntg = 0.0, total = 0.0;
  float veh = 0.0, miniBus = 0.0, Train = 0.0, Truck = 0.0;
  cout << "Enter number of vehicals: ";
  cin >> veh;
  for (int x = 1; x <= veh; x++)
  {
    cout << "Vehicals: ";
    cin >> tonage;
    total = tonage + total;
    if (tonage <= 3)
    {
      miniBus = miniBus + tonage;
    }
    if (tonage > 3 && tonage <= 11)
    {
      Truck = Truck + tonage;
    }
    if (tonage > 11)
    {
      Train = Train + tonage;
    }
  }
  perBus = miniBus / total * 100;
  perTrain = Train / total * 100;
  perTruck = Truck / total * 100;
  average = ((miniBus * 200) + (Truck * 175) + (Train * 120)) / total;
  cout << "Average price per ton: " << average << endl;
  cout << " For Bus: " << perBus << endl;
  cout << "For Truck: " << perTruck << endl;
  cout << "For Train: " << perTrain << endl;
}