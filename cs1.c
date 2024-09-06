#include <stdio.h>
int main(){
    float a,b,c,d,e;
    printf("cost of the meal: ");
    scanf("%f",&a);
    printf("tax percentage of meal: ");
    scanf("%f",&b);
    c=a+(a*(b/100));
    printf("tip percentage: ");
    scanf("%f",&d);
    e=c+(c*(d/100));
    printf("total cost of the meal is: %.2f",e);
}