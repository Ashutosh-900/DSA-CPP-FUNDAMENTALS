#include <iostream>
using namespace std;
int main () {
    int i = 3;
    int *Ashu = &i;
    *Ashu = *Ashu+1;
    cout<< *Ashu <<endl;
    cout<< "before Ashu : "<< Ashu <<endl;
    Ashu +=1;
    cout<<"after Ashu : "<< Ashu <<endl;
    cout<< "size of pointer Ashu is : "<<sizeof(Ashu)<<endl;

    return 0 ;

}
