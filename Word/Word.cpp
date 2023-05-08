#include<iostream>

using namespace std;

int main (){
    string s;
    int upper=0,lower=0;
    cin>>s;
    for(int i=0;i<s.size();i++){

        if(s[i] >= 97){
            lower += 1;
        }else{
            upper += 1;
        }

    }


    if(upper > lower){
        for(int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }

    }else{
        for(int i=0;i<s.size();i++){
            s[i] =tolower(s[i]);
        }
    }

    cout<<s;

    return 0;
}
