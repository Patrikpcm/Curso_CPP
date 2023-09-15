#include <iostream>
#define MAX 10
using namespace std;

int main(){

    char nome1[MAX], nome2[MAX];

   // cout << "Digite o seu nome completo: ";
  //  cin >> nome1;
   // cout << "Comando cin, sem get - Oi " << nome1 << endl;

    cout << "Digite o seu nome completo (2): ";
    cin.get(nome2,MAX);
    cout << "Comando cin.get(nome2,MAX) - Oi " << nome2 << endl;
    return 0;
}