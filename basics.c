#include <stdio.h>
//preprocessor
#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")
#define square(x) ((x) * (x))
#define SYSTEM_H "system_1.h"
#include SYSTEM_H
#include <errno.h>
#include <stdarg.h>
 /* function declaration */
int max(int num1, int num2);
/* function declaration */
void swap(int *x, int *y);

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
union Data {
   int i;
   float f;
   char str[20];
};
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;

//recursive
unsigned long long int factorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}
//variable arguments
double average(int num,...) {

   va_list valist;
   double sum = 0.0;
   int i;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum/num;
}

int main ( int argc, char *argv[] ) {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int i, j;
   /* local variable definition */
   int c = 100;
   int d = 200;
   int ret;
 /* local variable definition */
   int e = 100;
   int f = 200;
   int n[ 10 ]; /* n is an array of 10 integers */
   int i,j;
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/
   int  *ptr = NULL;
   char str1[12] = "Hello";
   char str2[12] = "World";
   FILE *fp;
   /* address stored in pointer variable */
   struct Books Book1;        /* Declare Book1 of type Book */
   struct Books Book2;        /* Declare Book2 of type Book */
   int sum = 17, count = 5;
   double mean;
   
   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
   mean = (double) sum / count;
   /* allocate memory dynamically */
   description = malloc( 30 * sizeof(char) );
   /* suppose you want to store bigger description */
   description = realloc( description, 100 * sizeof(char) );
   //variable ars statements
   printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
   printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
   printf("Factorial of %d is %d\n", i, factorial(i));
   perror("Error printed by perror");
   //header file
   puts (test ());
   //preprocessor usage
   message_for(Carole, Debra);
   //gets and puts
   printf( "Enter a value :");
   gets( str );

   printf( "\nYou entered: ");
   puts( str );
   

   fp = fopen("/tmp/test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fscanf(fp, "%s", buff);
   fgets(buff, 255, (FILE*)fp);
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);
   printf("Address stored in ip variable: %x\n", ip );


 union Data data;        

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);
   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );
   

 
 /* copy str1 into str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );
   
   /* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1;
   unsigned int heightValidated : 1;
} status2;

 //switch case
   switch(a) {
   
      case 100: 
         printf("This is part of outer switch\n", a );
      
         switch(b) {
            case 200:
               printf("This is part of inner switch\n", a );
         }
   }
   
   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );
    
   //nested loops
   for(i = 2; i<100; i++) {

      for(j = 2; j <= (i/j); j++) 
      if(!(i%j)) break; // if factor found, not prime
      if(j > (i/j)) printf("%d is prime\n", i);
   }
   //do while
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );
   
   /* calling a function to get max value */
   ret = max(c, d);
 printf( "Max value is : %d\n", ret );
 
   /* calling a function to swap the values.
      * &a indicates pointer to a ie. address of variable a and 
      * &b indicates pointer to b ie. address of variable b.
   */
   swap(&e, &f);
 
  /* initialize elements of array n to 0 */         
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; /* set element at location i to i + 100 */
   }
   
   /* output each array element's value */
   for (j = 0; j < 10; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }
   return 0;
   printf("This should not come");
}
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}