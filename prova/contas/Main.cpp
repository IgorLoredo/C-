#include <iostream>
#include <vector>
#include <string>


using namespace std;

void bubble_sort (int vetor[]) {
    int k, j, aux;

    for (k = 1; k < 3; k++) {
        for (j = 0; j < 3 - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
    int salario[3];
   int sal1, sal2,sal3, menor;
    while(cin >>salario[0] >> salario[1] >> salario[2] ){
    bubble_sort(salario);
        cout << salario[1] << "\n";
    }
    return 0;
}