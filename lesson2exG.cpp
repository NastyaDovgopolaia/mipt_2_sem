# include <iostream>
# include <cmath>
# include <vector>

int main () {

    std::vector<int> A;
    int a = 0;
    std::cin >> a;
    for (int i = 1; i < a; i++) {
        int c = a % i;
        if ((c==0) && (i!=1)) {
            A.push_back(i);
        }
    }
    if (A.size() == 0) {
        std::cout<< "\n" << std::endl;
    } else {
        for (int i = (A.size() - 1); i < A.size(); i--) {
            std::cout << A[i] << " ";
        }
    }
}
