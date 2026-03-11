// Auto-generated: 2026-05-11 18:48:24
// Topic: String Processing & Palindrome Check
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>

namespace str_504527zeut {
    std::string upper(std::string s){ std::transform(s.begin(),s.end(),s.begin(),::toupper); return s; }
    bool palindrome(const std::string&s){
        std::string c; for(char ch:s) if(std::isalnum(ch)) c+=std::tolower(ch);
        return c==std::string(c.rbegin(),c.rend());
    }
    std::vector<std::string> split(const std::string&s){
        std::vector<std::string> t; std::stringstream ss(s); std::string w;
        while(ss>>w) t.push_back(w); return t;
    }
    std::string reverse_words(const std::string&s){
        auto w=split(s); std::reverse(w.begin(),w.end());
        std::string r; for(auto&x:w) r+=x+" "; return r;
    }
}

int main() {
    std::string s="open source pipeline live";
    std::cout<<"Original:  "<<s<<"\n";
    std::cout<<"Upper:     "<<str_504527zeut::upper(s)<<"\n";
    std::cout<<"Reversed:  "<<str_504527zeut::reverse_words(s)<<"\n";
    std::cout<<"Palindrome check 'racecar': "<<(str_504527zeut::palindrome("racecar")?"yes":"no")<<"\n";
    return 0;
}
