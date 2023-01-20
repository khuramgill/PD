#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
void NestedForLoop(int rows);
main()
{
  int rows;
  cout << "Enter number of Rows: ";
  cin >> rows;
  NestedForLoop(rows);
}
void NestedForLoop(int rows)
{
  for (int x = 1; x <= rows; x--)
  {
    for (int y = 1; y <= x; y++)
    {
      cout << "*";
    }
    cout << endl;
  }
}