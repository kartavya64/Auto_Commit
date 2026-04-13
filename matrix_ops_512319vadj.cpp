// Auto-generated: 2026-05-11 18:48:32
// Topic: Matrix Multiplication & Transpose
#include <iostream>
#include <vector>
#include <iomanip>
using Matrix=std::vector<std::vector<double>>;

namespace matrix_512319vadj {
    Matrix make(int r,int c,double v=0){return Matrix(r,std::vector<double>(c,v));}
    Matrix multiply(const Matrix&A,const Matrix&B){
        int m=A.size(),n=B[0].size(),k=B.size(); Matrix C=make(m,n);
        for(int i=0;i<m;++i) for(int j=0;j<n;++j) for(int p=0;p<k;++p) C[i][j]+=A[i][p]*B[p][j];
        return C;
    }
    Matrix transpose(const Matrix&A){
        int m=A.size(),n=A[0].size(); Matrix T=make(n,m);
        for(int i=0;i<m;++i) for(int j=0;j<n;++j) T[j][i]=A[i][j]; return T;
    }
    void print(const Matrix&M){
        for(auto&row:M){for(double v:row) std::cout<<std::setw(7)<<std::fixed<<std::setprecision(1)<<v; std::cout<<"\n";}
    }
}

int main() {
    Matrix A={{{2.0,0.0,1.0}},{{1.0,3.0,2.0}}};
    std::cout<<"A:\n"; matrix_512319vadj::print(A);
    Matrix T=matrix_512319vadj::transpose(A);
    std::cout<<"A^T:\n"; matrix_512319vadj::print(T);
    return 0;
}
