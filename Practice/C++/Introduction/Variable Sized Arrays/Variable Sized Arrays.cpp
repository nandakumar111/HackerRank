#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    int** a= new int*[n]();
    for(int i=0;i<n;i++){
        int alen;
        cin>>alen;
        int* arr = new int[alen]();
        for(int j=0;j<alen;j++)
            cin>>arr[j];
        a[i] = arr;
    }
    while(q--){
        int aval,ival;
        cin>>aval>>ival;
        cout<<a[aval][ival]<<endl;
    }
    for (int i=0;i<n;i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}