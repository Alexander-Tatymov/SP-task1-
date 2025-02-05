#include <iostream>
#include <vector>


void bubbleSort(std::vector<int>& array) {
    int n = array.size();
    bool swapped;

    do {
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            if (array[i] > array[i + 1]) {
                std::swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
        --n;
    } while (swapped);
}

int main() {
    std::vector<int> array = { 12, 2145, 8, 4016, 4, 2, 1, 1000, 3, 10004, 10, 15, 235, 6 };

    
    std::cout << "Original array: ";
    for (const auto& num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    
    bubbleSort(array);

    
    std::cout << "Sorted array: ";
    for (const auto& num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
