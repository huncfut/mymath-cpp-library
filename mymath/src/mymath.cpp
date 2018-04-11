#include "mymath.h"

struct point {
  double x, y;
};

double sqrtt(double x) {
  double oldAp = 0.5 * ((x / 2) + (x / (x / 2)));
  double newAp = 0.5 * (oldAp + (x / oldAp));
  while(oldAp != newAp) {
    oldAp = newAp;
    newAp = 0.5 * (newAp + (x / newAp));
  }
  return newAp;
}

double fabs(double a) {
  if(a < 0) {
    return -a;
  } else {
    return a;
  }
}

int pow(int b, int e) {
  if(!e) {
    return b * pow(b, e - 1);
  } else {
    return 1;
  }
}

double calcTrapField(double a, double b, double h) {
  return ((a + b) / 2) * h;
}

double quadFun(double a, double b, double c, double x) {
  return (a*a*x) + (b*x) + c;
}

double integral(double a, double b, double c, double beg, double end) {
  double sum = 0;
  double ds = fabs(beg - end) / 1000000;
  for(int i = beg; i < end; i += ds) {
    sum += calcTrapField(quadFun(a, b, c, i), quadFun(a, b, c, i + ds), ds);
  }
  return sum;
}

double integral(double a, double b, double c, double beg, double end, double tries) {
  double sum = 0;
  double ds = fabs(beg - end) / tries;
  for(int i = beg; i < end; i += ds) {
    sum += calcTrapField(quadFun(a, b, c, i), quadFun(a, b, c, i + ds), ds);
  }
  return sum;
}

point vertex(double a, double b, double c) {
  point resoult;
  resoult.x = -b / (2 * a);
  resoult.y = quadFun(a, b, c, resoult.x);
  return resoult;
}
