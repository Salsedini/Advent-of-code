#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    std::string cadena, nombrefichero=argv[1];
    int contador=0;
    std::fstream f;
    f.open(nombrefichero,std::fstream::in);
    if(!f){EXIT_FAILURE;}

    int *valores = new int[250]; 

    getline(f,cadena,'\n');
    valores[contador]=stoi(cadena);
    contador++;

    while (!f.eof()){

        getline(f,cadena,'\n');
        if(cadena!=""){
            valores[contador]=stoi(cadena);
            contador++;
        }

    }
    f.close();
    delete[] valores;

    for(int i=0;i<contador-2;i++){
        for(int j=i+1;j<contador-1;j++){
            for(int z=j+1;z<contador;z++){
                 if((valores[i]+valores[j]+valores[z])==2020){
    
                    std::cout<<(valores[i]*valores[j]*valores[z])<<std::endl;
                    std::cout<<"El primer número es "<<valores[i]<<std::endl;
                    std::cout<<"El segundo número es "<<valores[j]<<std::endl;
                    std::cout<<"El tercer número es "<<valores[z]<<std::endl;
            
                }
            }
        }
    }

}