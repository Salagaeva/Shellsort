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

    if (n <= 0) {
        std::cout << "Массив пуст." << std::endl;
        return 0;
    }

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

    bool hasRepetition = false;
    bool isSorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            hasRepetition = true;
        }
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
        }
    }

    if (n == 1) {
        std::cout << "Массив состоит из одного элемента." << std::endl;
    } else if (hasRepetition) {
        std::cout << "Массив состоит из повторяющихся элементов." << std::endl;
    } else if (isSorted) {
        std::cout << "Массив уже отсортирован." << std::endl;
    } else {
        std::cout << "Отсортированный массив без повторяющихся элементов:\n";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    delete[] arr;

    return 0;
}
