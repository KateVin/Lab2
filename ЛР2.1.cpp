/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
   double a,b,c,x;
   cout<<"Введите a = ";
   cin>>a;
   cout<<"Введите b = ";
   cin>>b;
   cout<<"Введите c = ";
   cin>>c;
   if((b*b-4*a*c)>0)
   {
       x = (-1*b + sqrt(b*b - 4*a*c)) / (2 * a);
       cout << "Первый корень = " << x << endl;
       x = (-1*b - sqrt(b*b - 4*a*c)) / (2 * a);
       cout << "Второй корень = " << x << endl;
       
   }
   if((b*b-4*a*c)==0)
   {
       x = -1*(b / (2*a));
   }
   if((b*b-4*a*c)<0)
   {
       cout<<"Корни невещественны т.к. дискриминант равен 0";
   }

return 0;
}
