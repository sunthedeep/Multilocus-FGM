#ifndef STABILITY_H
#define STABILITY_H
#include <gsl/gsl_matrix.h>
#include <vector>
using namespace std;

class stability{
 public:
  stability(vector<double> ws, int n);
  int stable(void);
  double getMeanFitness(void);
  double getDeterminantA(void){return determinantA;}
  double getDeterminantSum(void){return determinantSum;}
 private:
  int negative_definite(gsl_matrix *M, int n);
  int delta_condition(gsl_matrix *M, int n);
  double meanFitness;
  double determinantA;
  double determinantSum;
  gsl_matrix *A;
  gsl_matrix *A2;
  int n; //! dimensions
};
#endif
