#include <cstdio>

int primos(int);
int cantidad(int);
//int suma(int);

int main(){
  int n,d;
  
  for (n=5; n<=10;n++){
   d=primos(n);

    if (d==1){
     printf("primo %d  \n", n);

     // cantidad(d);
     // printf("la cantidad de primos es %d  \n",c);
    

    }
    
    
  }

  return 0;
}



int cantidad(int d){
  int c=0;
  if (d==1){
    c++;  
        }
  return c;
     }




int primos(int n){
  int i;
  int a=0;n;

  for(i=1; i<(n+1);i++){
      if (n%i==0){
	a++;
      } 
     }

    if (a!=2){
      return 0; //no es primo
    }
    else {
      return 1; //sí es primo

    }
 }


