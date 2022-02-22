# include <iostream>
# include <cmath>
# include <vector>

int main() {
int a = 0;
std::cin >> a;
int c = a % 4;
int d = a % 100;
if ((c==0) && (d!=0)) {
    std::cout<< "YES" << std::endl;
} else {
    std::cout<< "NO" << std::endl;
}
}
