#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
void amplifyNO(int no);
main()
{
   int amplify, series;
   cout << "Enter number: ";
   cin >> amplify;
   amplifyNO(amplify);
}
void amplifyNO(int no)
{

   for (int x = 1; x <= no; x++)
   {
      int i = x;
      // checking number divisble by 4
      if (i % 4 == 0)
      {

         i = i * 10;
      }

      cout << i << " ";
   }
}
