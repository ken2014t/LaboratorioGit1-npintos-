#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
ifstream entrada("input/entrada.txt");
	cout<<"Abriendo archivo"<<endl;
	if (entrada.is_open()) {
	  cout<<"Archivo abierto"<<endl;
	
	  char c;
	
	  while (entrada.get(c)) {
	    cout << c;
	  }
	}
}
