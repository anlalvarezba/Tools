#include <cstdio>
#include <cmath>

int main(void){

  const double ini=0.0, fin=10.0;
  const double delta=0.1;
  const double pasos= (fin-ini)/delta;
  double x = 0.0;

  
  for (int ii=0; ii<pasos; ii++){
    x += delta;      
    printf("%20.16f  %20.16f\n ", x, std::tgamma(x));
    //printf ("%d", ii);
  }


  return 0;
}
