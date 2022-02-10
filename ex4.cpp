# include <iostream>
# include <cmath>
# include <vector>

int main ()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    std::vector<int> A;
    if (a>b) {
        for (int i = 1; i <= b; i++) {
            int c = a % i;
            int d = b % i;
            if ((c==0) && (d==0)) {
                A.push_back(i);
            }
        }
    } else {
        for (int i = 1; i <= a; i++) {
            int c = a % i;
            int d = b % i;
            if ((c==0) && (d==0)) {
                A.push_back(i);
            }
        }
    }
    double maxi = A[0];
    int i_max = 0;
    for(int i = 1; i < A.size(); i++)
        if (A[i] > maxi) {
            maxi = A[i];
            i_max = i;
    }
    std::cout<< maxi<< std::endl;
    return 0;
}
