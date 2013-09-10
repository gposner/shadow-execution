
#include <stdio.h>
#include <math.h>
#include <setjmp.h>

int main() {
  int x = 5;
  int y = 4;
  y = x + 3;
  y = y/2;
  x = y % 10;
  double z = 1.0;
  jmp_buf env;
  int val;
  val = setjmp(env);

  if (x*x-y*y < 2)
  {
    z = z + 2.0;
    z = z / 2.0;
    x = (int)z*3.0;
  }
  else
  {
    goto out;
  }

out:
  y = x * z;

  if (!val) longjmp(env, 1);

  return y;
}