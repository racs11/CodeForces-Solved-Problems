#include<iostream>
#include<set>

using namespace std;

int main(){
    set<char> s1;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        s1.insert(s[i]);
    }

    if(s1.size()%2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }

}
