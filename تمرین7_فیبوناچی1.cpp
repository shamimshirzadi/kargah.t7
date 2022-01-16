#include<iostream>
#include<conio.h>
#include<math.h>

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
   
    int i;
    for ( i = 0;; i++)
         if (fibonachi(i) < 1000)
            cout << fibonachi(i) << endl;
    
    _getch();
    return 0;
}
