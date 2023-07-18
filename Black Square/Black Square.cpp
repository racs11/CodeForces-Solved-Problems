#include <iostream>

using namespace std;

int main (){

    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    string s;
    cin>>s;
    int sum = 0;

    for(int i=0;i<s.size();i++){
        int x = s[i]-48;
        sum += arr[x-1];
    }

    cout<<sum;

}
