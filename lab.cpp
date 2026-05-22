#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	ifstream entrada("input/entrada.txt");

	
	if(entrada.is_open()){
		cout << "archivo abierto" << endl;
		string linea;
		
		while(getline(entrada, linea)){
			
		} 
	}
}
