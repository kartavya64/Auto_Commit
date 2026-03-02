// Auto-generated: 2026-05-11 18:48:19
// Topic: Sieve of Eratosthenes
#include <iostream>
#include <vector>
#include <cmath>

namespace primes_499935vkro {
    std::vector<int> sieve(int limit) {
        std::vector<bool> is_p(limit+1,true); std::vector<int> primes;
        is_p[0]=is_p[1]=false;
        for(int i=2;i<=limit;++i) { if(is_p[i]){ primes.push_back(i); for(int j=2*i;j<=limit;j+=i) is_p[j]=false; } }
        return primes;
    }
    std::vector<int> factorize(int n) {
        std::vector<int> f;
        for(int i=2;i*i<=n;++i) while(n%i==0){f.push_back(i);n/=i;}
        if(n>1) f.push_back(n); return f;
    }
}

int main() {
    auto primes=primes_499935vkro::sieve(49);
    std::cout<<"Primes up to 49: "; for(int p:primes) std::cout<<p<<" "; std::cout<<"\n";
    int n=12*7;
    std::cout<<"Factors of "<<n<<": ";
    for(int f:primes_499935vkro::factorize(n)) std::cout<<f<<" "; std::cout<<"\n";
    return 0;
}
