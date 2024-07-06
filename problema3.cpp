#include<iostream>
using namespace std;
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
		
	return 0;
}

