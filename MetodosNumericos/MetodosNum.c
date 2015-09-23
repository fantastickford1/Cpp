#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float x1, m, n, sum, power, y, sign;
double tol, expon, term;

void proceso (float x, float tol, double m){

  int sign = -1;
  float sum = 0, n = 1, y = x-1;
  float power=y, term =y;
  int bandera =1;

  while(n <= m){
    sign = - (sign);
    sum = sum+sign * term;
    power *= y;
    term = power / (n+1);
    if(abs(term) < tol){
      printf("el valor de n es: %f", n );
      bandera=0;
      break;
    }else{
      n++;
    }
  }if (bandera==1)
    printf("ERROR");
}


int main(int argc, char const *argv[]) {

  float x, tol;
  int m;
  printf("Introduce x \n");
  scanf("%f", &x);
  printf("Introduce m \n");
  scanf("%d", &m);
  printf("Introduce tol sin exponente  \n");
  scanf("%f", &tol);

  proceso(x,tol,m);

  return 0;
}
