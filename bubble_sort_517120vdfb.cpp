// Auto-generated: 2026-05-11 18:48:37
// Topic: Bubble Sort & Selection Sort
#include <iostream>
#include <vector>
#include <algorithm>

namespace sorting_517120vdfb {
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
    std::vector<int> data = { 27, 55, 31, 25, 73, 68, 29 };
    std::cout << "Before: "; sorting_517120vdfb::print(data);
    sorting_517120vdfb::bubble_sort(data);
    std::cout << "After:  "; sorting_517120vdfb::print(data);
    return 0;
}
