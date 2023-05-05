#include<iostream>

using namespace std;

int main(){

    int n, cont=0,aux,problem=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cont = 0;
        for(int j=0;j<3;j++){
            cin>>aux;
            if(aux == 1){
                cont+=1;
                if(cont == 2){
                    problem +=1;
                }
            }

        }

    }
    cout<<problem;
}
