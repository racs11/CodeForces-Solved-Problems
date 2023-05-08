#include<iostream>

using namespace std;

int main(){

    string s,s2;
    bool iguales= 1;
    cin>>s>>s2;

    for(int i=0;i<s.size();i++){
       if(tolower(s[i]) < tolower(s2[i])){
            cout<<-1;
            iguales = 0;
            break;
        }else if(tolower(s[i]) > tolower(s2[i])){
            cout<<1;
            iguales = 0;
            break;
        }
    }

    if(iguales){
        cout<<0;
    }

}
