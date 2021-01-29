#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <iterator>
#include <ctime>
#include <cstdlib>
using namespace std;

	float aux;
	float aux2;
	float aux3;
 float sumatoria(float total,float k,int n){
	 
	
	
	
	if(k==n){
	return sumatoria(total,k, n+1) ;
	}else{
		aux= (2*n)-1;
		aux2 = (n*(n+1));
		aux3 = aux/aux2;
		total= total+aux3;
		return sumatoria(total,k,n+1);
		
	}
	
}
void ver (int a[],int tamano){
	for(int i = 0; i<tamano;i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl;
}
// 3 1 5 2 7 9 
// 1 3, 2 ,7,9 
// 1,3,2,5,7,9
//
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
					cout<<"Encontré un incio";
					for(int j = i; j < cadena.size()-1;j++){
						if(cadena[j]==1 || cadena[j]==0){
							cout<<"Encontré un final";
						}
					
					}	
				
				}
				//cout<<c1<<end1;
			}
			
				
			
			
				
		}// fin primer ejercicio;
		
		if(menu == 2 ){
			
			int arreglo[20];
			for(int i = 0; i < 20;i++){
				arreglo[i]= 1 + rand() % 99;
			}
		ver(arreglo, 20);
			
		}
		
		if(menu == 3){
			float k = 0;
		/*	float aux= 0 ;
			float aux2= 0;
			float aux3 = 0;
			float total = 0 ;*/
			cout<<"Ingrese un valor para k: ";
			cin>>k;
			while(k<0){
				cout<<"Ingrese un valor para k que sea positivo: ";
				cin>>k;	
			}
			cout<<sumatoria(0,k,1)<<endl;
			
		/*	for(int i = 1; i<=k; i++){
				aux= (2*i)-1;
				aux2 = (i*(i+1));
				aux3 = aux/aux2;
				total= total+aux3;
			}
			
			cout<< "El total es: ";
			cout<<total;
			cout<<endl;
		}*/
		
		
	
	}	
	
	
	
}
	
	return 0;
}


