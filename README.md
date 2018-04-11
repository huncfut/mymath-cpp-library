# Mymath cpp library

### Functions included
- Point structure (has x and v values)

- Square root
  ```cpp
  printf("%f\n", sqrt(2));
  ```
  ```sh
  > 1.414214
  ```

- Get absolute value
  ```cpp
  printf("%f\n", abs(-2));
  ```
  ```sh
  > 2.000000
  ```

- Calculate b to the power of e
  ```cpp
  int b = 2; int e = 3;
  printf("%d\n", pow(b, e));
  ```
  ```sh
  > 8
  ```

- Calculate quadratic function
  ```cpp
  double a = 1.0, b = 1.5, c = 2.0, x = 10.0;
  printf("%f/n", quadFun(a, b, c, x));
  ```
  ```sh
  > 117.000000
  ```

- Calculate integral of quadratic function
  ```cpp
  double a = 1.0, b = 1.5, c = 2.0, begX = 10.0, endX = 12.0;
  printf("%f\n", integral(a, b, c, begX, endX));
  ```
  ```sh
  > 59.000000
  ```

- Calculate integral of quadratic function with amount of tries
  ```cpp
  double a = 1.0, b = 1.5, c = 2.0, begX = 10.0, endX = 12.0, tires = 100000;
  printf("%f\n", integral(a, b, c, begX, endX, tries));
  ```
  ```sh
  > 59.000000
  ```

- Calculate vertex of quadratic function
  ```cpp
  double a = 1.0, b = 1.5, c = 2.0;
  point ver = vertex(a, b, c);
  printf("%f %f\n", ver.x, ver.y);
  ```
  ```sh
  > error
  ```
