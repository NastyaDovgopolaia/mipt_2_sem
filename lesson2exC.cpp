# include <iostream>
# include <cmath>
# include <vector>

int main() {
    int a = 0;
    std::cin >> a;
    while ((a % 2) == 0) {
        a = a / 2;
    }
    if (a==1) {
        std::cout<< "YES" << std::endl;
    } else {
        std::cout<< "NO" << std::endl;
    }
}
