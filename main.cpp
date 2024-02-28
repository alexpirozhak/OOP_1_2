#include <iostream>
#include "Triangle.h"

int main()
{
    Triangle triangle = makeTriangle(7, 7, 7, 60, 60, 60);
    cout << "a = " << triangle.geta() << "; b = " << triangle.getb() << "; c = " << triangle.getc() << "; A = " << triangle.getA() << "; B = " << triangle.getB() << "; C = " << triangle.getC() << endl;
    cout << "If a = " << triangle.geta() << "; b = " << triangle.getb() << "; c = " << triangle.getc() << ", area = " << triangle.Area() << endl;
    cout << "If a = " << triangle.geta() << "; b = " << triangle.getb() << "; c = " << triangle.getc() << ", perimeter = " << triangle.Perimeter() << endl;
    cout << "If a = " << triangle.geta() << ", height = " << triangle.HeightA() << endl;
    cout << "If b = " << triangle.geta() << ", height = " << triangle.HeightB() << endl;
    cout << "If c = " << triangle.geta() << ", height = " << triangle.HeightC() << endl;
    cout << triangle.Type() << endl << endl;

    triangle.seta(5);
    triangle.Display();

    triangle.Read();
    triangle.Display();

    return 0;
}
