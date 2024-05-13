#include <iostream>

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    shellSort(arr, n);

    std::cout << "Отсортированный массив:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
