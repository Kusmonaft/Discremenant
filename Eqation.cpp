#include "Eqation.h"
#include "Source.cpp"

void Equation::result()
{
    if (Quatro::a == 0) {
        cout << "�������� ��������� ����������.\n";
    }
    else {
        double root = -Quatro::b / Quatro::a;
        cout << "������ ���������: " << root << "\n";
    }
}