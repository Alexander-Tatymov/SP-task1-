#include <iostream>
#include <vector>
#include <algorithm>

double calculateMedian(std::vector<int>& responseTimes) {
    
    std::sort(responseTimes.begin(), responseTimes.end());

    size_t size = responseTimes.size();

    if (size == 0) {
        throw std::invalid_argument("Vector is empty");
    }

    
    if (size % 2 == 0) {
        return (responseTimes[size / 2 - 1] + responseTimes[size / 2]) / 2.0;
    }
    else {
    
        return responseTimes[size / 2];
    }
}

int main() {
    std::vector<int> responseTimes = { 34, 23, 45, 12, 67, 89, 10 };

    try {
        double median = calculateMedian(responseTimes);
        std::cout << "Median response time: " << median << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
