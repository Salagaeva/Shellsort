#include <iostream>
#include <algorithm>

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

bool hasDuplicates(int arr[], int n) {
    int* tempArr = new int[n];
    std::copy(arr, arr + n, tempArr);
    std::sort(tempArr, tempArr + n);
    
    for (int i = 1; i < n; i++) {
        if (tempArr[i] == tempArr[i - 1]) {
            std::cout << "Массив состоит из повторяющихся элементов.\n";
            std::cout << "Отсортированный массив:\n";
            shellSort(arr, n);
            for (int i = 0; i < n; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
            delete[] tempArr;
            return true;
        }
    }

    delete[] tempArr;
    return false;
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
        if (!(std::cin >> arr[i])) {
            std::cout << "Ошибка ввода. Введите целое число." << std::endl;
            delete[] arr;
            return 0;
        }
    }

    if (n == 1) {
        std::cout << "Массив состоит из одного элемента." << std::endl;
    } else if (hasDuplicates(arr, n)) {
        // Обработка повторяющихся элементов
    } else {
        std::cout << "Проверка на повторяющиеся элементы...\n";

        shellSort(arr, n);

        std::cout << "Отсортированный массив:\n";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    delete[] arr;

    return 0;
}

