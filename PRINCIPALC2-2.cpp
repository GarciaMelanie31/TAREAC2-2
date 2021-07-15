#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
using namespace std;
#include "prueba1.h"

int main() {
	int da, ma, aa, dn, mn, an, d, m, a;
	float peso, estatura, i;
	Persona mela;
	int op,flag;
	
    system("cls");
    cout<<"DATOS PEROSNALES"<<endl<<endl;
	cout<<"1 .- Ingresar y mostrar los datos personales \n";
	cout<<"2 .- Mostrar la edad de la persona \n";
	cout<<"3 .- Mostrar el indice corporal \n";
	cout<<"4 .- Guardar los datos en un archivo.txt \n";
	cout<<"5 .- Recuperar los datos desde el archivo.txt y mostrarlos por pantalla \n";
	cout<<"0 .- Salir del menu \n";
	cout<<" Ingrese una opcion : ";
	cin>>op;
	switch(op){
		case 1:
		    mela.ingresar();
	        mela.mostrar();
		 break;
		case 2:
			mela.edad();
            break;
		case 3:
		    mela.indicecorporal();
		    break;
	    case 4:
			guardardatos();
		    break;
	    case 5:
			recuperardatos();
			break;
		}
		if(op!=0){
			cout<<"\nOpcion no permitida !\n" << "Press Enter to continue\n";
			flag=cin.ignore().get();
		}
		if(op==0){
			cout<<"Salimos del Sistema: "<<endl;
		}

	return (0);
}
