#include <iostream>
using namespace std;

int main () {
	//se declara un arreglo de enteros
	int edades[] ={18, 20, 24, 28, 30, 32};
	int *ptr;
	// se obtiene la direccion del primer elemento
	ptr = edades;
	
	//se imprimen la direccion y el valor de esa direccion
	cout <<"Trabajo con enteros: " <<endl <<endl;
	cout <<"La direccion del primer elemento es: " <<edades <<endl;
	cout <<"El valor del primer elemento es: " <<*edades <<endl <<endl;
	
	cout <<"La direccion del segundo elemento es: " <<edades+1 <<endl;
	cout <<"El valor del segundo elemento es: " << *(edades+1) <<endl <<endl;
	
	cout <<"La direccion del tercer elemento es: " <<edades+2 <<endl;
	cout <<"El valor del tercer elemento es: " << *(edades+2) <<endl <<endl;
	
	cout <<"La direccion del cuarto elemento es: " <<edades+3 <<endl;
	cout <<"El valor del cuarto elemento es: " << *(edades+3) <<endl <<endl;
	
	cout <<"La direccion del quinto elemento es: " <<edades+4 <<endl;
	cout <<"El valor del quinto elemento es: " << *(edades+4) <<endl <<endl;
	
	cout <<"La direccion del sexto elemento es: " <<edades+5 <<endl;
	cout <<"El valor del sexto elemento es: " << *(edades+5) <<endl <<endl;
	
	//se declara un arreglo con caracteres
	cout <<"Trabajo con cadenas: " <<endl <<endl;
	char cadena [] = "Ciberseguridad";
	//se obtiene la direccion del primer elemento
	char* ptrc = cadena;
	
	//se imprime la direccion y el valor de esa direccion
	cout <<"La direccion del primer elemento es: " << &ptrc <<endl;
	cout <<"El valor del primer elemento es: " << *(ptrc) <<endl <<endl;
	
	cout <<"La direccion del segundo elemento es: " << &ptrc+1 <<endl;
	cout <<"El valor del segundo elemento es: " << *(ptrc+1) <<endl <<endl;
	
	cout <<"La direccion del tercer elemento es: " << &ptrc+2 <<endl;
	cout <<"El valor del tercer elemento es: " << *(ptrc+2) <<endl <<endl;
	
	cout <<"La direccion del cuarto elemento es: " << &ptrc+3 <<endl;
	cout <<"El valor del cuarto elemento es: " << *(ptrc+3) <<endl <<endl;
	
	cout <<"La direccion del quinto elemento es: " << &ptrc+4 <<endl;
	cout <<"El valor del quinto elemento es: " << *(ptrc+4) <<endl <<endl;
	
	cout <<"La direccion del sexto elemento es: " << &ptrc+5 <<endl;
	cout <<"El valor del sexto elemento es: " << *(ptrc+5) <<endl <<endl;
	
	cout <<"La direccion del septimo elemento es: " << &ptrc+6 <<endl;
	cout <<"El valor del septimo elemento es: " << *(ptrc+6) <<endl <<endl;
	
	cout <<"La direccion del octavo elemento es: " << &ptrc+7 <<endl;
	cout <<"El valor del octavo elemento es: " << *(ptrc+7) <<endl <<endl;
	
	cout <<"La direccion del noveno elemento es: " << &ptrc+8 <<endl;
	cout <<"El valor del noveno elemento es: " << *(ptrc+8) <<endl <<endl;
	
	cout <<"La direccion del decimo elemento es: " << &ptrc+9 <<endl;
	cout <<"El valor del decimo elemento es: " << *(ptrc+9) <<endl <<endl;
	
	cout <<"La direccion del undecimo elemento es: " << &ptrc+10 <<endl;
	cout <<"El valor del undecimo elemento es: " << *(ptrc+10) <<endl <<endl;
	
	cout <<"La direccion del duodecimo elemento es: " << &ptrc+11 <<endl;
	cout <<"El valor del duodecimo elemento es: " << *(ptrc+11) <<endl <<endl;
	
	cout <<"La direccion del decimotercero elemento es: " << &ptrc+12 <<endl;
	cout <<"El valor del decimotercero elemento es: " << *(ptrc+12) <<endl <<endl;
	
	cout <<"La direccion del decimocuarto elemento es: " << &ptrc+13 <<endl;
	cout <<"El valor del decimocuarto elemento es: " << *(ptrc+13) <<endl <<endl;
	//ja! si fueron muchos numeros  xD
		
	return 0;	
}
