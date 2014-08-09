#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include <time.h>



int main(int argc, char *argv[]){
	
settickets(5);

int pid1 = fork();

if(pid1==0){
  
// time_t rawtime;
// struct tm * timeinfo;
// time(&rawtime);
// timeinfo = localtime ( &rawtime );
//int r1 = (int)&pid1;
// time_t t = time(NULL);
 //struct tm tm = *localtime(&t);
  // time_t current_time;
  //   char* c_time_string;
  //   c_time_string = ctime(&current_time);
  //    printf(1,"Current time is %s", c_time_string);
settickets(999999/*r1%20*/);
int i;
//printf(1,"proccess 1 started at %d \n", tm.tm_min);
int tpid1=getpid();
printf(1,"process %d has %d tickets \n",tpid1,999999/*r1%20*/);
for(i=1;i<500000;i++){

// int j; 
// for(j=1;j<5000;j++){
// 	  if(100%i==0)
//     printf(1,"process %d is running \n",tpid1);}
}
//time (&rawtime);
//timeinfo = localtime ( &rawtime );
//printf(1,"proccess 2 started at %s", asctime (timeinfo));
		exit();


}
else{
	int pid2 = fork();
//struct pstat *t = malloc(sizeof(struct pstat));
//getpinfo(&t);

     if(pid2==0){
     //int r2 = (int)&pid2;
     settickets(50/*r2%20*/);
     int i;
     int tpid2=getpid();
     printf(1,"process %d has %d tickets \n",tpid2,50/*r2%20*/);
     for(i=1;i<500000;i++){
      int j;
          for(j=0;j<1000;j++){}
     //	if(1000%i==0)
       //  printf(1,"process %d is running \n",tpid2);
      }
     	exit();


     }
     else{
        int pid3 = fork();
         
         if(pid3==0){
      // int r3 = (int)&pid3;
        settickets(500/*r3%20*/);
         int i;
         int tpid3=getpid();
         printf(1,"process %d has %d tickets \n",tpid3,500/*r3%20*/);
         for(i=1;i<500000;i++){
          int j;
          for(j=0;j<1000;j++){}
       //  if(1000%i==0)
        //  printf(1,"process %d is running \n",tpid3);	
          }
         		exit();

         }
         else{
               int p1= wait();
               printf(1,"process %d has exited \n",p1);
               int p2= wait();
               printf(1,"process %d has exited \n",p2);
               int p3= wait();
               printf(1,"process %d has exited \n",p3);

               printf(1,"parent process %d is exiting \n",getpid());
                 exit();
         }


     }


}

}