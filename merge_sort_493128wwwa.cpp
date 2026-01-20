// Auto-generated: 2026-05-11 18:48:13
// Topic: Merge Sort
#include <iostream>
#include <vector>

namespace merge_493128wwwa {
    void merge(std::vector<int>& arr, int l, int m, int r) {
        std::vector<int> L(arr.begin()+l, arr.begin()+m+1);
        std::vector<int> R(arr.begin()+m+1, arr.begin()+r+1);
        int i=0,j=0,k=l;
        while(i<(int)L.size()&&j<(int)R.size()) arr[k++]=(L[i]<=R[j])?L[i++]:R[j++];
        while(i<(int)L.size()) arr[k++]=L[i++];
        while(j<(int)R.size()) arr[k++]=R[j++];
    }
    void sort(std::vector<int>& arr, int l, int r) {
        if(l<r) { int m=l+(r-l)/2; sort(arr,l,m); sort(arr,m+1,r); merge(arr,l,m,r); }
    }
    void print(const std::vector<int>& a) { for(int x:a) std::cout<<x<<" "; std::cout<<"\n"; }
}

int main() {
    std::vector<int> arr = { 95, 89, 39, 60, 19, 1, 3, 94, 42 };
    std::cout<<"Before: "; merge_493128wwwa::print(arr);
    merge_493128wwwa::sort(arr,0,arr.size()-1);
    std::cout<<"After:  "; merge_493128wwwa::print(arr);
    return 0;
}
