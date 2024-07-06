#include<iostream>
#include<cstdlib>
using namespace std;
int men_tem(float a[], int d);
int main(){
	float min[7], max[7], med[7]; 
	//min: temperatura minima del dia
	//max: temperatura maxima del dia
	//med: temperatura media del dia
	for(int i=0; i<7; i++){
		cout<<"Dia "<<i+1<<"\nTemperatura minima: "; cin>>min[i];
		cout<<"Temperatura maxima: "; cin>>max[i];
		med[i]= (max[i]+min[i]) / 2;
	}
	system("cls");
	cout<<"\tTemperatura media de cada dia"<<endl;
	for(int i=1; i<7; i++){
		cout<<"Dia "<<i+1<<": "<<med[i]<<" grados"<<endl;
	}
	int dia= men_tem(min, 7);
	cout<<"\tEl dia "<<dia+1<<" es la menor temperatura de toda la semana con "<<min[dia]<<" grados"<<endl;
	system("cls");
	float t; //t: Temperatura al azar ingresada por el usuario
	cout<<"Ingrese una temperatura: "; cin>>t;
	cout<<"\tTemperaturas maximas igual a "<<t<<" grados"<<endl;
	int cc=0;
	for(int i=0; i<7; i++){
		if(t==max[i]){
			cout<<"Dia: "<<i+1<<endl;
			cc=1;
		}
	}
	if(cc==0){
		cout<<"No existe"<<endl;
	}
	return 0;
}
int men_tem(float a[], int d){
	int min_dia=0;
	for(int i=0; i<d; i++){
		if( a[i] < a[min_dia]){
			min_dia=i;
		}
	}
	return min_dia;	
}

