
//condition
//#include <stdio.h>
//int main(){
    //int  num ;
    //scanf("%d" ,&num);
    //printf("%d", num % 2 == 0 );
    //return 0 ;
//}

    
// ternerry operator imp 


//swtich
#include<stdio.h>
int main(){
    int day ;
    printf("enter the number (1-7):");
    scanf("%d",&day);
    switch (day)
    {
    case 1 : printf("monday");
        break;  
    case 2 : printf("tuesday");
        break;
    case 3 : printf("wednesday");
        break;        
    case 4 : printf("thursday");
        break;    
    case 5 : printf("friday");
        break;    
    case 6 : printf("saturday");
        break;    
    case 7 : printf("sunday");
        break;
    default: printf("wrong selection");
        break;
    }
    return 0 ;
}
