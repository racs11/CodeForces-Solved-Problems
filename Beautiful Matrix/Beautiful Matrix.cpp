#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int x,r,c;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>x;
            if(x == 1){
                r=i;
                c=j;
            }
        }
    }

    int cont = 0;

    cont += abs(r-2);
    cont += abs(c-2);

    cout<<cont;

}
