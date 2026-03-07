// Auto-generated: 2026-05-11 18:48:23
// Topic: Bubble Sort & Selection Sort
#include <iostream>
#include <vector>
#include <algorithm>

namespace sorting_503492lilx {
    void bubble_sort(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n-1; ++i)
            for (int j = 0; j < n-i-1; ++j)
                if (arr[j] > arr[j+1]) std::swap(arr[j], arr[j+1]);
    }
    void selection_sort(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n-1; ++i) {
            int m = i;
            for (int j = i+1; j < n; ++j) if (arr[j] < arr[m]) m = j;
            std::swap(arr[i], arr[m]);
        }
    }
    void print(const std::vector<int>& arr) {
        for (int x : arr) std::cout << x << " "; std::cout << "\n";
    }
}

int main() {
    std::vector<int> data = { 42, 45, 36, 51, 4, 82, 66, 11 };
    std::cout << "Before: "; sorting_503492lilx::print(data);
    sorting_503492lilx::bubble_sort(data);
    std::cout << "After:  "; sorting_503492lilx::print(data);
    return 0;
}
