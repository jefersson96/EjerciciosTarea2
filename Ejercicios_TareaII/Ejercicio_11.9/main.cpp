#include <iostream>
using namespace std;
class Paquete {
private:
	string Nombre;
	string Direccion;
	string Ciudad;
	bool Estado;
	int CodPostal;
	int Peso;
	int CostoPorKilogramo;

public:
	Paquete(string, string, string, bool, int, int, int);
double CalcularCosto(int,int);

};

Paquete::Paquete(string nombre, string direccion, string ciudad, bool estado, int codigo, int peso, int costoxk) {
	if (costoxk > 0 && codigo > 0) {
	
		CostoPorKilogramo = costoxk;
		Peso = peso;
	}
	else {

		cout << "Ingreso Numeros negativos..."<<endl;

	

	}

		Nombre = nombre;
		Direccion = direccion;
		Ciudad = ciudad;
		Estado = estado;
		CodPostal = codigo;


}


double Paquete::CalcularCosto(int peso,int pesok) {
	double costo;
	costo = peso * pesok;
	return costo;
}


class PaqueteDosDias :public Paquete{
private: 
	double Cuota_Fija;

public:
	PaqueteDosDias(double);

};

PaqueteDosDias::PaqueteDosDias(double cuota):Paquete(string nombre, string direccion, string ciudad, bool estado, int codigo, int peso, int costoxk) {
	Cuota_Fija = cuota;

}


int main() {



	system("pause");
} 