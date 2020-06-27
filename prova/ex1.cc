#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main(){
    int *pr = new int[100];
    int novo =10000;
    pr[99] =  novo;
    cout << pr[99] << "\n";
    pr = new int[1000];
    novo = 310;
    pr[1222] =novo;
    cout << pr[1222];
    return 0;
}