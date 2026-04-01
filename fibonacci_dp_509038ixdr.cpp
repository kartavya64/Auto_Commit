// Auto-generated: 2026-05-11 18:48:29
// Topic: Fibonacci — Memoization vs DP vs Iterative
#include <iostream>
#include <vector>
#include <unordered_map>

namespace fib_509038ixdr {
    std::unordered_map<int,long long> memo;
    long long memoized(int n) { if(n<=1) return n; if(memo.count(n)) return memo[n]; return memo[n]=memoized(n-1)+memoized(n-2); }
    long long dp(int n) { if(n<=1) return n; std::vector<long long> d(n+1); d[0]=0;d[1]=1; for(int i=2;i<=n;++i) d[i]=d[i-1]+d[i-2]; return d[n]; }
    long long iterative(int n) { if(n<=1) return n; long long a=0,b=1,c; for(int i=2;i<=n;++i){c=a+b;a=b;b=c;} return b; }
}

int main() {
    for(int i:{5,10,15,36%25+5}) {
        std::cout<<"fib("<<i<<") = "<<fib_509038ixdr::dp(i)
                  <<"  iter="<<fib_509038ixdr::iterative(i)<<"\n";
    }
    return 0;
}
