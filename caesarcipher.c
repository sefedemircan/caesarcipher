#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	printf("---Caesar Cipher---\n\n");
	
	char text[20], enctext[20];
	int key=0, i=0;
	char e;
	
	printf("Enter the text: ");
	scanf("%s",&text);
	
	printf("Enter the key: ");
	scanf("%d",&key);
	
	while(i < strlen(text)){
		e = text[i];
		enctext[i] = char(int(e)+key);
		i++;
	}
	
	printf("Encrypted Text: %s\n\n",enctext);
	printf(" Linkedin: Sadık Efecan Demircan\n Instagram: sefedemircan\n Twitter: sedemircan\n");
	
	
	return 0;
	
}
