#include <iostream>
int suma(int a, int b){
    int resultado = a + b;
    return resultado;
}
int main() {
    int a = 5;
    int b = 15;
    int resultado=suma(a,b);
    std::cout<<"la suma entre "<< a <<" y "<< b <<" es "<<resultado<<std::endl;

}
