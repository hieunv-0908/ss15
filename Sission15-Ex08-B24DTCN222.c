#include <stdio.h>

int main() {
    char string[100];
    printf("please enter any string\n");
    fgets(string,100,stdin);
    int lenght = strlen(string);
    for(int i=0;i<lenght;i++){
    	if(i==0||string[i-1]==' '){
    		if(string[i]>='a'&&string[i]<='z'){
    			string[i]=toupper(string[i]);
			}
		}
	}
	printf("%s",string);
    return 0;
}
