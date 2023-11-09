#include <iostream>
void intercambiar(int*a,int*b){
    int VariableTemporal=*a;
    *a=*b;
    *b=VariableTemporal;
}
int main() {
    int num1=10;
    int num2=20;

    std::cout<<"Antes del intercambio:"<<std::endl;
    std::cout<<"El primer numero es igual a "<<num1<<std::endl;
    std::cout<<"El segundo numero es igual a "<<num2<<std::endl;
    intercambiar(&num1,&num2);
    std::cout<<"Despues del intercambio:"<<std::endl;
    std::cout<<"El primer numero se ha convertido en "<<num1<<std::endl;
    std::cout<<"El segundo numero se ha convertido en "<<num2<<std::endl;

    return 0;
}
