#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Ingrese un numero: ";
	cin >> x;
	
	if(x%2 == 0){
		cout << x << " es par"; 
	} else {
		cout << x << " Es impar";
	}
	
	
	return 0;
}
