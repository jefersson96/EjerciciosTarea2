#include <iostream>
using namespace std;
class Factura {
private:
	string Piezas;
	string Descripcion_Pieza;
	int Cantidad_Articulo;
	int Presio_Articulo;
public:
	Factura(string,string,int,int);
	string getPiezas();
	string getDescripcion_Pieza();
	int getCantidad_Articulo();
	int getPresio_Articulo();

	void setPiezas(string);
	void setDescripcion_Pieza(string);
	void setCantidad_Articulo(int);
	void setPresio_Articulo(int);
	void Imprimir();
	void Obtener_Monto_Factura();

};

Factura::Factura(string piezas, string descripcion, int cantidad, int presio) {

	Piezas = piezas;
	Descripcion_Pieza = descripcion;
	Cantidad_Articulo = cantidad;
	Presio_Articulo = presio;


}

string Factura::getPiezas() {

	return Piezas;
}

string Factura::getDescripcion_Pieza() {

	return Descripcion_Pieza;
}

int Factura::getCantidad_Articulo() {

	return Cantidad_Articulo;

}
int Factura::getPresio_Articulo() {

	return Presio_Articulo;
}


void Factura::setPiezas(string p) {
	Piezas = p;

}

void Factura::setDescripcion_Pieza(string d) {

	Descripcion_Pieza = d;

}
void Factura::setCantidad_Articulo(int c) {
	Cantidad_Articulo = c;

}

void Factura::setPresio_Articulo(int pr) {

	Presio_Articulo = pr;
}


void Factura::Obtener_Monto_Factura() {

	int total;
	total = Cantidad_Articulo * Presio_Articulo;

	cout << "Total A Pagar es : lps. " << total << endl;
}



int main() {
	Factura f = Factura("Baño", "Articulos de aceo personal", 5, 30);
	//cout << "Descripcion :" << endl;
	//cout << "Piezas :"<< " Descripcion De Pieza: "f.getDescripcion_Pieza() << " Numero De Articulo : " << f.getCantidad_Articulo() << " Presio: " << f.getPresio_Articulo() << endl;
	f.Obtener_Monto_Factura();

	


	system("pause");
}