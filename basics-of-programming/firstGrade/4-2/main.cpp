#include<iostream>
using namespace std;

int main() {
    int a,b,vidp, count = 0;
    for(int i=0;i<12;i++) {
        a=rand() % 9;b=rand() % 9;
        cout<<a<<"x"<<b<<"=";cin>>vidp;
        if(vidp==a*b) {
            cout<<"Добре!"<<endl;
            count++;
        }
        else {
            cout<<"Погано!"<<endl;
        }
    }
    cout<<("Ваша оцiнка: ")<<count<< "/12"<<endl;
    return 0;
}
