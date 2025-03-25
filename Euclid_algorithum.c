#include<stdio.h>
void input(int*) ;
int GCD(int , int) ;
int main(){
    int num1 , num2 , gcd;
    input(&num1) ;
    input(&num2) ;
    gcd = GCD(num1 , num2) ;
    printf("greatest common divisor is: %d ",gcd) ;
    return 0 ;
}
void input(int *num){
    printf("enter the number : ") ;
    scanf("%d",num) ;
}
int GCD(int num1 , int num2 ){
    int a ;
    if(num2 == 0){
        return num1 ;
    }
    else if(num1 == 0){
        return num2 ;
    }
    else if( num1 > num2 ){
        a = num1 % num2 ;
        return GCD( num2 , a) ;
    }
    else if( num2 > num1){
        a = num2 % num1 ;
        return GCD( num1 , a ) ;
    }
    else{
        return num1 ;
    }
}