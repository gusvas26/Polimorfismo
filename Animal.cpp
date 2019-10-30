#include<iostream>
#include<stdlib.h>
using namespace std;

class Animal {
	private:
		string comida;
	
	public:
		Animal(string);
		virtual void comer();
};

class Humano : public Animal {
	private:
		string nombre;
		string vivienda;
	
	public:
		Humano(string, string, string);
		void comer();
};

class Mascota : public Animal {
	private:
		string tipo;
		string nombreM;
		string raza;
		
	public:
		Mascota(string, string, string, string);
		void comer();
};

Animal::Animal(string _comida) {
	comida = _comida;
}

Humano::Humano(string _comida, string _nombre, string _vivienda) : Animal(_comida) {
	nombre = _nombre;
	vivienda = _vivienda;
}

Mascota::Mascota(string _comida, string _tipo, string _nombreM, string _raza) : Animal(_comida){
	tipo = _tipo;
	nombreM = _nombreM;
	raza = _raza;
}

void Animal::comer() {
	cout << "Este animal come: " << comida << endl;
}

void Humano::comer() {
	Animal::comer();
	cout << "Ya que es humano, su nombre es: " << nombre << endl;
	cout << "Y su vivienda se ubica en: " << vivienda << endl;
}

void Mascota::comer() {
	Animal::comer();
	cout << "Ya que es mascota, que tipo de animal domestica: " << tipo << endl;
	cout << "Nombre sde su mascota: " << nombreM << endl;
	cout << "Su tipo de raza: " << raza << endl;
}

int main() {
	Animal *vector[2];
	
	vector[0] = new Humano("Comida vegetariana", "Pedro", "Londres");
	vector[0]->comer();
	
	cout << "\n" << endl;
	vector[1] = new Mascota("Carnivoro", "Gato", "Felina", "Fina");
	vector[1]->comer();
	
	
	system("pause");
	return 0;
}
