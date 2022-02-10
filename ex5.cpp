# include <iostream>
# include <cmath>
# include <vector>

int main ()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    std::vector<int> A;
    for (int i = 1; i <= a*b; i++) {
        int c = i % a;
        int d = i % b;
        if ((c==0) && (d==0)) {
            A.push_back(i);
        }
    }
    double mini = A[0];
    int i_mini = 0;
    for(int i = 1; i < A.size(); i++) {
        if (A[i] < mini) {
            mini = A[i];
            i_mini = i;
        }
    }
    std::cout<< mini<< std::endl;
    return 0;
}
