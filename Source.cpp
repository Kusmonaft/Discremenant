#include"Eqation.h"

class Discremenant : public Equation 
{
public:
    double a, b;

public:
    Discremenant(double a_P, double b_P) : a(a_P), b(b_P) {}

    void result() override {}
};

class Quatro : public Equation {
public:
    double a, b, c;

    Quatro(double a_val, double b_val, double c_val) : a(a_val), b(b_val), c(c_val) {}

    void result() override {
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Корни  уравнения: " << root1 << "  и" << root2 << '\n';
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            std::cout << "Repeated root of quadratic equation: " << root << std::endl;
        }
        else {
            std::cout << "Quadratic equation has complex roots." << std::endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "Rus");

    Discremenant linear(7, 3);
    Quatro quadratic(1, -2, 6);

    linear.result();
    quadratic.result();

    return 0;
}
