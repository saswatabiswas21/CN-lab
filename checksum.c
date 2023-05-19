#include<stdio.h>
#include<string.h>
int main(){
    int sl,i,c,p,j,s,k;
    char dw[100],dw1[100],sum[100];
    printf("Enter the dataword:: ");
    scanf("%s",&dw);
    k: printf("\nEnter the segmentlength:: ");
    scanf("%d",&sl);
    if((sl&(sl-1))!=0)
        goto k;
    int n=strlen(dw);
    int a=n%sl;
    if(a!=0){//zeropadding
        for(i=0;i<(sl-a);i++){
            dw1[i]='0';
        }
        dw1[i]='\0';
        strcat(dw1,dw);
    }
    else{
        strcpy(dw1,dw);
    }
    printf("\nNew dataword is:: %s",dw1);
    //Taking a null string for calculation
    for(i=0;i<sl;i++){
        sum[i]='0';
    }
    sum[i]='\0';
    printf("\n%s",sum);
    //calculation
    for(i=0;i<strlen(dw1);i+=sl){
        c=0;
        p=sl-1;
        for(j=i+sl-1;j>=i;j--){
            s=(dw1[j]-48)+(sum[p]-48)+c;
            sum[p]=(char)((s%2)+48);
            c=s/2;
            p--;
        }
        if(c==1){
            for(k=sl-1;k>=0;k--){
                s=(sum[k]-48)+c;
                sum[k]=(char)((s%2)+48);
                c=s/2;
            }
        }
    }
    //1's complement
    for(i=0;i<sl;i++){
        sum[i]=='0' ? (sum[i]='1'):(sum[i]='0');
    }
    //printing checksum bit
    printf("\nChecksum bit is:: ");
    for(i=0;i<sl;i++){
        printf("%c",sum[i]);
    }
    strcat(dw1,sum);
    printf("\nThe data word is:: %s",dw1);
}
