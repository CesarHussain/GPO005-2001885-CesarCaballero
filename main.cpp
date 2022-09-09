#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
  int numArticulo[15];
  int opcion;
  float precioUnitario[15];
  string articulos[15];
  string categorias[15];
  bool ciclo = true; //Variable para repetir menu
  int aux = 0;   //Variable para indeces de arreglo

  // Bucle de menu
  while(ciclo == true){
    cout << endl << "     ******Papeleria Smash******" << endl << endl;
    cout << "1. Agregar articulo" << endl << "2. Mostrar lista de articulos" << endl << "3. Limpiar pantalla" << endl << "4. Salir" << endl;
    cin >> opcion;
    cout << endl;

    // A

    switch(opcion){
      case 1: // Agregar articulo
        cout << "Ingrese el numero de articulo: ";
        cin >> numArticulo[aux];
        cout << "Ingrese el nombre del articulo (sin espacios): ";
        cin >> articulos[aux] ;
        cout << "Ingrese la categoria del articulo: ";
        cin >> categorias[aux];
        cout << "Ingrese el precio unitario del articulo: ";
        cin >> precioUnitario[aux];
        
        cout << endl << "¡Producto agregado correctamente!" << endl;
        aux++;

      break;

      case 2: // Mostrar articulos
        
        if(aux != 0){
          for(int j=0;j<aux;j++){
            cout << "Articulo num: " << numArticulo[j] << endl;
            cout << "Nombre: " << articulos[j] << endl;
            cout << "Categoria: " << categorias[j] << endl;
            cout << "Precio Unitario: " << precioUnitario[j] << endl << endl;
            
        }
        }
        else{
          cout << "No hay articulos" << endl;
        }
      
        break;
      
      case 3: // Limpiar pantalla
        for(int i=0;i<30;i++){
          cout << endl;
        }
        

      break;
      
      case 4: // Salir
        cout << endl << "¡Gracias por utilizar nuestro servicio" << endl;
        cout << "hasta la proxima!" << endl;
        ciclo = false;
      break;
      
      default: // Si pone algo diferente al menu
        cout << "Por favor ingresa una opcion valida" << endl;
    }
    
  }
  
 return 0; 
}