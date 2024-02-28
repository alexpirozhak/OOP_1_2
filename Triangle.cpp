//
// Created by Олександр Пірожак on 28.02.2024.
//

#include "Triangle.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double Triangle::geta() const
{
    return a;
}

void Triangle::seta(double a)
{
    if (a <= 0 || a >= b+c)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->a = a;
}

double Triangle::getb() const
{
    return b;
}

void Triangle::setb(double b) {
    if (b <= 0 || b >= a+c)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->b = b;
}

double Triangle::getc() const
{
    return c;
}

void Triangle::setc(double c)
{
    if (c <= 0 || c >= b+a)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->c = c;
}

double Triangle::getA() const
{
    return A;
}

void Triangle::setA(double A)
{
    if (A <= 0 || A+B+C == 180)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->A = A;
}

double Triangle::getB() const
{
    return B;
}

void Triangle::setB(double B) {
    if (B <= 0 || A+B+C == 180)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->B = B;
}

double Triangle::getC() const
{
    return C;
}

void Triangle::setC(double C)
{
    if (C <= 0 || A+B+C == 180)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->C = C;
}

bool Triangle::Init(double a, double b, double c, double A, double B, double C)
{
    if(a >= b+c || b >= a+c || c >= a+b || A+B+C != 180
        || a <=0 || b<=0 || c<=0 || A<=0 || B<=0 || C<=0)
    {
        cout << "Invalid value" << endl;
        return false;
    }
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;

    return true;
}

double Triangle::Area() const
{
    double p = Perimeter()/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Triangle::Perimeter() const
{
    return a+b+c;
}

double Triangle::HeightA() const
{
    return 2*Area()/a;
}

double Triangle::HeightB() const
{
    return 2*Area()/b;
}

double Triangle::HeightC() const
{
    return 2*Area()/c;
}

string Triangle::Type() const
{
    if(a == b && b == c)
        return "Трикутник - рівносторонній";
    if(a == b || b == c || a == c)
        return "Трикутник - рівнобедрений";

    return "Трикутник - різносторонній";
}

void Triangle::Read()
{
    double  a, b, c, A, B, C;
    cout << "Enter a: ";
    cin >> a;
    if (a <= 0)
    {
        cout << "Invalid value" << endl;
        return;
    }

    cout << "Enter b: ";
    cin >> b;
    if (b <= 0)
    {
        cout << "Invalid value" << endl;
        return;
    }

    cout << "Enter c: ";
    cin >> c;
    if (c <= 0)
    {
        cout << "Invalid value" << endl;
        return;
    }

    if(a >= b+c || b >= a+c || c >= a+b)
    {
        cout << "Invalid value" << endl;
        return;
    }


    cout << "Enter A: ";
    cin >> A;
    if (A <= 0)
    {
        cout << "Invalid value" << endl;
        return;
    }

    cout << "Enter B: ";
    cin >> B;
    if (B <= 0)
    {
        cout << "Invalid value" << endl;
        return;
    }

    cout << "Enter C: ";
    cin >> C;
    if (C <= 0)
    {
        cout << "Invalid value" << endl;
        return;
    }

    if(A+B+C != 180)
    {
        cout << "Invalid value" << endl;
        return;
    }
    this->A = A;
    this->B = B;
    this->C = C;
    this->a = a;
    this->b = b;
    this->c = c;
}

void Triangle:: Display() const
{
    cout << "a = " << a << "; b = " << b << "; c = " << c << "; A = " << A << "; B = " << B << "; C = " << C << endl;
    cout << "If a = " << geta() << "; b = " << getb() << "; c = " << getc() << ", area = " << Area() << endl;
    cout << "If a = " << geta() << "; b = " << getb() << "; c = " << getc() << ", perimeter = " << Perimeter() << endl;
    cout << "If a = " << geta() << ", height = " << HeightA() << endl;
    cout << "If b = " << geta() << ", height = " << HeightB() << endl;
    cout << "If c = " << geta() << ", height = " << HeightC() << endl;
    cout << Type() << endl << endl;
}

Triangle makeTriangle(double a, double b, double c, double A, double B, double C)
{
    Triangle triangle;
    if(!triangle.Init(a, b, c, A, B, C))
        cout << "Invalid value" << endl;

    return triangle;
}
