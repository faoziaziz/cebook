#include<stdio.h>
#include<pthread.h>

void do_one_thing(int *);
void do_another_thing(int *);
void do_wrap_up(int, int);

int r1=0, r2=0, r3=0;

pthread_mutex_t r3_mutex=PTHREAD_MUTEX_INITIALIZER;
extern int main(int argc, char **argv){
  pthread_t thread1, thread2;
  r3=atoi(argv[1]);
  pthread_create(&thread1, NULL, (void *) do_one_thing, (void *) &r1);
  pthread_create(&thread2, NULL, (void *) do_another_thing, (void *)&r2);
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  do_wrap_up(r1, r2);

  return 0;
  

}
