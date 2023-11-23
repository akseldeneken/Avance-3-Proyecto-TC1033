#include <iostream>
#include "ProyectoEmpresa.h"
#include "ProyectoClases.h"

using namespace std;

void menu(){ //imprime el menu

    cout << "\nMENU PRINCIPAL" << endl << endl;
    cout << "1. Laptops" << endl;
    cout << "2. Celulares" << endl;
    cout << "3. Clientes" << endl;
    cout << "4. Registrar Cliente Nuevo" << endl;
    cout << "5. Salir" << endl;

}


int main(){

    Empresa empresa;      //crea un objeto de tipo empresa
    empresa.creaEjemplosLaps();
    empresa.creaEjemplosCel();
    empresa.creaEjemplosCli();
    int opcion;
    string temp_nombre, temp_direccion;
    int temp_numero, temp_id;


    while (opcion != 5){     //va a imprimir el menu hasta que el usuario ponga la opcion "salir"
        menu();
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion){   //cambia el input de opcion a diferentes casos para no usar if en todo el menu
        case 1:
            empresa.muestraLaps();
            break;

        case 2:
            empresa.muestraCel();
            break;

        case 3:
            empresa.muestraCli();
            break;

        case 4:
            char registroCli;
            int prodComprado;
            cout << "\nDesea registrar a un cliente nuevo?: ";
            cin >> registroCli;

            if (registroCli == 's'){
                cout << "\nIngrese el nombre: "; cin >> temp_nombre; //pide todos los datos del cliente nuevo y lo agrega
                cout << "\nIngresa la direccion: "; cin >> temp_direccion;
                cout << "\nIngresa el numero telefonico: "; cin >> temp_numero;
                cout << "\nQue tipo de producto es?(Laptop = 1, Celular = 2): "; cin >> prodComprado;

                if (prodComprado == 1){ //Pregunta si es laptop o celular para poder agregar el producto corectamente a los datos del cliente
                    cout << "\nIngresa el id del producto comprado: "; cin >> temp_id;
                    empresa.agregaCliLap(temp_nombre, temp_direccion, temp_numero, temp_id);
                    cout << "\nCliente agregado" << endl;
                }
                else if (prodComprado == 2){
                    cout << "\nIngresa el id del producto comprado: "; cin >> temp_id;
                    empresa.agregaCliCel(temp_nombre, temp_direccion, temp_numero, temp_id);
                    cout << "\nCliente agregado" << endl;
                }
                
                break;
            }

            break;

        default:
            cout << "Opcion invalida" << endl; //si el input no es igual a cualquiera de las opciones disponibles, es una opcion invalida
                
        }
    }   
}

