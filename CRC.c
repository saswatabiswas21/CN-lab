#include<stdio.h>
#include<string.h>
int main(){
	int dl,kl,i,j;
	char dw[100],key[100],dw1[100];
	printf("Enter the dataword:: ");
	scanf("%s",&dw);
	printf("\nEnter the divisor:: ");
	scanf("%s",&key);
	dl=strlen(dw);
	kl=strlen(key);
	//zero padding
	for(i=0;i<(kl-1);i++){
		dw[dl+i]='0';
	}
	dw[dl+i]='\0';
	printf("\nThe updated codeword is::%s",dw);
	strcpy(dw1,dw);
	//calculation
	for(i=0;i<dl;i++){
		if(dw1[i]=='1'){
			for(j=0;j<kl;j++){
				if(dw1[i+j]==key[j])
					dw1[i+j]='0';
				else
					dw1[i+j]='1';
			}
		}
	}
	printf("\nCRC bit is:: ");
	for(i=dl;i<dl+(kl-1);i++){
		printf("%c",dw1[i]);
	}
}
