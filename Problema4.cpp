#include<iostream>
#include<cstdlib>
using namespace std;
void rellena(int mul[], int a, int b);
int main(){
	int n;
	//Lectura del tamaño del arreglo
	cout<<"Ingrese el tamaño del arreglo: "; cin>>n;
	//Validacion del tamaño del arreglo
	while(n<=0){
		system("cls");
		cout<<"Dato invalido \nIngrese nuevamente: "; cin>>n;
	}
	int A[n], m;
	//Lectura del multiplo a rellenar 
	cout<<"Ingrese un numero: "; cin>>m;
	//Validacion del numero que se usa para calcular multiplos
	while(m<=0){
		system("cls");
		cout<<"Dato incorrecto \nIngrese nuevamente: "; cin>>m;
	}
	//Llamado a la funcion
	rellena(A, n, m);
	//Imprime el arreglo llenado de multiplos de m
	system("cls");
	cout<<"\tArreglo: "<<"\nTamaño: "<<n<<"\nMultiplos de: "<<m<<endl;
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
//Funcion rellena: Rellena un arreglo de multiplos de un numero
void rellena(int mul[],int a, int b){
	for(int i=0; i<a; i++){
		mul[i]=b*(i+1);
	}
}
