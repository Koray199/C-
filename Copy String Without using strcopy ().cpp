#include<stdio.h>
int main () {
	
	char s1[100],s2[100];
	printf("Enter string s1: ");
	
	fgets(s1,sizeof(s1),stdin);
	
	for(int i=0;s1[i]!='\n';i++){
		s2[i]=s1[i];
	}
	
	
	printf("String s2 = %s",s2);
	
	
	
	
	
	
	
	
}
