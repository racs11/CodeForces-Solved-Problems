#include<iostream>

using namespace std;

int main(){

    int n,h,w=0;
    cin>>n>>h;
    int aux;
    for(int i=0;i<n;i++){
        cin>>aux;
        if(aux > h){
            w += 2;
        }else{
            w += 1;
        }
    }
    cout<<w;
}
