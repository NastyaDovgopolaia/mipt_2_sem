#include <iostream>
#include <cmath>
int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    double c = std::sqrt(a*a + b*b);
    std::cout << c << std::endl;
    return 0;
}
