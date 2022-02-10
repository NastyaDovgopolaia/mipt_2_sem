# include <iostream>
# include <cmath>

int main ()
{
    int a = 0;
    int m = 1;
    std::cin >> a;
    for (int i = 1; i <= a; i++) {
        m = m*i;
    }
    std::cout << m << std::endl;
    return 0;
}
