#include <iostream>
//using namespace std;

int main()
{
  int a=0,i,n=4;
  std::cout<<"Ingrese un número"<<std::endl;
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
	std::cout<<"Sí es primo\n";
      }
  return 0;
  
}
