
#include <stdlib.h>
#include <stdio.h> 


struct X {
  int a;
  double b;
};


struct X foo(int a, double b) {
  struct X x; // = {1, 2.5};
  x.a = a;
  x.b = b;

  return x;
}


int main() {
  
  struct X y = foo(1, 2.5);
  printf("%d\n", y.a);

  return 0;
}
