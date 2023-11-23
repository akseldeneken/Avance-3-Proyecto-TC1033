#ifndef PROYECTOEMPRESA_H_
#define PROYECTOEMPRESA_H_
#include <iostream>
#include "ProyectoClases.h"
using namespace std;


//La clase empresa que se compone de todas las clases definidas
class Empresa{
    private:
        Laptop lap[100];            //Permite que existan un maximo de 100 objetos laptop
        Celular cel[100];           //Permite que existan un maximo de 100 objetos celular
        Clientes cli[100];         //Permite que existan un maximo de 100 objetos clientes
        int laps, cels, clis;      //Contadores para saber el número de laptops, clientes, celulares
    public:
        Empresa(): laps(0), cels(0), clis(0){};  //Constructor
        void creaEjemplosLaps();
        void muestraLaps();
        void creaEjemplosCel();
        void muestraCel();
        void creaEjemplosCli();
        void muestraCli();
        void agregaCliLap(string nombre, string direccion, int numero, int id);
        void agregaCliCel(string nombre, string direccion, int numero, int id);


};


//Crea ejemplos de objetos Laptops 
void Empresa::creaEjemplosLaps(){
    lap[0] = Laptop(1200.0, 1, "Laptop HP", "Disponible", "Especificaciones avanzadas", "Intel Core i7");
    laps += 1;
    lap[1] = Laptop(1000.0, 2, "Laptop Dell", "Disponible", "Especificaciones estándar", "AMD Ryzen 5");
    laps += 1;
    lap[2] = Laptop(1500.0, 3, "Laptop Lenovo", "Agotado", "Especificaciones premium", "Intel Core i9");
    laps += 1;
    lap[3] = Laptop(800.0, 4, "Laptop Acer", "Disponible", "Especificaciones básicas", "AMD Ryzen 3");
    laps += 1;
    lap [4] = Laptop(1300.0, 5, "Laptop Asus", "Disponible", "Especificaciones gamer", "Intel Core i5");

}

//Muestra todas las laptops existentes
void Empresa::muestraLaps(){
    for (int i = 0; i < laps; i++){
        lap[i].muestraDatos();
        lap[i].muestraPro();
    }
}

//Crea ejemplos de Celulares
void Empresa::creaEjemplosCel(){
    cel[0] = Celular(500.0, 6, "Celular Samsung", "Disponible", "Especificaciones estándar", "Cámara de 48 MP");
    cels += 1;
    cel[1] = Celular(700.0, 7, "Celular iPhone", "Agotado", "Especificaciones premium", "Cámara de 12 MP");
    cels += 1;
    cel[2] = Celular(300.0, 8, "Celular Xiaomi", "Disponible", "Especificaciones básicas", "Cámara de 16 MP");
    cels += 1;
    cel[3] = Celular(900.0, 9, "Celular Google Pixel", "Disponible", "Especificaciones avanzadas", "Cámara de 20 MP");
    cels += 1;
    cel[4] = Celular(600.0, 10, "Celular OnePlus", "Agotado", "Especificaciones gamer", "Cámara de 64 MP");
}

//Muestra todos los celulares existentes
void Empresa::muestraCel(){
    for (int i = 0; i < cels; i++){
        cel[i].muestraDatos();
        cel[i].muestraCam();
    }
}

//Crea ejemplos de Clientes
void Empresa::creaEjemplosCli(){
    cli[0] = Clientes("Juan Perez", "Calle A #123", 123456789, lap[0]);
    clis += 1;
    cli[1] = Clientes("Maria Rodriguez", "Avenida B #456", 987654321, lap[1]);
    clis += 1;
    cli[2] = Clientes("Carlos Gomez", "Carrera C #789", 456789012, lap[4]);
    clis += 1;
    cli[3] = Clientes("Ana Martinez", "Calle D #1011", 345678901, lap[3]);
    clis += 1;
    cli[4] = Clientes("Pedro Sanchez", "Avenida E #1213", 234567890, lap[2]);
}

//Permite que el usuario registre un cliente nuevo que compro una laptop
void Empresa::agregaCliLap(string nombre, string direccion, int numero, int id){
    clis += 1;
    Clientes nuevo(nombre, direccion, numero, lap[id]);
    cli[clis] = nuevo;
}

//Permite que el usuario registre un cliente nuevo que compro un Celular
void Empresa::agregaCliCel(string nombre, string direccion, int numero, int id){
    clis += 1;
    Clientes nuevo(nombre, direccion, numero, cel[id]);
    cli[clis] = nuevo;
}

//Muestra todos los clientes
void Empresa::muestraCli(){
    for (int i = 0; i < clis; i++){
        cli[i].muestraDatos();
    }
}

#endif // PROYECTOEMPRESA_H_