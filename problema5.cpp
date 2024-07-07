#include<iostream>
#include<string.h>
using namespace std;
int com(string c1[], int a1, string c2[], int a2, string comu[]);
void name(string c[], int b);
void im_com(int n, string comun[]);
int main(){
	int t1;
	cout<<"Cantidad de estudiantes de Fundamentos de Programacion: "; cin>>t1;
	while(t1<=0){
		cout<<"Numero de estudiantes incorrecto. \nIngrese nuevamente: "; cin>>t1;
	}
	string fp[t1];
	cout<<"\tEstudiantes de Fundamentos de Programacion"<<endl;
	name(fp,t1);
	int t2;
	cout<<"Cantidad de estudiantes de Programacion Grafica: "; cin>>t2;
	while(t2<=0){
		cout<<"Numero de estudiantes incorrecto. \nIngrese nuevamente: "; cin>>t2;
	}
	string pg[t2];
	cout<<"\tEstudiantes de Programacion Grafica"<<endl;
	name(pg,t2);
	string cm[t1+t2];
	int cc=com(fp, t1, pg, t2, cm);
	im_com(cc, cm);
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
void im_com(int n, string comun[]){
	if(n<=0){
		cout<<"\nNo hay estudiantes comunes en ambos cursos"<<endl;
	}
	else{
		cout<<"\tEstudiantes comunes"<<endl;
		for(int i=0; i<n; i++){
			cout<<comun[i]<<endl;
		}
		cout<<"Numero de estudiantes comunes en las asignaturas: "<<n<<endl;
	}
}
void name(string c[], int b){
	for(int i=0; i<b; i++){
		cout<<"Nombre del estudiante "<<i+1<<": "; cin>>c[i];
	}
}
