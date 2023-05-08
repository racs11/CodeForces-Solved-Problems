#include<iostream>

using namespace std;

int main(){

    int n,aux,aux2,cont=0;
    cin>>n;
    cin>>aux2;
    cont += 1;
    for(int i=0;i<n-1;i++){

        cin>>aux;
        if(aux != aux2 ){
            cont += 1;
            aux2 = aux;
        }


    }

    cout<<cont;


}
