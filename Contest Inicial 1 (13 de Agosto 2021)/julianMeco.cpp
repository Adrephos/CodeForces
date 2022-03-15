#include <bits/stdc++.h>
#include <vector>
using namespace std;
 

int main(){

    int numeroOperaciones;
    int numCasillas;
    vector<int> vec;
	int aux;
    int contador;
    vector<int> result;

    cin>>numeroOperaciones;
    
    for(int k = 0; k < numeroOperaciones; k++){
		contador = 0;

        cin>>numCasillas;

        for(int i = 0; i < numCasillas; i++){
            cin>>aux;
			vec.push_back(aux);
			if(aux == 0){
                contador = contador+2;
            }
        }

        //cout << contador;
        result.push_back(contador);
    }
    //Imprimir resultado
    for (int i = 0; i < result.size(); i++){
        cout<<result[i]<<endl;
    }



}
