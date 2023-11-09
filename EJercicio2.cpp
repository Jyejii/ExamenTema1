#include <iostream>
#include <string>
class Estudiante{
private:
    std::string nombre;
    int edad;
    std::string grado;
public:
    Estudiante(std::string nombre,int edad,std::string grado)
        : nombre(nombre),edad(edad),grado(grado) {


    }
    void mostrar_info(){
            std::cout<<"Nombre:" << nombre<< std::endl;
            std::cout<<"Edad:"<<edad<<std::endl;
            std::cout<<"Grado:"<<grado <<std::endl;

    }
};

int main() {
    Estudiante estudiante1("Jiachen", 18, "informatica");
    estudiante1.mostrar_info();
    return 0;
}