#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	void conver(char *sPtr);
	
int main(int argc, char *argv[]) {
    char string[]="This is my homework2 !";
    printf("The string before conversion is: %s \n",string) ;
    conver(string);
    printf("next : %s\n",string);
	return 0;
}

void conver(char *sPtr)
{ while (*sPtr != '\0' )
 {
  *sPtr =toupper(*sPtr);
  ++sPtr;
 }
 } 
