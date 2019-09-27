#include <cmath>
#include <cstdio>

int main (void){

  const double xmin=0.0;
  const double xmax= 10.0;
  const double dx = 0.1;
  const int NSTEPS = (xmax -xmin)/dx;

  for(int ii = 0; ii<=NSTEPS; ++ii){ // es mejor hacer los loops sobre los enteros que sobre los fltantes
    double x = xmin + ii*dx;
    std::printf("%25.16e \t %25.16e\n", x, std::tgamma(x ));

  }

  return 0;

}
