#include <iostream>
#include <string>
using namespace std;

// Clase de trabajadores
class Trabajador {
    private:
        // Inicializacion de las variables de Trabajador
        string nombreTrab;
        string puesto;
        string nombreEmp;
        string direccionEmp;
        string razonSocialocialEmp;
        int edad;
        int sueldo;

    public:

        // Getter del nombre del trabajador
        string getNombreTrab() {
            return nombreTrab;
        } // Fin del getter

        // Setter del nombre del trabajador
        void setNombreTrab(string nombre) {
            nombreTrab = nombre;
        } // Fin del setter

        // Getter del puesto
        string getPuesto() {
            return puesto;
        } // Fin del getter

        // Setter del puesto
        void setPuesto(string puesto) {
            puesto = puesto;
        } // Fin del setter
        
        // Getter del nombre de la empresa
        string getNombreEmp() {
            return nombreEmp;
        } // Fin del getter

        // Setter del nombre de la empresa
        void setNombreEmp(string nombre) {
            nombreEmp = nombre;
        } // Fin del setter

        // Getter de la direccion de la empresa
        string getDireccionEmp() {
            return direccionEmp;
        } // Fin del getter

        // Setter de la direccion de la empresa
        void setDireccionEmp(string direccion) {
            direccionEmp = direccion;
        } // Fin del setter

        // Getter de la razon social de la empresa
        string getRazonSocialocialEmp() {
            return razonSocialocialEmp;
        } // Fin del getter

        // Setter de la razon social de la empresa
        void setRazonSocialocialEmp(string razon) {
            razonSocialocialEmp = razon;
        } // Fin del setter

        // Getter de la edad
        int getEdad() {
            return edad;
        } // Fin del getter

        // Setter de la edad
        void setEdad(int edad) {
            edad = edad;
        } // Fin del setter

        // Getter del sueldo
        int getSueldo() {
            return sueldo;
        } // Fin del getter

         // Setter del sueldo
        void setSueldo(int sueldo) {
            sueldo = sueldo;
        } // Fin del setter
        
}; // Fin de la clase Trabajador

// Clase de PYMEs
class PYME {
    private:
        // Inicializacion de las variables de PYME
        string nombrePYME;
        string razonSocial;
        string direccion; 
        string nombreDirector;
        int numeroTrabajadores;
        int ingresosAnuales;
        

    public:
        // Arreglo para trabajadores
        Trabajador trabajadores[10];
        int contadorTrabajadores = 0;

        // Constructor de PYME
        PYME() {}

        // Destructor de PYME
        ~PYME() {}

        // Getter del nombre de la PYME
        string getNombrePYME() {
            return nombrePYME;
        } // Fin del getter

        // Setter del nombre de la PYME
        void setNombrePYME(string nombre) {
            nombrePYME = nombre;
        } // Fin del setter

        // Getter de la razon social
        string getRazonSocial() {
            return razonSocial;
        } // Fin del getter

        // Setter de la razon social
        void setRazonSocialocial(string razon) {
            razonSocial = razon;
        } // Fin del setter

        // Getter de la direccion
        string getDireccion() {
            return direccion;
        } // Fin del getter

        // Setter de la direccion
        void setDireccion(string direccionEmp) {
            direccion = direccionEmp;
        } // Fin del setter

        // Getter del nombre del director
        string getNombreDirector() {
            return nombreDirector;
        } // Fin del getter

        // Setter del nombre del director
        void setNombreDirector(string director) {
            nombreDirector = director;
        } // Fin del setter

        // Getter del numero de trabajadores
        int getNumeroTrabajadores() {
            return numeroTrabajadores;
        } // Fin del getter

        // Setter del numero de trabajadores
        void setNumeroTrabajadores(int numeroT) {
            numeroTrabajadores = numeroT;
        } // Fin del setter

        // Getter de los pesos anuales
        int getIngresosAnuales() {
            return ingresosAnuales;
        } // Fin del getter

        // Setter de los pesos anuales
        void setIngresosAnuales(int pesos) {
            ingresosAnuales = pesos;
        } // Fin del setter

}; // Fin de la clase PYME

