#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct no{
    char atual[3];
   no *prox;
};



int main(){
    char cidade1;
    char cidade2[3],capital[3];
    cin >> capital;
    no vetor[100];
    while (cin >> cidade1 ){
        cin >> cidade2;
        cout << cidade1 << " " << cidade2 <<"\n";
    }
    
    return 0;
}