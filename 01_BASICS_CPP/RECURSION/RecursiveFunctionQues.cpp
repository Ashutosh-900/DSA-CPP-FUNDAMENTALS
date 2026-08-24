#include <iostream>
using namespace std;
void reachhome(int src, int dest){
    //base case
    cout<< "source " << src << "  destination " << dest <<endl;
    if(src == dest){
        cout<<"Reached the destination home"<<endl;
        return;
    }
    //processing - ek step badha do
    src++;
    reachhome(src,dest);
}
int main () {
    int dest = 10;
    int src = 1;
    reachhome(src,dest);
    return 0;
}