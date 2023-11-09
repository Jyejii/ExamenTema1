#include <iostream>
#include <vector>
#include <string>
class Estudiante{
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;
public:
    Estudiante(std::string nombre,int edad,std::string grado)
        : nombre(nombre),edad(edad),grado(grado){

    }
    void registrar_materia(std::string materia){
        materias.push_back(materia);
    }
    void mostrar_materias(){
        std::cout<<"materias registradas de "<<nombre<<":"<<std::endl;
        for(const auto& materia : materias){
            std::cout<<materia<<std::endl;
        }

    }

};
int main() {
    Estudiante estudiante1("Jiachen",18,"Informatica ");
    estudiante1.registrar_materia("Programacion");
    estudiante1.registrar_materia("Matematicas");
    estudiante1.registrar_materia("Fisica");
    estudiante1.registrar_materia("Ingles");
    estudiante1.registrar_materia("Tecnicas comunicativas");
    estudiante1.registrar_materia("Informatica");

    estudiante1.mostrar_materias();

    return 0;
}
