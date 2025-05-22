#include <iostream>
using namespace std;

int main(){

  
    float notas[5];
    for (int i = 0; i < 5; i++){

        cout<<"Ingresa la nota "<<i+1<<": ";
        cin>>notas[i];
    }

    for (int i = 0; i < 5; i++){ 

        cout<<"las notas son: "<<notas[i]<<endl;

    }

       

    




    return 0;
}