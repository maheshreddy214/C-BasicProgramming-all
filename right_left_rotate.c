#include<stdio.h>
void right_left_rotate(int pos, int a[],int n){
    int i,j,temp,choice;
    printf("Enter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            for(i=0;i<pos;i++){
                temp=a[n-1];
            for(j=n-1;j>=0;j--){
                a[j]=a[j-1];
            }
            a[0]=temp;
            }
            printf("Right Rotate Array Elements:");
            for(i=0;i<n;i++){
            printf("%d ",a[i]);
            }
        break;
        case 2:
            for(i=0;i<pos;i++){
                temp=a[0];
                for(j=0;j<n;j++){
                    a[j]=a[j+1];
                }
                a[n-1]=temp;
            }
            printf("Left Rotate Array Elements:");
            for(i=0;i<n;i++){
                printf("%d ",a[i]);
            }
        break;    
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int pos;
    printf("Enter position:");
    scanf("%d",&pos);
    right_left_rotate(pos,a,n);
    
    return 0;
    
}