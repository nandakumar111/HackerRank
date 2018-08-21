#include <iostream>
#include <cstdio>
#define len 9
using namespace std;

int main() {
    string num[len] = {"one","two","three","four","five","six","seven","eight","nine"};
    int frst,last;
    cin>>frst>>last;
    for(int i=frst;i<=last;i++){
        if(i<=len)
            cout<<num[i-1]<<endl;
        else if(i%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd\n";
    }
    return 0;
}