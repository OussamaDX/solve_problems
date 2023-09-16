#include <vector>
#include <algorithm>

int sumOfDifferences(const std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return 0;
    }

    std::vector<int> arr2 = arr;
    std::sort(arr2.begin(), arr2.end(), std::greater<int>());
    int result = 0;

    for (size_t i = 1; i < arr2.size(); i++) {
        result += arr2[i - 1] - arr2[i];
    }

    return result;
}