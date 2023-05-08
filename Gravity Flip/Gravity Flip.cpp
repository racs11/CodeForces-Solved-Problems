#include<iostream>

using namespace std;

int main(){

    int n,aux;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>aux;
        a[i] = aux;
    }
    if(n > 1){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j] > a[j+1]){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
