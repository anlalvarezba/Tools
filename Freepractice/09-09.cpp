#include <iostream>
//using namespace std;

//CAMBIO 1
int primos (void);
int main(void){
  primos();

  return 0;
}



int primos(void){
  int a=0,i,n=4;
  std::cout<<"Ingrese un n�mero"<<std::endl;
  std::cin>>n;
    for(i=1;i<(n+1);i++){
      if (n%i==0){
	a++;
      }
    }
      if(a!=2){
	std::cout<<"No es primo\n";
      }
      else{
	std::cout<<"S� es primo\n";
      }
  }

