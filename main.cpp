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
	 
	if(k==n-1){
	return total;
	}else{
		aux= (2*n)-1;
		aux2 = (n*(n+1));
		aux3 = aux/aux2;
		total= total+aux3;
		return sumatoria(total,k,n+1);
		
		/*
		aux = (2*n)-1/(n*(n+1);
		total = total + aux;
		
		*/
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
			string cad1;
			cout << "Ingrese cadena: ";
            cin >> cad1;
            int answer = 0;

            for (int i = 0; i < cad1.length(); i++){

                if (cad1[i] == 'A' && i == 1){
                    if ((cad1[i - 1] == '1' && cad1[i + 3] == '0')||(cad1[i - 1] == '0' && cad1[i + 3] == '1')||(cad1[i - 1] == '0' && cad1[i + 3] == '0')){
                        answer = 0;
                    }else{
                        answer = 1;
                    }
                }
                   
       

			
				
			
			
				
		}// fin primer ejercicio;
            if (answer == 0){
                cout << "falso. " << endl;
            }else{
                cout << "Verdadero" << endl;
            }
	}
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


