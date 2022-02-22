# include <iostream>
# include <cmath>
# include <vector>

int main() {
    std::vector<int> A;
    std::vector<int> B;
    int x = 0;
    while (std::cin >> x) {
        if (x==0) {
            break;
        }
        A.push_back(x);
    }
    for(int i = 0; i < A.size(); i++) {
        if (((A[i])%2)==0) {
            B.push_back(A[i]);
        }
    }
    std::cout<< B.size() << std::endl;
    return 0;
}
