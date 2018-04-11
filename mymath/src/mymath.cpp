#include <cstdio>

// Added point struct
struct point {
  double x, y;
};

// Calculate square root of num
double sqrt(double x) {
  double oldAp = 0.5 * ((x / 2) + (x / (x / 2)));
  double newAp = 0.5 * (oldAp + (x / oldAp));
  while(oldAp != newAp) {
    oldAp = newAp;
    newAp = 0.5 * (newAp + (x / newAp));
  }
  return newAp;
}

// Calculate absolute value
double abs(double a) {
  if(a < 0) {
    return -a;
  } else {
    return a;
  }
}

// Calculate b to the power of e
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

// Calculate quadratic function
double quadFun(double a, double b, double c, double x) {
  return (a*a*x) + (b*x) + c;
}

double integer(double a) {
  return a;
}

// Calculate integral of quadratic function
double integral(double a, double b, double c, double beg, double end) {
  double sum = 0, base = beg;
  double ds = abs(beg - end) / 100000;
  for(int i = 0; i < 100000; i ++) {
    sum += calcTrapField(quadFun(a, b, c, base), quadFun(a, b, c, base + ds), ds);
    base += ds;
  }
  return sum;
}

// Calculate integral of quadratic function with precission
double integral(double a, double b, double c, double beg, double end, double tries) {
  double sum = 0;

  double ds = abs(beg - end) / tries;
  for(int i = beg; i < end; i += ds) {
    sum += calcTrapField(quadFun(a, b, c, i), quadFun(a, b, c, i + ds), ds);
  }
  return sum;
}

// Calculate vertex of quadratic function
point vertex(double a, double b, double c) {
  point resoult;
  resoult.x = -b / (2 * a);
  resoult.y = quadFun(a, b, c, resoult.x);
  return resoult;
}
