#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<cmath>

using namespace std;

int Realizar, Regresar;
int i;
int cantidad;
int b = 1;

struct comprador
{
char clasif[20];
char caracte[20];
char descrip[20];
char Videojuego[20];
char gener[20];
int year;
int codigo;
comprador* sig;
}juego[3];
comprador* first = NULL;
comprador* last = NULL;



int main()
{
	system("color 04");
	while (true) {




		cout << " =========== BIENVENIDO AL PARAISO GEIMER ===========" << endl;
		cout << "1.-Agregar Artiuclo" << endl;
		cout << "2.-Modificar Articulo (No disponible)" << endl;
		cout << "3.-Eliminar Articulo (No disponible)" << endl;
		cout << "4.-Lista de Articulos Vigentes (Novedad)" << endl;
		cout << "5.-Limpiar pantalla" << endl;
		cout << "6.-Salir" << endl;
		cout << " ====================================================" << endl;
		cin >> Realizar;

		switch (Realizar) {


		case 1:


			system("color 03");
			cout << "\n--Cantidad de comprar que desea realizar:--" << endl;
			cin >> cantidad;
				for ( i = 0; i < cantidad; i++)
			{
			fflush(stdin);
			cout << "\n--Numero de articulo:-- " << endl;			
			cin >> juego[i].codigo;
			cout << "\n --Seleccione el Super Videojuego deseado:--" << endl;
			cin >> juego[i].Videojuego;
			cout << "\nEscriba año del juego" << endl;
			cin >> juego[i].year;
			cout << "\nEscriba la clasificacion del juego" << endl;
			cin >> juego[i].clasif;
			system("color 02");
			cout << "\nEscriba alguna caracteristica del juego" << endl;
			cin >> juego[i].caracte;
			cout << "\nEscriba alguna descripcion del juego" << endl;
			cin >> juego[i].descrip;
			cout << "\nEscriba algun genero del juego" << endl;
			cin >> juego[i].gener;

			system("color 09");
			cout << "Juego solicitado y confirmado el precio esta en 250$MXN Mas 25$ de impuestos, Muchas gracias por comprar en paraiso PARAISO GEIMER " << endl;

				}
			
			break;

		case 4: {
			system("cls");
			for (i = 0; i < cantidad; i++)
			{
				cout << "Codigo de compra:\n" << juego[i].codigo << endl;
				cout << "Juego seleccionado:\n" << juego[i].Videojuego << endl;
				cout << "año del juego:\n" << juego[i].year << endl;
				cout << "clasificacion del juego:\n" << juego[i].clasif << endl;
				cout << ":caracteristica del juego\n" << juego[i].caracte << endl;
				cout << "descripcion del juego:\n" << juego[i].descrip << endl;
				cout << "Genero del juego\n" << juego[i].gener << endl;


			}
			system("color 05");

			break;

		}


		case 5: {
			system("cls");
			system("color 05");

			break;

		}
		case 6: {
			cout << "Vas a salir." << endl;
			b = b + 1;
			system("pause>null");
			exit(-1);

			break;
		}

		default:
		{
			cout << "La opcion seleccionada esta equivocada o no esta implementada por favor espere a una nueva actualizacion..." << endl;
			system("color 01");
			break;
		}
		while (Regresar == 1) {
			return 0;
		}

		}
	}
}