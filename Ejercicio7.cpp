#include <iostream>
#include <string>
class RegistroAsistencia{
public:
    RegistroAsistencia(std::string fecha,std::string estado)
        : fecha(fecha),estado(estado){}
        void mostrarAsistencia(){
        std::cout<<"Fecha:"<<fecha<<",Estado:"<<estado<<std::endl;
    }
private:
    std::string fecha;
    std::string estado;
};
int main() {
    RegistroAsistencia registro1("09-11-2023","Asistio");
    RegistroAsistencia registro2("07-11-2023","Tardanza");
    RegistroAsistencia registro3("06-11-2023","Falta");

    registro1.mostrarAsistencia();
    registro2.mostrarAsistencia();
    registro3.mostrarAsistencia();

    return 0;
}
