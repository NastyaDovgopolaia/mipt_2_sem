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
    for (int i = 0; i < A.size(); i++) {
        if (((A[i])%2)==0) {
            B.push_back(A[i]);
        }
    }
    if (B.size() == 0) {
       std::cout<< "/n" << std::endl;
    } else {
        int n = B.size();
        int k = 0;
        int j = 0;
        while (k < B.size()) {
            if (B[k - 1] > B[k]) {
                k = j;
                j++;
            } else {
                int d = 0;
                d = B[k-1];
                B[k-1]= B[k];
                B[k] = d;
                k--;
                if (k == 0) {
                    k = j;
                    j++;
                }
            }
        }
        std::cout << B[B.size() - 1] << std::endl;
    }

}
