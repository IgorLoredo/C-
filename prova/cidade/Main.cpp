#include <iostream>
#include <cstring>
#include <string>

using namespace std;


struct no{
    char atual[3];
    int filhos;
    no* dir;
    no*esq;
};

no*criarNo(char nome[]){
    no*novo;
    novo = new no;
    novo->filhos = 0;
    novo->dir = NULL;
    novo->esq = NULL;
    strcpy(novo->atual,nome);
    return novo;
}

void inseri( no *root, char nome[]){
    if(root == NULL){
       
        root = criarNo(nome);
        return ;
    }
    if( 0 < strcmp(nome,root->atual)){
        root->filhos +=1;
        inseri(root->esq,nome);
    }else{
        if(0 > strcmp(nome,root->atual)){
            root->filhos +=1;
            inseri(root->dir,nome);
        }
    }
  
}



void preordem(no *p){
    
    if (p !=NULL) {
        preordem (p->esq);
       preordem (p->dir);
        cout << p->atual<< " " << p->filhos << "\n";
       
    }
}

void copiar(char nome[], char copia[]){
    strncpy(copia,nome,3);
}

int main(){
    char cidade1[3];
    char cidade2[3],capital[3];
    cin >> capital;
    no *root =criarNo(capital);
    while (cin >> cidade1 ){
        cin>> cidade2;
        char aux [3];
        copiar(cidade1,aux);    
        inseri(root,aux);
        inseri(root,cidade2);
        
    }
    preordem(root);
    
    return 0;
}