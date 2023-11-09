#include <iostream>
#include <vector>

double CalcPromedio(const std::vector<int>& calificaciones){
    if(calificaciones.empty()){
        return 0;
    }
    int suma=0;
    for (int calificacion : calificaciones){
        suma += calificacion;
    }
    return suma/static_cast<double >(calificaciones.size());
}
int main() {
    std::vector<int> calificaciones ={6,5,9,7,4};
    double promedio= CalcPromedio(calificaciones);

    std::cout<<"El promedio de las notas es:"<<promedio<<std::endl;

    return 0;
}
