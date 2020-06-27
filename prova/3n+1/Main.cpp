#include <iostream>
#include <vector>
#include <string>


using namespace std;

int cont(long int num){
    int n = 0;
    n++;
    while(num > 1){
        n+=1;
        if(num% 2 != 0){
            num = 3*num +1;
        }else {
            num = num/2;
        }
        
    }
    return n;
}


int main(){
   long int num1,num2,result ,aux;
    
   while(cin >>num1 >> num2 ){
       aux = 0;
       result = 0;
       for(int i = num1;i<num2;i++){
            aux = cont(i);
            if(aux>result){
                result = aux;
            }
       }
       cout << num1 << " " << num2 << " " << result << "\n";
      
   }
    return 0;
}