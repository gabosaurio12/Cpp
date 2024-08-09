#include <iostream>
#include <string>

using namespace std;

class Cuenta {
	private:
		string titular;
		double cantidad;

	public:
		Cuenta(string titu, double cant) {
		this->titular = titu;
		if (cant < 0)
			this->cantidad = 0;
		else
			this->cantidad = cant;
		}

		string getTitular() {
			return titular;
		}
		void setTitular(string titu) {
			this->titular = titu;
		}

		double getCantidad() {
			return cantidad;
		}

		void setCantidad(double cant) {
			if (cant > 0)
				this->cantidad = cant;
		}

		void depositar(double cant) {
			if (cant > 0)
				this->cantidad += cant;
		}

		void retirar(double cant) {
			if (cant > 0)
				this->cantidad -= cant;
		}

		void imprimirDatos() {
			cout << "TITULAR \tCANTIDAD \n";
			cout <<	titular << " \t" << cantidad << "\n";
		}

};

int main() {
	Cuenta c1("Gabriel", 1000);
	c1.imprimirDatos();

	c1.depositar(100);
	c1.imprimirDatos();

	c1.retirar(500);
	c1.imprimirDatos();
	return 0;
}