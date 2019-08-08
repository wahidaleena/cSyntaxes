#include <stdio.h>
 
int count ;
extern void write_extern();
/* function declaration */
void func(void);
 
static int count = 5; /* global variable */
 
main() {

   while(count--) {
      func();
	  
   }
	count = 5;
   write_extern();
   return 0;
   printf("This should not come");
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d and count is %d\n", i, count);
}