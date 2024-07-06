#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese la cantidad de elementos del arreglo: "; cin>>n;
	int	A[n];
	int s=0;
	float c=0, p; 	

	for(int i=0; i<n; i++){
		cout<<"Elemento "<<i+1<<": "; cin>>A[i];
		s+=A[i];		
		if(A[i]==0){
			c++;
		}
	}
	p=  (c/n *100);
	cout<<"Suma de elemntos: "<<s<<endl;
	cout<<"Porcentaje de ceros: "<<p<<" % "<<endl;
	return 0;
}
