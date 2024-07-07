#include<iostream>
#include<string.h>
using namespace std;
int com(string c1[], int a1, string c2[], int a2, string comu[]);
int main(){
	int t1;
	cout<<"Cantidad de estudiantes de Fundamentos de Programacion: "; cin>>t1;
	string fp[t1];
	int t2;
	cout<<"Cantidad de estudiantes de Programacion Grafica: "; cin>>t2;	
	string pg[t2];
	return 0;
}
int com(string c1[], int a1, string c2[], int a2, string comu[]){
	int k=0;
	for(int i=0; i<a1; i++){
		for(int j=0; j<a2; j++){
			if(c1[i]==c2[j]){
				comu[k]=c1[i];
				k++;
			}
		}
	}
	return k;
}

