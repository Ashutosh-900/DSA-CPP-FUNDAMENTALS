#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<< binary_search (v.begin(),v.end(),5)<<endl;
    cout<< binary_search (v.begin(),v.end(),6)<<endl;
    cout<<"lower bound : "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<< "upper bound : "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    int a =3;
    int b = 5;
    cout<<"max is :"<<max(a,b)<<endl;
    cout<<"min is :"<<min(a,b)<<endl;
    swap(a,b);
    cout<< "after swappimg value of a is now  : "<<a<<endl;
    string abcd = "ASHU";
    reverse(abcd.begin(),abcd.end());
    cout<< "string is now :"<<abcd<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<< "after rotate"<<endl;
    for(int i : v){
        cout<< i << " ";

    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sorting "<<endl;
    
     for(int i : v){
        cout<< i << " ";

    }
    cout<<endl;

}