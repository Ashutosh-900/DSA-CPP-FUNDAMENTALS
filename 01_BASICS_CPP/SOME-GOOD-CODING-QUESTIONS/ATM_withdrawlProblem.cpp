#include <iostream>
using namespace std;
int main() {
    int amount;
    cout<<"enter the amount in rupees : "<<endl;
    cin>>amount;
    while(amount>0){
    int note500 = amount/500;
    int ml1 = amount%500;
    int note200 = ml1/200;
    int ml2 = ml1%200;
    int note100 = ml2/100;
    int ml3 = ml2%100;
    int note50 = ml3/50;
    int ml4 = ml3%50;
    int note10 = ml4/10;
    int ml5 = ml4%10;
    int note1 = ml5/1;
    int ml6 = ml5%1;
    cout<<"500 rupees notes : "<< note500<<endl;
    cout<<"200 rupees notes : "<< note200<<endl;
    cout<<"100 rupees notes : "<< note100<<endl;
    cout<<"50 rupees notes : "<< note50<<endl;
    cout<<"10 rupees notes : "<< note10<<endl;
    cout<<"1 rupees notes : "<< note1<<endl;
    return 0 ;
    }
}









