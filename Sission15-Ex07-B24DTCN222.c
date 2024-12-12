#include<stdio.h>
void count(char string[]){
	int alphabet=0;
	int num=0;
	int specialCharacters=0;
	for(int i=0;string[i] !='\0';i++){
		if((string[i] >='A'&&string[i] <='Z') || (string[i] >='a'&&string[i] <='z')){
			alphabet++;
		}else if((string[i] >='0'&&string[i] <='9')){
			num++;
		}else if(string[i]!= ' '&& string[i]!='\n'){
			specialCharacters++;
		}
	}
	printf("quatity characters is alphabet:%d\n",alphabet);
	printf("quatity characters is number:%d\n",num);
	printf("quatity special characters :%d\n",specialCharacters);
	
}

int main(){
	char string[100];
	printf("please enter any string ");
	fgets(string,100,stdin);
	count(string);
	return 0;
}
