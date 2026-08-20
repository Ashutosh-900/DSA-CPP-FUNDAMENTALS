#include <iostream>
using namespace std;
void increment (int **p){
    ++(**p);
}
int main() {
    cout<<"first question"<<endl;
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout<< p <<endl;
    cout<<"second question"<<endl;
    int first = 110;
    int *m = &first;
    int **q  = &m;
    int second = ((**q)++ +9);
    cout<<first << " "<<second <<endl;
    cout<<"third question"<<endl;
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout<< num <<endl;

}
