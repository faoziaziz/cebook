#include "global.h"

void PointerAndArrays(){
  int i=3;
  int *p=&i;
  printf("Nilai dari i adalah %d, sama dengan %d\n", i, *p);
  printf("alamat dari i=%p, sama dengan %p\n", (void *)&i, (void *)p);
  
}
