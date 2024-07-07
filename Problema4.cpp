#include<iostream>
using namespace std;
void rellena(int mul[], int a, int b);
int main(){
	int n;
	//Lectura del tamaño del arreglo
	cout<<"Ingrese el tamaño del arreglo: "; cin>>n;
	//Validacion del tamaño del arreglo
	while(n<=0){
		cout<<"Dato invalido \nIngrese nuevamente: "; cin>>n;
	}
	int A[n], m;
	//Lectura del multiplo a rellenar 
	cout<<"Ingrese un numero: "; cin>>m;
	rellena(A, n, m);
	//Imprime el arreglo llenado de multiplos de m
	cout<<"\tArreglo llenado con multiplos de "<<m<<endl;
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
//Funcion rellena: Rellena un arreglo de multiplos de un numero
void rellena(int mul[],int a, int b){
	for(int i=0; i<a; i++){
		mul[i]=b*(i+1);
	}
}
