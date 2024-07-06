#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese a cantidad de elementos: "; cin>>n;
	int A[n], B[n], C[n];
	int ip=0, ii=0;
	for(int i=0; i<n; i++){
		cout<<"Ingrese un numero: "; cin>>A[i];
		if(A[i]%2==0){
			B[ip]=A[i];
			ip++;
		}
		else{
			C[ii]=A[i];
			ii++;
		}
	}
	cout<<"Arreglo par"<<endl;
	for(int j=0; j<ip; j++){
		cout<<B[j]<<" ";
	}
	cout<<"\nArreglo impar"<<endl;
	for(int iii=0; iii<ii; iii++){
		cout<<C[iii]<<" ";
	}
	return 0;
}
