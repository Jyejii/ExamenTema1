#include <iostream>
#include <vector>
#include <string>
class Estudiante{
public:
    Estudiante(std::string nombre,int grado)
       : nombre(nombre),grado(grado){}
    int obtener_grado()const {
        return grado;
    }
    void mostrar_informacion()const{
        std::cout<<"Nombre:"<<nombre<<",Grado:"<< grado<<std::endl;
    }
private:
    std::string nombre;
    int grado;
};
std::vector<Estudiante> filtar_por_grado(const std::vector<Estudiante>& estudiantes,int grado){
    std::vector<Estudiante> estudiantes_filtrados;

    for( const Estudiante& estudiante : estudiantes){
        if(estudiante.obtener_grado()==grado){
            estudiantes_filtrados.push_back(estudiante);

        }
    }
    return estudiantes_filtrados;

}

int main() {
    std::vector<Estudiante> lista_estudiantes={
            Estudiante("Estudiante1",9),
            Estudiante("Estudiante2",10),
            Estudiante("Estudiante3",6),
            Estudiante("Estudiante4",10),
            Estudiante("Estudiante5",3)

    };
    int grado_a_filtrar=10;
    std::vector<Estudiante> estudiantes_filtrados= filtar_por_grado(lista_estudiantes, grado_a_filtrar);
    std::cout<<"Estudiantes del grado"<<grado_a_filtrar<<":"<<std::endl;
    for(const Estudiante&estudiante : estudiantes_filtrados){
        estudiante.mostrar_informacion();
    }

    return 0;
}
