//OPCION 1 - GARCIA WILA MELANIE
class Persona{	
 private:
	string nombres, apellidos, cedula;
	int aa, ma, da, an, mn, dn, a, m, d;
	float peso, estatura, IMC;				
 public:
     void ingresar()
     {
       cout<<"\nIngrese los siguentes datos"<<endl;
       cout<<"\nDigite su numero de cedula: ";getline(cin,cedula);
       cout<<"\nIngrese sus nombres: ";getline(cin,nombres);
       cout<<"\nIngrese sus apellidos: ";getline(cin,apellidos);
       cout<<"\nIngrese su fecha de nacimiento: ";getline,(cin,an,mn,dn);
       cout<<"\nIngese su peso: ";cin>>peso;
       cout<<"Ingrese su estatura: ";cin>>estatura;
     }	
     void mostrar()
     {
       cout<<"-----------------------------------------------------------------"<<endl;
       cout<<"CEDULA"<<"\t";
       cout<<"NOMBRES"<<"\t";
       cout<<"APELLIDOS"<<"\t";
       cout<<"FECHA_NACIMIENTO"<<"\t";
       cout<<"PESO"<<"\t";
       cout<<"ESTATURA"<<"\t";
			
       cout<<cedula<<"\t";
       cout<<nombres<<"\t";
       cout<<apellidos<<"\t";
       cout<<fecha_nacimiento<<"\t";
       cout<<peso<<"\t";
       cout<<estatura<<"\t";
     }	
//OPCION 2 - CONTRERAS MONTAÑO LUIS MIGUEL.
     void edad()
     {
       string nombres;
       int fecha_actual[3], fecha_nacimiento[3], edad[3];
       cout<<"Ingrese el nombre: "; getline(cin,nombres);
       cout<<"Ingrese la fecha actual formato(aa/mm/dd) : "; cin>>fecha_actual[0]>>fecha_actual[1]>>fecha_actual[2];
       cout<<"Ingrese la fecha nacimeinto formato(aa/mm/dd) : "; cin>>fecha_nacimiento[0]>>fecha_nacimiento[1]>>fecha_nacimiento[2];
       if(fecha_actual[2]>fecha_nacimiento[2])
       {
       edad[2]=fecha_actual[2]-fecha_nacimiento[2];
       }else{
       fecha_actual[1]=fecha_actual[1]-1;
       fecha_actual[2]=fecha_actual[2]+30;
       edad[2]=fecha_actual[2]-fecha_nacimiento[2];
       } 
       if(fecha_actual[1]>fecha_nacimiento[1])
       {
       edad[1]=fecha_actual[1]-fecha_nacimiento[1];
       }else{
       fecha_actual[0]=fecha_actual[0]-1;
       fecha_actual[1]=fecha_actual[1]+12;
       edad[1]=fecha_actual[1]-fecha_nacimiento[1];
       }
       edad[0]=fecha_actual[0]-fecha_nacimiento[0];
       cout<<" años "<<edad[0]<<" meses "<<edad[1]<<" dias "<<edad[2]<<endl;
       }	
//OPCION 3 - MANZABA ESCALANTE ALBERTO MOISÉS		
     void indicecorporal()
     {
       float peso, estatura, IMC;		
       cout<<"Introduzca su peso (kg): ";
       cin>>peso;
       cout<<"\nIntroduzca su estatura (m): ";
       cin>>estatura;		
       IMC = peso/(estatura*estatura);		
       cout<<"\nTu indice de masa corporal es: "<<IMC;	
       if(IMC<20)
       printf("\nPeligro, estas bajo de peso");
       else
       if(20<IMC&&IMC<=25)
       printf("\nFelicidades estas en un peso ideal");
       else
       if(25<IMC&&IMC<30)
       printf("\nTienes sobrepeso");
       else
       if(30<IMC&&IMC<35)
       printf("\nTienes obesidad");
       else
       if(35<=IMC)
       printf("\nTienes obesidad morbida");
       }	
//OPCION 4 - MUSO LLUMIQUINGA CESAR GEOVANNY
    void guardardatos()
    {
	    ofstream archivo;
	
	archivo.open("Secundario.txt",ios::out); 
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"DATOS PERSONALES"<<endl;
	archivo<<"CEDULA";
	archivo<<"NOMBRES";
	archivo<<"APELLIDOS";
	archivo<<"FECHA DE NACIMIENTO";
	archivo<<"PESO";
	archivo<<"ESTATURA";
	archivo<<"EDAD";
	archivo<<"INDICE DE MASA CORPORAL";
	
	archivo.close();
}
    }					
//OPCIO 5 - JONATHAN RAMIREZ PEREA 
    void recuperardatos()
    {
	    cout<<"\nEsta opcion permite mostrar los datos del archivo de texto\n\n";
		alber.lectura();
		break;
		
		}
		  if(op!=0){
			    cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);
	
	system("pause");

	return(0);

     }
    
};
