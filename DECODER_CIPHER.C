#include<stdio.h>
#include<string.h>
#define MAX 200
int main(){
	char plain[MAX];
	int k,i=0,j=0,rem;
	char cipher[MAX];
	printf("Enter the string you want to decode: ");
	gets(plain);
	printf("\nEnter the value of k: ");
	scanf("%d",&k);
	rem=k%26;
	int length=strlen(plain);
	while(plain[i]!='\0'){
		if((int)(plain[i])<65 || (int)(plain[i])>123){
			cipher[j]=(int)(plain[i]);
		}
		if((int)(plain[i])>=65 && (int)(plain[i])<=90){
			if((int)(plain[i])-rem<90){
				cipher[j]=(int)(plain[i])-rem+26;
			}
			else{
				cipher[j]=(int)(plain[i])-rem;
			}
		}
		if((int)(plain[i])<=122 && (int)(plain[i])>=97){
			if((int)(plain[i])-rem<97){
				cipher[j]=(int)(plain[i])-rem+26;
			}
			else{
				cipher[j]=(int)(plain[i])-rem;
			}	
		}
//			cipher[j]=(int)(plain[i])+rem;
		i++;
		j++;
		
	}
	cipher[j]='\0';
	printf("%s\n",plain);
	printf("%s\n",cipher);
	return 0;
}
