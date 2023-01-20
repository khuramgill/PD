#include <iostream>
#include <windows.h>
using namespace std;
int NestedForLoop(int tri);
main()
{
  int tri, result;
  cout << "Enter number of Triangle: ";
  cin >> tri;
  result = NestedForLoop(tri);
  cout << result;
}
int NestedForLoop(int tri)
{
  int out = 0;
  for (int x = 1; x <= tri; x++)
  {
    for (int y = 1; y <= x; y++)
    {
      out = out + 1;
    }
  }
  return out;
}