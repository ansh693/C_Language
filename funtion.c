//#include <stdio.h>
// Prototype (Function Declaration)
// void greet();
// int main()
// {
//     greet();   // Function Call
//     return 0;
// }
// // Definition
// void greet()
// {
//     printf("Hello World");
// }

// make 2 funtion 1 to say hello and other th=o say goodbye 
// #include <stdio.h>
// void greet();
// void goodbye();
// int main()
// {
//     greet();   // Function Call
//     goodbye();
//     return 0;
// }
// // Definition
// void greet()
// {
//     printf("Hello World\n");
// }
// void goodbye()
// {
//     printf("goodbye\n");
// }

// make a code if the user is indian so print namaste and if freanch print bonjour 
// #include <stdio.h>
// void namaste();
// void bonjour();
// int main(){
//     printf("enter f for french and i for indian : ");
//     char ch ;
//     scanf("%c",&ch);
//     if(ch == 'i'){
//         namaste();
//     }
//     else{
//         bonjour();
//     }  
//     return 0 ;
// }
// void namaste(){
//     printf("namaste");
// }
// void bonjour(){
//     printf("bonjour");
// }


// if we want to campare between the user input in the funtion we can use strcmp() function
// #include <stdio.h>
// #include <string.h>
// void greet(char user[]);   // Prototype
// int main()
// {
//     char user[20];
//     printf("Enter your nationality (indian or french): ");
//     scanf("%s", user);
//     greet(user);   // Passing string to function
//     return 0;
// }
// // Definition
// void greet(char user[])
// {
//     if (strcmp(user, "indian") == 0)
//     {
//         printf("Namaste");
//     }
//     else if (strcmp(user, "french") == 0)
//     {
//         printf("Bonjour");
//     }
//     else
//     {
//         printf("Hello");
//     }
// }

//make a funtion of 2 integer taking 
// #include<stdio.h>

// int sum (int a , int b);

// int main(){
//     int a , b ;
//     printf("enter a :");
//     scanf("%d",&a);
//     printf("enter b");
//     scanf("%d",&b);
//     int s = sum(a,b);
//     printf("sum : %d",s);
//     return 0 ;
// }
 
// int sum(int a , int b){
//     return a + b;
// }

// take input make the table of the number 
// #include<stdio.h>

// int sum (int a , int b);
// void printtable(int a);
// int main(){
//     int a  ;
//     printf("enter a :");
//     scanf("%d",&a);
//     printtable(a);
//     return 0 ;
// }
// int sum(int a , int b){
//     return a + b;
// }
// void printtable(int n){
//     for( int i=1; i<=10 ; i++)
//     printf("%d\n" , i*n);
// }

// area of suare , circle , reactangle  
// #include<stdio.h>
// #include<math.h>
// float squareArea(float side);
// float circleArea(float rad);
// float reactangleArea(float a ,float b);
// int main(){
//     float a = 5 ;
//     float b = 4 ;

//     printf("area reactangle :%f " , reactangleArea(a ,b));

//     return 0 ;
// }
// float squareArea(float side){
//     return side*side;
// }
// float circleArea(float rad){
//     return 3.14 * rad * rad;
// }
// float reactangleArea(float a , float b){
//     return a * b ;
// }

// sum of natural num by recursion 

// #include<stdio.h>

// int sum(int n);
// int main(){ 
//     printf("sum is : %d",sum(5));

//       return 0 ;
// }

// int sum(int n){
//     if(n == 1){
//         return 1 ;
//     }
//     int   sumnm1 = sum(n-1);
//     int sumn = sumnm1 + n;
//     return sumn ;
// } 


// factorail of by recursion 
// #include<stdio.h>

// int fact(int n );

// int main(){
//     printf(" fact is: %d",fact(5));
//     return 0 ;
// }

// int fact(int n){
//     if (n==1){
//         return 1 ;
//     }
//     int factfn = fact(n-1);
//     int factn = factfn*n ;
//     return factn ;
// }

// calculate the percentage 
// #include<stdio.h>

// int calcpersentage(int sci , int math , int sans);
// int main() {
//     int sci = 87;
//     int math = 85;
//     int sans = 76 ;
//     printf("the average of the score is : %d",calcpersentage(sci , math , sans)); 

//     return 0 ;
// }

// int calcpersentage(int sci , int math , int sans){
//     return ((sci+math+sans)/3);
// }

// fibonacchi serices 
#include<stdio.h>
int fib(int n);
int main(){
    printf("%d " , fib(6));
    return 0 ;
}
int fib(int n){
  if(n==0){
    return 0 ;
  }
  if(n==1){
    return 1 ;
  }
  int fibn1 = fib(n-1);
  int fibn2 = fib(n-2);
  int fibN = fibn1 + fibn2 ;
  return fibN ;
}