# include <iostream>
# include <cmath>

int main() {
    int arr[5];
    int x = 0;
    for (int i = 0; i < 5; i++) {
            std::cout << "[" << i + 1 << "]" << ": ";
            std::cin >> arr[i];
        }
    int k = 1;
    int j = 2;
    while (k < 5) {
        if (arr[k - 1] > arr[k]) {
            k = j;
            j++;
        } else {
            int d = 0;
            d = arr[k-1];
            arr[k-1]= arr[k];
            arr[k] = d;
            k--;
            if (k == 0) {
                k = j;
                j++;
            }
        }
    }
    std::cout << "\nВаш массив: ";

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
