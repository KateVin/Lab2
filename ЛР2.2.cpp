/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i=0, size=10, a[10], g=-1;
    cout<<"Заполните массив "<<endl;
    for(i;i<size;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
        
    }
    cout<<"Выберите число, которое хотите найти: ";
    cin>>g;
    cout<<"Выберите дипозон поиска числа от 0 до 9\nОт ";
    cin>>i;
    cout<<"до ";
    cin>>size;
    for(i;i<size;i++)
    {
        if(a[i]==g)
        {
            cout<<"Число было найдено под номером "<<i<<endl;
        }
    }
}
