#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Cuantos numeros desea ingresar: ";
    cin>>n;
    
    int numeros[100];
    int inverso[100];
    
    for(int i = 0; i < n; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numeros[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        inverso[i] = -numeros[i];
    }
    
    cout<<"Arreglo original: ";
    for(int i = 0; i < n; i++)
    {
        cout<<numeros[i]<<" ";
    }
    
    cout<<"\nArreglo inverso: ";
    for(int i = 0; i < n; i++)
    {
        cout<<inverso[i]<<" ";
    }
    system ("pause");
    return 0;
}
