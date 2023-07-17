#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];



    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x = 0;
    int y = 0;

    int pos1 = 0;
    int pos2 = n-1;

    bool turn = 1;

    while(pos1 <= pos2){
        if(turn){
            if(arr[pos1] > arr[pos2]){
                x += arr[pos1];
                pos1 += 1;
            }else{
                x += arr[pos2];
                pos2 -= 1;
            }
            turn = !turn;
        }else{
            if(arr[pos1] > arr[pos2]){
                y += arr[pos1];
                pos1 += 1;
            }else{
                y += arr[pos2];
                pos2 -= 1;
            }
            turn = !turn;
        }
    }
    cout<<x<<" "<<y;
}
