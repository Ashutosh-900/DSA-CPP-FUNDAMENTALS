#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<long long> prime;
void sieve(int n){
    vector<bool> isprime(n+1,true);
    isprime[0]=isprime[1]= false;
    for(int i = 2 ; i<=n ; i++){
        if(isprime[i]){
            prime.push_back(i);
            for(int j = i*i ; j<=n ; j=j+i){
                isprime[j]= false;
            }
        }
    }
}

void segsieve(int l , int h){
    long long sq = sqrt(h);
    sieve(sq);
    vector<bool> isprime(h-l+1,true);
    for(long long  p : prime){
        long long sm = (l/p)*p;
        if(sm<l){
            sm += p;
        }
        if(sm==p){
            sm += p; 
        }
        for(long long m = sm ; m<=h ; m += p ){
            isprime[m-l] = false;

        }
    }
    for(long long i = l ;i<=h ; i++){
        if(isprime[i-l] == true)
        cout<< i << " ";
    }
    cout<<endl;

}
int main () {
    int l , h ;
  cout<<"enter the lower bound value :"<<endl;
  cin>>l;
  cout<<"enter the upper bound value :"<<endl;
  cin>>h;
  cout<<"Primes in the range["<<l<< ","<<h <<"] are :"<<endl;
  segsieve(l,h);
  return 0;
}