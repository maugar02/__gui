#include <iostream>

using namespace std;

int main() {

    bool reiniciar = false;
    do{
        int cantidad_de_productos = 0;
        string nombre_producto;
        int codigo_producto = 0;
        double precio_producto = 0;
        int n_productos = 0;

        int mayor_cantida_productos = 0;
        int menor_cantida_productos = 0;
        int mayor_precio_productos = 0;
        int menor_precio_productos = 0;

        cout << "Cuantos productos desea ingresar: ";
        cin >> n_productos;

        for(int i = 1; i <= n_productos; i++) {
            //system("cls");
            cout << "Ingrese el nombre del producto " << i << ": ";
            cin >> nombre_producto;
            cout << "Ingrese el codigo del producto " << i << ": ";
            cin >> codigo_producto;
            cout << "Ingrese el precio(Bs) del producto " << i << ": ";
            cin >> precio_producto;
            cout << "Ingrese la cantidad(Unidades) de productos " << i << ": ";
            cin >> cantidad_de_productos;

            if(menor_cantida_productos == 0) {
                menor_cantida_productos = cantidad_de_productos;
            }
            if(menor_precio_productos == 0) {
                menor_precio_productos = precio_producto;
            }

            if(precio_producto > mayor_precio_productos) {
                mayor_precio_productos = precio_producto;
            }
            if(cantidad_de_productos > mayor_cantida_productos) {
                mayor_cantida_productos = cantidad_de_productos;
            }

            if(cantidad_de_productos < menor_cantida_productos) {
                menor_cantida_productos = cantidad_de_productos;
            }
            if(precio_producto < menor_precio_productos) {
                menor_precio_productos = precio_producto;
            }

        }
        //system("cls");
        cout << "Resumen de inventario: " << endl;
        cout << "El total de productos ingresados es de: " << n_productos << " productos." << endl;
        cout << "El producto mas caro tiene un precio de :" << mayor_precio_productos << " Bs" << endl;
        cout << "El producto mas economico tiene un precio de :" << menor_precio_productos << " Bs" << endl;
        cout << "El producto con mas cantidad es de :" << mayor_cantida_productos << " Unidades" << endl;
        cout << "El producto con menos cantidad es de :" << menor_cantida_productos << " Unidades" << endl;

        cout << "Desea reiniciar el proceso? 1=si; 0=no";
        cin >> reiniciar;        
    }while(reiniciar);

    return 0;
}
