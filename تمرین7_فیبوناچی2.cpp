#include<iostream>
#include<conio.h>

using namespace std;
 
int fibonachi (int x)
{
   if (x <= 1)
      return x;
   else
      return fibonachi(x-1) + fibonachi(x-2);
}
 

int main ()
{
 
   int a ;
   cout << "vared kon yek adad :";
   cin>> a ;
   cout<< fibonachi(a);
 
  _getch();
  return 0;
}