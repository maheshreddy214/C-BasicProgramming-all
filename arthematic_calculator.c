#include<stdio.h>
void arthematic_calculator(int a,int b){
    int choice,c;
    printf("Enter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            c=a+b;
            printf("Addition of two numbers:%d",c);
            break;
        case 2:
            c=a-b;
            printf("Substraction of two numbers:%d",c);
            break;
        case 3:
            c=a*b;
            printf("Multiplication of two numbers:%d",c);
            break;
        case 4:
            c=a/b;
            printf("Division of two numbers:%d",c);
            break;
    }
}
int main(){
    int a,b;
    printf("Enter two variable:");
    scanf("%d %d",&a,&b);
    arthematic_calculator(a,b);
    return 0;
}