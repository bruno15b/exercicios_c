#include <iostream>
#include <string>
using namespace std;

int main(){

    int x,y;

    cout << "Informe a quantidade de alunos:";
    cin>> x;

    cout << "Informe a quantidade de notas:";
    cin>> y;

    double matriz[x][y];
    double media[x];

    for(int i=0;i<x;i++){
        cout << "Aluno "<< i+1 << " ------------------------------------- "<< endl;
         for(int h=0;h<y;h++){
            cout << "Informe a nota " << h+1<<" :";
            cin >> matriz[i][h];
            media[i]=media[i]+matriz[i][h];
        }
    }

     cout << "Médias -----------------------------------------"<< endl;

     for(int i=0;i<x;i++){
        if((media[i]/y) >= 6){

        cout <<  "A média do aluno " << i+1 << " é de " << media[i]/y << " e foi aprovado"<< endl;
        }else cout <<  "A média do aluno " << i+1 << " é de " << media[i]/y << " e foi reprovado"<< endl;
    }

    cout << "------------------------------------------------";

    return 0;
}

