#include <pthread.h>
#include <stdio.h>

/*
// 새 스레드를 만든다
int pthread_ceate(pthread_t *thread, const pthread_attr_t *attr, void *(*start) (void *), void *arg);

//호출 스레드를 종료
void pthread_exit(void * ret);

//각 스레드는 고유한 스레드ID를 갖는다.
pthread_t pthread_self(void);

int pthread_equal(pthread_t tl,pthread_t t2);

// thread로 식별된 스레드가 종료되기를 기다림.
// 이 동작은 join이라고 함...
int pthread_join(pthread_t thread, void **ret);

*/

pthread_t** ret;

int main(){
 pthread_t id = pthread_self();
 
 printf("thread id = %ud\n",(int)id); 
 
 if(pthread_equal(id, pthread_self())){
  printf("id matches self\n");
 }else{
  printf("tid is not matched, id=%ud, self=%ud",id,pthread_self());
 }

 return 0;
}
