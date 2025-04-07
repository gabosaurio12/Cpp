#include <iostream>

using namespace std;

class Figura {
    private:
        int altura;
        int base;

    public:
        Figura(int, int);
        Figura();
        int calcularArea(int, int);
        void setAltura(int);
        int getAltura();
        void setBase(int);
        int getBase();

        Figura::Figura() {
            altura = 0;
            base = 0;
        }

        Figura::Figura(int a, int b) {
            altura = a;
            base = b;
        }

        void Figura::setAltura(int a) {
            altura = a;
        }

        void Figura::getAltura() {
            return altura;
        }

        void Figura::setBase(int b) {
            base = b;
        }

        int Figura::geBase() {
            return base;
        }
};

int main() {
    int a, b, r;
    Figura f;
    cout << "Ingrese la base: ";
    cin >> b; f.setBase(b);
    cout << "Ingrese la altura: ";
    cin >> a; f.setAltura(a);
    cout << "El area de la figura es: " << f.getAltura() * f.getBase() << endl;
    cout << "Calcula area usando un meotodo " << r;
    return 0;
}
