#include<stdio.h>
void count(char string[]){
	int count=0;
	for(int i=0;string[i] !='\0';i++){
		if(string[i]!= ' '&& string[i]!='\n'){
			count++;
		}
	}
	printf("quatity characters in string:%d",count);
}

int main(){
	char string[100];
	printf("please enter any string ");
	fgets(string,100,stdin);
	count(string);
	return 0;
}
