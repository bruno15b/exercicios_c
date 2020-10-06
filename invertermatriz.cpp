#include <iostream>
#include <string>
using namespace std;

int main(){

    int matriz[2][2];

    cout << "Informe os valores inteiros da matriz 2x2 :" << endl;

     for(int i=0;i<2;i++){
         for(int h=0;h<2;h++){
            cout<<i+1<<" x "<<h+1<< " : ";
            cin>>matriz[i][h];
         }
     }

     cout << "Matriz normal --------------------"<< endl;
     for(int i=0;i<2;i++){
         for(int h=0;h<2;h++){
            cout<< matriz[i][h] << " ";
         }
         cout<< endl;
     }

      cout << "Matriz invertida --------------------"<< endl;

      for(int i=1;i>-1;i--){
        for(int h=0;h<2;h++){
            cout<< matriz[i][h] << " ";
        }
        cout<< endl;
    }

    return 0;
}
