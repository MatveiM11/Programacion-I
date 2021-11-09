#include <iostream>
using namespace std;

void calct(float temperatura[5]);


int main(){

 float  temperatura[5];
 int c = 0;
 
 while(c!=4){
 
 	cout << "Introduce las temperaturas por 4 veces";
 	cin >> temperatura[c];	
 	c++;
 
 }
 
 calct(temperatura);
 
 
 
   return 0;
}                                                                                                                        
                                                                                                                       

void calct(float temperatura[]){
float sum = 0;

for (int i=0; i<5; i++){
sum +=temperatura[i];
}


cout << sum;

}
                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                  
