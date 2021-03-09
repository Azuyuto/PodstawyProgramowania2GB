#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14

class Kolo
{
public:
    Kolo()
    {
        cout<<"Tworze kolo o boku domyslnym: 3"<<'\n';
        this->setR(3);
    };
    Kolo(double R)
    {
        cout<<"Tworze kolo o boku R: "<<R<<'\n';
        this->setR(R);
    };
    double area()
    {
        return PI*pow(R,2);
    }
    double perimeter()
    {
        return PI*2*R;
    }
    void setR(double R)
    {
        this->R = R;
    }
    double getR()
    {
        return R;
    }
private:
    double R = 3;
};


class Prostokat
{
public:
    Prostokat(double A)
    {
        cout<<"Tworze kwadrat o boku A: "<<A<<'\n';
        this->setA(A);
        this->setB(A);
    };
    Prostokat(double A, double B)
    {
        cout<<"Tworze prostokat o bokach AxB: "<<A<<"x"<<B<<'\n';
        this->setA(A);
        this->setB(B);
    };
    double area()
    {
        return A*B;
    }
    double perimeter()
    {
        return A*2+B*2;
    }
    void setA(double A)
    {
        this->A = A;
    }
    double getA()
    {
        return A;
    }
    void setB(double B)
    {
        this->B = B;
    }
    double getB()
    {
        return B;
    }
private:
    double A = 3;
    double B = 4;
};

int main()
{
    Kolo k(3);
    cout<<"Pole: "<<k.area()<<'\n';
    cout<<"Obwod: "<<k.perimeter()<<'\n'<<'\n';

    Prostokat p(3,4);
    cout<<"Pole: "<<p.area()<<'\n';
    cout<<"Obwod: "<<p.perimeter()<<'\n'<<'\n';

    Prostokat kw(3);
    cout<<"Pole: "<<kw.area()<<'\n';
    cout<<"Obwod: "<<kw.perimeter()<<'\n'<<'\n';
    return 0;
}
