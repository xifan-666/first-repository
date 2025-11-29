#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>  
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
 float a,b,t;
 scanf("%f,%f"&a,&b);
 if(a>b){
    t=a;
    a=b;
    b=t;
 }
 printf("%5.2f,%5.2f",a,b)
}