#include "Eqation.h"
#include "Source.cpp"

void Equation::result()
{
    if (Quatro::a == 0) {
        cout << "Линейное уравнение недоступно.\n";
    }
    else {
        double root = -Quatro::b / Quatro::a;
        cout << "Корень уравнения: " << root << "\n";
    }
}