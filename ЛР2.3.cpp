/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[10],i,g;
    cout<<"Заполните массив: ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Идет сортировка массива по возрастанию"<<endl;
    for(i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(a[j]<a[j+1])
            {
                g=a[j];
                a[j]=a[j+1];
                a[j+1]=g;
            }
            
        }
        
    }
    cout<<"Сортировка окончена\nРезультат: ";
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
        
    }
}
