#include<bits/stdc++.h>
using namespace std;

typedef unsigned int uint;
typedef long long int64;
typedef unsigned long long uint64;


struct Num{
       int64 num;
       int64 mod;
       int64 ove;
};

bool comp(Num A, Num B){
     if(A.mod != B.mod)
              return (A.mod < B.mod);
     else if(A.ove==0 && B.ove==1)
          return false;
     else if(A.ove==1 && B.ove==0)
          return true;
     else if(A.ove==1 && B.ove==1)
          return (A.num > B.num);
     else
         return (A.num < B.num);
}

int main(){
    while(true){
                int64 N, M, i, n;
                cin >> N >> M;
                cout<< N << " " << M <<endl;
                if(N==0 && M==0)
                        break;
                Num vec[N];
                for(i=0; i<N; i++){
                         cin >> n;
                         vec[i].num = n;
                         vec[i].mod = n % M;
                         vec[i].ove = abs(n % 2);
                }
                
                sort(vec, vec+N, comp);
                
                for(i=0; i<N; i++){
                         cout<<vec[i].num<<endl;
                }
    }
    return 0;
}
