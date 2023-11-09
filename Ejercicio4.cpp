#include <iostream>
#include <stdexcept>
int UnNumeroPositivo(){
    int numero;
    std::cout<<"ingrese un nunmero positivo: ";
    std::cin>>numero;
    if(numero<0){
        throw std::runtime_error("Error,se ha ingresado un numero negativo");
    }
    return numero;
}
int main() {
    try{
        int NumeroPositivo=UnNumeroPositivo();
        std::cout<<"Numero ingresado: "<<NumeroPositivo<<std::endl;
    }catch (const std::exception& e){
        std::cout<<"Excepcion: "<<e.what()<<std::endl;
    }


    return 0;
}
