#include <bits/stdc++.h>

using namespace std;

void simula(int pos, int soma, int v[]){
    if(pos == 2){
        cout << "Sequencia: " << v[0] << " " << v[1] << endl;
        cout << "Soma: " << soma << endl;
        if(soma == 5){
            cout << "Solucao" << endl;
        }
        return;
    }

    for(int valor = 1; valor <= 4; valor++){
        v[pos] = valor;
        cout << "Escolha x" << pos + 1 << " = " << valor << endl;
        simula(pos+1, soma + valor, v);
        cout << "Retorno: desfaz escolha de x" << pos + 1 << endl << endl;
    }
}

int main(){
    int v[2];
    simula(0, 0, v);
    return 0;
}