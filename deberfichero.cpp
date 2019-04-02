#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

void escribir();
void lectura ();

int main ()
{
	
	cout<<"---PASO DE PALABRAS MINISCULAS A MAYUSCULAS---"<<endl;
	
	ofstream escritura;
	string texto;
	
	escritura.open("fichero.txt",ios::out); 
	
	if (escritura.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Dijite el texto:\n";
	getline(cin, texto),
	
	escritura<<texto;
	
	escritura.close();
	
	
	lectura ();
	
	system ("pause");
	
	return 0;
}



void lectura (){
	char c[110];
	ifstream lectura;
	ofstream escritura;
	string texto,texto2;
	lectura.open("fichero.txt",ios::in);
	escritura.open("FICHERO2.txt",ios::out);
	
	if (lectura.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	if (escritura.fail()){
		cout<<"No se pudo crear archivo";
		exit(1);
	}
	
	
	while (!lectura.eof()){
		getline(lectura,texto);
		texto2 += texto+"\n";
		
	}
	
	strcpy(c,texto2.c_str());
	strupr(c);
	cout <<"Texto en mayusculas: \n"<<c;
	escritura <<c;
	
	lectura.close();
	escritura.close();
	
	
}
