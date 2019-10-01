#include<iostream>
#include<random>
#include<vector>

int main (void){
  const int NSAMPLES = 10000;
  int seed=1;


  const double xmin=0.0;
  const double xmax=1.0;
  const double dx=0.1;
  const int nbins=(xmax-xmin)/dx;
  std::vector<double> histo(nbins);
  
  std::mt19937 gen (seed);
  std::random_device rd;  
    std::uniform_real_distribution<> dis(xmin, xmax);
    for (int n = 0; n <NSAMPLES ; ++n) {
         std::cout << dis(gen) <<'\n';
    }

  return 0;
}
