#include <iostream>
using namespace std;

void leePar(char &c1, char &c2, int &n);
void dibuja(char &c1, char &c2, int &n);

int main() {
 char c1, c2;
 int n;
 

  
 leePar(c1,c2,n);
 
 dibuja(c1, c2, n);


 
return 0;
}





void leePar(char &c1, char &c2, int &n){

	
	cout << "Introduce un caracter:";

	cin >> c1;
	
	cout << "Introduce otro caracter(R/V):";
	
	cin >> c2;
	

	
	while(n<4 || n>20){
	
	cout << "Introduce un numero (entre 4 y 20):" << endl;;
	
	cin >> n;
	if (n<4 || n>20){
	    cout << n << " no es un valido" << endl;
	}
	}
	
	
}

void dibuja(char &c1, char &c2, int &n){
   int i2=0;
   if (c2 =='R'){
       while(i2!=n){
       i2++;
       
   
       for(int i=1; i<=n; i++){
       cout << c1;
       if (i%n==0){
          cout << endl;
       }
       }
   }
   }
   
   if (c2 =='V'){
        for(int i=1; i<=n; i++){
       cout << c1;}
       cout << endl;
       while(i2!=n-2){
       i2++;
       
       cout << c1;
       for(int i=2; i<=n-1; i++){
       cout << " ";
      if (i==n-1){
          cout << c1;
         
          if ((i+1)%n==0){
          cout << endl;
       }
      }
      }
   }
   for(int i=1; i<=n; i++){
       cout << c1;}
   }
    
   
    
}
