#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
    int *arreglo = new int[n]; 
    for(int i = 0; i < n; i++)
    {
        arreglo[i] = n - i;
    }
    
    cout<<"El arreglo descendente es: [";
    
    for(int i = 0; i < n; i++)
    {
        cout<<arreglo[i];
        
        if(i < n - 1)
        {
            cout<<",";
        }
    }
    
    cout<<"]"<<endl;
    
    delete[] arreglo;
    
	system ("pause");
    return 0;
}
