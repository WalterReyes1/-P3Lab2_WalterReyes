#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;


int main(int argc, char** argv) {
	int menu = 0;
	
	while(menu != 4){
		cout<<"1.Ejercicio 1 "<<endl;
		cout<<"2.Ejercicio 2 "<<endl;
		cout<<"3.Ejercicio 3"<<endl;
		cout<<"4. Salir "<<endl;
		cout<<"Ingrese opcion: "; 
		cin>>menu;
	
		if(menu == 1){
			string cadena;
			cout<<"Ingrese cadena: ";
			cin>>cadena;
			for(int i = 0; i <= cadena.size()-1;i++){
				char c1;
				c1 = cadena[i];
				if(c1==1 || c1== 0){
					for(int j = i; j < cadena.size()-1;j++){
					
					}	
				
				}
				//cout<<c1<<end1;
			}
			
				
			
			
				
		}
	
	}	
	
	
	
	
	
	return 0;
}
