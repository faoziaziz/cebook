#include "global.h"

void CH4_1(){
  /* bagian 1*/

  int a=5;
  double x = 3.14;
  void *p;

  p = &a;
  printf("value of a = %d\n", *(int *)p);
  p=&x;
  printf("value of x = %g\n", *(double *)p);

}

void CH4_2(){
  double a[4];
  printf("address of a[0] = %p\n", (void *)&a[0]);
  printf("address of a[1] = %p\n", (void *)&a[1]);
  printf("address of a[2] = %p\n", (void *)&a[2]);
  printf("address of a[3] = %p\n", (void *)&a[3]);

}

void CH4_3(){
  int a[] = {1,1,2,3,5,8,13};
  printf("a has %d elements\n", sizeof a/sizeof a[0]);
  

}

void CH4_4(){
  printf("%c\n", "Hello world"[6]);
  printf("%c\n", 6["Hello world"]);

}
