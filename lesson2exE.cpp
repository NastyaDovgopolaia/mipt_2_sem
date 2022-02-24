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
    int maxi = A[0];
    for(int i = 0; i < A.size(); i++) {
        if (A[i] > maxi) {
            maxi = A[i];
        }
    }
    for(int i = 0; i < A.size(); i++)
        if (A[i] == maxi) {
            B.push_back(A[i]);
        }
    std::cout << B.size() << std::endl;
}
