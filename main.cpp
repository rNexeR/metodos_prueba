#include <iostream>

using namespace std;

int int_input(string msg){
    cout<<"Ingrese "<<msg<<" (numero entero): ";
    int variable;
    cin>>variable;
    return variable;
}

string string_input(string msg){
    cout<<"Ingrese "<<msg<<" (texto): ";
    string variable;
    cin>>variable;
    return variable;
}

double double_input(string msg){
    cout<<"Ingrese "<<msg<<" (decimal): ";
    double variable;
    cin>>variable;
    return variable;
}

int main()
{
    int x = int_input("x");
    return 0;
}
