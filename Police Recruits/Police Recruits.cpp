#include <iostream>

using namespace std;

int main (){

int n;
cin>>n;
int police= 0;
int x = 0;
int aux;
for(int i =0;i<n;i++){
    cin>>aux;
    if(aux == -1 && police != 0){
        police -= 1;
    }else if(aux == -1){
        x += 1;
    }else{
        police += aux;
    }
}

cout<<x;



return 0;

}
