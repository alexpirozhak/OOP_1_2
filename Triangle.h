//
// Created by Олександр Пірожак on 28.02.2024.
//

#pragma once
#include <string>

using namespace std;

class Triangle {
    double a, b, c, A, B, C;
public:

    double geta() const;
    void seta(double a);
    double getb() const;
    void setb(double b);
    double getc() const;
    void setc(double c);

    double getA() const;
    void setA(double A);
    double getB() const;
    void setB(double B);
    double getC() const;
    void setC(double C);

    bool Init(double a, double b, double c, double A, double B, double C);
    double Area() const;
    double Perimeter() const;
    double HeightA() const;
    double HeightB() const;
    double HeightC() const;
    string Type() const;
    void Read();
    void Display() const;

};

Triangle makeTriangle(double a, double b, double c, double A, double B, double C);
