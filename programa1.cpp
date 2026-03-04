#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string binario;
    int decimal = 0;
    
    cout<<"Ingrese un numero binario: ";
    cin>>binario;
    
    int longitud = binario.length();
    
    for(int i = 0; i < longitud; i++)
    {
        if(binario[longitud - 1 - i] == '1')
        {
            decimal = decimal + pow(2, i);
        }
    }
    
    cout<<"El numero decimal es: "<<decimal<<endl;
    
	system ("pause");
    return 0;
}
