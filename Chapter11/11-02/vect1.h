// vect.h -- ��� ���¿� <<�� ����ϴ�, Vector Ŭ����
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL};
    // ���簢���� ���ؼ��� RECT��, Polar modes�� ���ؼ��� POL�� ����Ѵ�
    private:
        double x;          // ���� ����
        double y;          // ���� ����
        Mode mode;         // POL�� ���ؼ� RECT�� (RECT �Ǵ� POL)
    // ������ �����ϴ� private �޼����
        double set_mag() const;
        double set_ang() const;
        void set_x(double, double);
        void set_y(double, double);
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}       // x���� �����Ѵ�
        double yval() const {return y;}       // y���� �����Ѵ�
        double magval() const;// ũ�⸦ �����Ѵ�
        double angval() const;// ������ �����Ѵ�
        void polar_mode();                    // ��带 'p'�� �����Ѵ�
        void rect_mode();                     // ��带 'r'�� �����Ѵ�
    // ������ �����ε�
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
    // ������ �Լ�
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };

}   						// namespace VECTOR�� ��
#endif
