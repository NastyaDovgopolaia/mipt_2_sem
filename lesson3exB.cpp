# include <iostream>
# include <cmath>

int main() {
    int K = 0;
    std::cin >> K;
    const int n = 8;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "[" << i + 1 << "]" << ": ";
        std::cin >> arr[i];
    }
    for (int h = 0; h < n; h++) {
        if (arr[h] == K) {
            int our_number =0;
            our_number = arr[h];
            std::cout << our_number << "=" << K << std::endl;
            }
        else {
            std::cout << std::endl;
        }
    }
    return 0;
}
