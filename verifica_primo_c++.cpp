#include <iostream>
using namespace std;
int verificaPrimo(int numero);

int main(int argc, char** argv) {
	int num;
	
	cout<< "digite um numero inteiro: ";
	cin>> num;
	
	while(num<=0){
		cout<< "\nNumero invalido, digite novamente: ";
		cin>> num;
	}
	int resp;
	resp = verificaPrimo(num);
	
	if(resp == 0){
		cout<<"\nNumero nao eh primo!";
	}else if (resp == 1){
		cout<<"\nNumero eh primo!";
	}
	
	return 0;
}
int verificaPrimo(int numero){
	int i, divisores = 0;
	
	for(i=1;i<=numero;i++)
	{
		if (numero % i == 0)
		divisores++;
	}
	if (divisores == 2)
	return 1;
	else 
	return 0;
}

