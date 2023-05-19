#include<stdio.h>
#include<string.h>
int main(){
    char dw[100],o[10]={'1'},z[10]={'0'};
    int num,c=0,i;
    printf("Enter the dataword:: ");
    scanf("%s",&dw);
    printf("\nEnter the choice(even parity=1/odd parity=2):: ");
    scanf("%d",&num);
    for(i=0;i<strlen(dw);i++){
        if(dw[i]=='1')
            c++;
    }
    switch(num){
        case 1:
            if(c%2==0){
                strcat(dw,z);
                printf("\nThe new dataword is:: %s",dw);
                break;
            }
            else {
                strcat(dw,o);
                printf("\nThe new dataword is:: %s",dw);
                break;
            }
           // printf("\nThe new dataword is:: %s",dw);
        case 2:
            if(c%2==0){
                strcat(dw,o);
                printf("\nThe new dataword is:: %s",dw);
                break;
            }
            else{
                strcat(dw,z);
                printf("\nThe new dataword is:: %s",dw);
                break;
            }
           // printf("\nThe new dataword is:: %s",dw);
    }
}
