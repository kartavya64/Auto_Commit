// Auto-generated: 2026-05-11 18:48:18
// Topic: Bubble Sort & Selection Sort
#include <iostream>
#include <vector>
#include <algorithm>

namespace sorting_498535xbjp {
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
    std::vector<int> data = { 39, 22, 46, 36, 83, 48, 19, 76 };
    std::cout << "Before: "; sorting_498535xbjp::print(data);
    sorting_498535xbjp::bubble_sort(data);
    std::cout << "After:  "; sorting_498535xbjp::print(data);
    return 0;
}