// Main
int main() {

    // Inicializacion de las variables
    int opcion;
    int datosNum; 
    string datosStr;
    int contadorPYME = 0; 
    int contador; 

    // Arreglo de pymes
    PYME pymes[10];
    Trabajador trabajadores[10];


    // Menu principal
    while(true) {
        cout << "\n--------------- MENU ---------------" << endl; 
        cout << "(1) Agregar PYME" << endl;
        cout << "(2) Agregar trabajador" << endl;
        cout << "(3) Consultar PYME" << endl;
        cout << "(4) Consultar trabajador" << endl;
        cout << "(5) Cerrar" << endl;
        cout << "--------------------------------------" << endl; 
        cout << "\nPor favor ingrese el numero de la opcioncion deseada: " << endl;
        
        cin >> opcion;

        // Ejecucion de funciones en base a la seleccion del usuario
        switch(opcion) {
            case 1: // Agregar una PYME

                // Solicitud de los datos de la PYME
                cout << "\nPor favor ingrese los datos de la PYME." << endl;
                cout << "\nNombre: ";
                cin >> datosStr;
                pymes[contadorPYME].setNombrePYME(datosStr);
                cout << "Razon social: ";
                cin >> datosStr;
                pymes[contadorPYME].setRazonSocialocial(datosStr);
                cout << "Direccion: ";
                cin >> datosStr;
                pymes[contadorPYME].setDireccion(datosStr);
                cout << "Nombre del director: ";
                cin >> datosStr;
                pymes[contadorPYME].setNombreDirector(datosStr);
                cout << "Numero de trabajadores: ";
                cin >> datosNum;
                pymes[contadorPYME].setNumeroTrabajadores(datosNum);
                cout << "Cantidad de ingresos anuales (Pesos): ";
                cin >> datosNum;
                pymes[contadorPYME].setIngresosAnuales(datosNum);

                // Imprimir confirmacion de registro
                cout << "\nLa PYME se ha registrado." << endl;

                // Incrementar el contador de PYMEs
                contadorPYME = contadorPYME + 1;
                break;

            case 2: // Agregar un trabajador

                // Solicitar el nombre de la PYME para asignarlo a su empresa
                cout << "\nPor favor ingrese el nombre de la PYME del trabajador: ";
                cin >> datosStr;

                // Solicitud de los datos del trabajador
                cout << "\nPor favor ingrese los datos del trabajador" << endl;
                for(int i = 0; i < 10; i++) {
                    if (pymes[i].getNombrePYME() == datosStr){
                        cout << "\nNombre: ";
                        cin >> datosStr;
                        pymes[i].trabajadores[pymes->contadorTrabajadores].setNombreTrab(datosStr);
                        cout << "Puesto: ";
                        cin >> datosStr;
                        pymes[i].trabajadores[pymes->contadorTrabajadores].setPuesto(datosStr);
                        cout << "Edad: ";
                        cin >> datosNum;
                        pymes[i].trabajadores[pymes->contadorTrabajadores].setEdad(datosNum);
                        cout << "Sueldo: ";
                        cin >> datosNum;
                        pymes[i].trabajadores[pymes->contadorTrabajadores].setSueldo(datosNum);
                        pymes[i].trabajadores[pymes->contadorTrabajadores].setNombreEmp(pymes[i].getNombrePYME());
                        pymes[i].trabajadores[pymes->contadorTrabajadores].setRazonSocialocialEmp(pymes[i].getRazonSocial());
                        pymes[i].trabajadores[pymes->contadorTrabajadores].setDireccionEmp(pymes[i].getDireccion());

                        // Imprimir confirmacion de registro
                        cout << "\nEl trabajador se ha registrado." << endl;

                        // Incrementar el contador de Trabajadores
                        pymes[i].contadorTrabajadores = pymes[i].contadorTrabajadores + 1;

                        // Reiniciar el contador (Desde 1)
                        contador = 1;
                    } // Fin del if
                } // Fin del for

                // Caso de error si el contador es 0
                if(contador == 0) {
                    cout << "La PYME no fue encontrada en los registros. Por favor intente de nuevo." << endl;
                } // Fin del if

                // Reiniciar el contador
                contador = 0;
                break;

            case 3: // Consultar un PYME

                // Solicitar el nombre de la PYME
                cout << "\nPor favor ingrese el nombre de la PYME que desea consultar: ";
                cin >> datosStr;

                // Impresion de los datos de la PYME
                for(int i = 0; i < 10; i++) {
                    if (pymes[i].getNombrePYME() == datosStr) {
                        cout << "Nombre de la empresa: " << pymes[i].getNombrePYME() << endl;
                        cout << "Razon social: " << pymes[i].getRazonSocial() << endl;
                        cout << "Direccion: " << pymes[i].getDireccion() << endl;
                        cout << "Director: " << pymes[i].getNombreDirector() << endl;
                        cout << "Numero de trabajadores: " << pymes[i].getNumeroTrabajadores() << endl;
                        cout << "Ingresos anuales (Pesos): $" << pymes[i].getIngresosAnuales() << endl;
                        contador = 1;
                    } // Fin del if
                } // Fin del for

                // Caso de error si el contador es 0
                if(contador == 0) {
                    cout << "La PYME no fue encontrada en los registros. Por favor intente de nuevo." << endl;
                } // Fin del if
                
                // Reinicar el contador
                contador = 0;
                break;

            case 4: // Consultar un trabajador
                
                // Solicitar el nombre del trabajador
                cout << "Por favor ingrese el nombre del empleado a buscar: ";
                cin >> datosStr;

                // Impresion de los datos del trabajador
                for(int i = 0; i < 10; i++) {
                    for(int j = 0; j < 10; j++){
                        if(pymes[i].trabajadores[j].getNombreTrab() == datosStr) {
                            cout << "Nombre: " << pymes[i].trabajadores[j].getNombreTrab() << endl;
                            cout << "Edad: " << pymes[i].trabajadores[j].getEdad() << endl;
                            cout << "Nombre su empresa: " << pymes[i].trabajadores[j].getNombreEmp() << endl;
                            cout << "Puesto: " << pymes[i].trabajadores[j].getPuesto() << endl;
                            cout << "Sueldo: " << pymes[i].trabajadores[j].getSueldo() << endl;
                            cout << "Razon Social de su empresa: " << pymes[i].trabajadores[j].getRazonSocialocialEmp() << endl;
                            cout << "Direccion de su empresa: " << pymes[i].trabajadores[j].getDireccionEmp() << endl;
                            
                            // Reiniciar el contador (Desde 1)
                            contador = 1;
                        } // Fin del if
                    } // Fin del for
                } // Fin del for

                // Caso de error si el contador es 0
                if(contador == 0) {
                    cout << "El trabajador no fue encontrado en los registros. Por favor intente de nuevo." << endl;
                } // Fin del if

                // Reiniciar el contador
                contador = 0;
                break;

            case 5: // Terminar el programa
                cout << "\nFin del programa." << endl;
                return false;
                break;

            default: // Caso de error si la opcion ingresada no es valida
                cout << "La opcion que ingreso no es valida. Por favor intente de nuevo." << endl;
                break;

        } // Fin del switch
    } // Fin del while
} // Fin del main