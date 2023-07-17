#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int x = 0;
    char actual = arr[0];
    for(int i=0;i<n-1;i++){
        if(actual != arr[i+1]){
            actual = arr[i+1]
;        }else{
            x += 1;
        }
    }
    cout<<x;
}
