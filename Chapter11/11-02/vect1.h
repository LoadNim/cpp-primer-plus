// vect.h -- 모든 상태와 <<를 사용하는, Vector 클래스
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL};
    // 직사각형을 위해서는 RECT를, Polar modes를 위해서는 POL을 사용한다
    private:
        double x;          // 수평 성분
        double y;          // 수직 성분
        Mode mode;         // POL을 위해서 RECT를 (RECT 또는 POL)
    // 값들을 설정하는 private 메서드들
        double set_mag() const;
        double set_ang() const;
        void set_x(double, double);
        void set_y(double, double);
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}       // x값을 보고한다
        double yval() const {return y;}       // y값을 보고한다
        double magval() const;// 크기를 보고한다
        double angval() const;// 각도를 보고한다
        void polar_mode();                    // 모드를 'p'로 설정한다
        void rect_mode();                     // 모드를 'r'로 설정한다
    // 연산자 오버로딩
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
    // 프렌드 함수
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };

}   						// namespace VECTOR의 끝
#endif
