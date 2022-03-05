#include <pthread.h>
#include <stdio.h>
#include <string.h>

//static functions are functions that are only visible to other functions in the same file
static void *thread_func(void *arg){
 char *s = (char*) arg;
 
 printf("%s",s);
 
 return (void*) strlen(s);
}


void check_err(int result_code,char* err_msg){
 if(result_code !=0) printf("something wrong while %s", err_msg);
}

int main(int argc,char *argv[]){
 
 //thread_func("str");

 pthread_t t1;
 void *res;
 int result_code;
 
 result_code = pthread_create(&t1, NULL, thread_func, "hello world\n");
 check_err(result_code, "thread creating");
 
 result_code = pthread_join(t1, &res);
 check_err(result_code, "thread joining");
 printf("thread returned %ld\n",(long)res);
 
 return 0;
}

