#include <iostream>
using namespace std; 
int main()
{
int b;
cout<<"bienvenidos al programa que muestra los numeros primos y compuestos"<<endl;
cout<<"ingrese un numero que quiera saber si es primo o compuesto"<<endl;
cin>>b;
if(b==0){
    cout<<"el cero no es primo ni compuesto"<<endl;
} else
 if(b%1==0 && b%b==0){
    cout<<"es primo"<<endl;
} else {
    cout<<"no es primo"<<endl;
}
return (0);
}


