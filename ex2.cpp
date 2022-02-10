#include <iostream>
#include <cmath>
int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    std::cin >> a >> b >> c;
    double D = (b*b - 4*a*c);
    if (D<0) {
        std::cout << "\n" << std::endl;
    } else if (D>0) {
        double d = std::sqrt(D);
        double x1 = (-b+d)/(2*a);
        double x2 = (-b-d)/(2*a);
        std::cout << x1 << x2 << std::endl;
    } else {
        double d = std::sqrt(D);
        double x1 = (-b)/(2*a);
        std::cout << x1 << std::endl;
    }
    return 0;
}
