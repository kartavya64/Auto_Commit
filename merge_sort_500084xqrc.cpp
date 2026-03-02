// Auto-generated: 2026-05-11 18:48:20
// Topic: Merge Sort
#include <iostream>
#include <vector>

namespace merge_500084xqrc {
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
    std::vector<int> arr = { 67, 90, 92, 89, 47, 66, 15 };
    std::cout<<"Before: "; merge_500084xqrc::print(arr);
    merge_500084xqrc::sort(arr,0,arr.size()-1);
    std::cout<<"After:  "; merge_500084xqrc::print(arr);
    return 0;
}
