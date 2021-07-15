class Persona{
	
	private:
		string nombres, apellidos, cedula;
		int aa, ma, da, an, mn, dn, a, m, d;
		float peso, estatura, IMC;
		
		
	public:
	
		void ingresar()
		{
			cout<<"Ingrese los datos"<<endl;
			cout<<"\nDigite su numero de cedula: ";getline(cin,cedula);
			cout<<"\nDigite sus nombres: ";getline(cin,nombres);
			cout<<"\nDigite sus apellidos: ";getline(cin,apellidos);
			cout<<"\nDigite su peso: ";cin>>peso;
			cout<<"Digite su estatura: ";cin>>estatura;
		}
		
		void mostrar()
		{
			cout<<"-----------------------------------------------------------------"<<endl;
			cout<<"CEDULA"<<"\t";
			cout<<"NOMBRES"<<"\t";
			cout<<"APELLIDOS"<<"\t";
			cout<<"PESO"<<"\t";
			cout<<"ESTATURA"<<"\t";
			
			cout<<cedula<<"\t";
			cout<<nombres<<"\t";
			cout<<apellidos<<"\t";
			cout<<peso<<"\t";
			cout<<estatura<<"\t";
		}
		
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
		
		void guardardatos()
		{
			
	    }				
			
		
		
		void recuperardatos()
		{
			
		}
};



