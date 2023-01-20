#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
main()
{
  int no2;
  float no1 = 0.0, p1 = 0.0, p2 = 0.0, p3 = 0.0;
  float perOfp1, perOfp2, perOfp3;
  cout << "Enter number: ";
  cin >> no1;
  for (int x = 1; x <= no1; x++)
  {
    cout << "Number: ";
    cin >> no2;
    if (no2 % 2 == 0)
    {
      p1 = p1 + 1;
    }
    if (no2 % 3 == 0)
    {
      p2 = p2 + 1;
    }
    if (no2 % 4 == 0)
    {
      p3 = p3 + 1;
    }
    perOfp1 = (p1 / no1) * 100;
    perOfp2 = (p2 / no1) * 100;
    perOfp3 = (p3 / no1) * 100;
  }
  cout << perOfp1 << endl;
  cout << perOfp2 << endl;
  cout << perOfp3 << endl;
}