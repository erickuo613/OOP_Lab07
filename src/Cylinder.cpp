# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool cooked = true;

double pi = M_PI;

double Cylinder :: SurfaceArea(){
    double ans = 2 * (pi*radius*radius) + (pi*2*radius*height);
    return ans;
}

double Cylinder :: Volume(){
    double ans = (pi*radius*radius) * height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans = 2 * pi * radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << setprecision(3) << cldr.Circumference() << endl
        << "SurfaceArea: " << fixed << setprecision(3) << cldr.SurfaceArea() << endl
        << "Volume: " << fixed << setprecision(3) << cldr.Volume() << endl;
    return out;
}

# endif