#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,sum;

    printf("Type 3 Angles:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Angles are %d %d %d\n",a,b,c);
    sum=a+b+c;

    if (sum<180 || sum>180){
        printf("Invalid numbers (sum must be 180)");
    }

    else{
        if(a==60&&b==60&&c==60){
            printf("It is an Equilateral Triangle.");
        }
        else if((a==b)|| (a==c)|| (b==c)){
            printf("It is an Isosceles Triangle.");
        }
        else{
            printf("It is an Scalene Triangle");
        }
    }

    return 0;
}
