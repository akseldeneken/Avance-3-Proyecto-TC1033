#ifndef PROYECTOCLASES_H_
#define PROYECTOCLASES_H_
#include <iostream>
#include "ProyectoEmpresa.h"
using namespace std;

//definimos la clase padre "Producto" que va a llevar todos los parametros generales que un producto en la tienda tiene

class Producto{
    private:
    float precio;
    int idn;
    string nombre;
    string status;
    string especificaciones;
    public:
    Producto(): precio(0.0), idn(0), nombre(""), status(""), especificaciones(""){}; //constructor que asigna valores nulos a las variables
    Producto(float pre, int id, string nom, string sta, string espe): precio(pre),idn(id), nombre(nom), status(sta), especificaciones(espe){}; //constructor que asigna los valores de las variables a otras variables para poder acceer a ellas
    float getPrecio();
    int getId();
    string getNombre();
    string getStatus();
    string getEspec();
    void setPrecio(float);     //getter y setters   
    void setId(int);
    void setNombre(string);
    void setStatus(string);
    void setEspec(string);
    void muestraDatos();
};

float Producto::getPrecio(){
    return precio;
}

int Producto::getId(){
    return idn;
}

string Producto::getNombre(){
    return nombre;
}

string Producto::getStatus(){
    return status;
}

string Producto::getEspec(){
    return especificaciones;
}

void Producto::setPrecio(float pre){
    precio = pre;
}

void Producto::setId(int id){
    idn = id;
}

void Producto::setNombre(string nom){
    nombre = nom;
}

void Producto::setStatus(string sta){
    status = sta;
}

void Producto::setEspec(string espe){
    especificaciones = espe;
}

void Producto::muestraDatos(){ //Despliega los datos del producto en pantalla
    cout << "\nNombre del Producto: " << nombre << endl;
    cout << "ID: " << idn << endl;
    cout << "Precio: " << precio << endl;
    cout << "Esatus: " << status << endl;
    cout << "Especificaciones: " << especificaciones << endl;
}







//clase heredada de Producto 
class Laptop : public Producto{
    private:
        string procesador; //tiene los mismos atributos que un producto pero se le agrega el procesador
    public:
        Laptop(): procesador(""){}; //constructor para asignar valores nulos
        Laptop(float pre, int id, string nom, string sta, string espe, string pro): Producto(pre, id, nom, sta, espe), procesador(pro){}; //constructor
        string getPro();
        void setPro(string);
        void muestraPro();
        
};

string Laptop::getPro(){
    return procesador;
}

void Laptop::setPro(string pro){
    procesador = pro;
}

void Laptop::muestraPro(){ //imprime el dato extra de esta clase
    cout << "Procesador: " << procesador << endl;
}




//Clase heredda de producto 
class Celular : public Producto{
    private:
        string camara; //esta clase tiene el atributo camara aparte de los atributos de un producto
    public:
        Celular(): camara(""){}; //constructores
        Celular(float pre, int id, string nom, string sta, string espe, string cam): Producto(pre, id, nom, sta, espe), camara(cam){};
        string getCam();
        void setCam(string);
        void muestraCam();
};

string Celular::getCam(){
    return camara;
}

void Celular::setCam(string cam){
    camara = cam;
}

void Celular::muestraCam(){ //imprime la informacion de la camara
    cout << "Camara: " << camara << endl;
}



//Clase clientes que tiene composicion con la clase producto ya que un cliente no puede existir si no ha comprado nada
class Clientes{
    private:
        string nombre;
        string direccion;
        int numero;
        Producto prodComprado; //Al cliente se le añade un atributo que es el producto que compró
    public:
        Clientes(): nombre(""), direccion(""), numero(0){}; //constructores
        Clientes(string nom, string dir, int num, Producto prod) : nombre(nom), direccion(dir), numero(num), prodComprado(prod){};
        string getNombre();
        string getDireccion();
        int getNumero();
        Producto getProd();
        void setNombre(string);
        void setDireccion(string);
        void setNumero(int);
        void setProd(Producto);
        void muestraDatos();

};

string Clientes::getNombre(){
    return nombre;
}

string Clientes::getDireccion(){
    return direccion;
}

int Clientes::getNumero(){
    return numero;
}

Producto Clientes::getProd(){
    return prodComprado;
}

void Clientes::setNumero(int num){
    numero = num;
}

void Clientes::setNombre(string nom){
    nombre = nom;
}

void Clientes::setDireccion(string dir){
    direccion = dir;
}

void Clientes::setProd(Producto prod){
    prodComprado = prod;
}

void Clientes::muestraDatos(){ //muestra los datos del cliente
    cout << "\nNombre: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Numero telefonico: " << numero << endl;
    cout << "Producto Comprado: " << prodComprado.getNombre() << endl;
}






#endif // PROYECTOCLASES_H_