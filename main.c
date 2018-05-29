#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	void printcharacters(const char *sPtr);
int main(int argc, char *argv[]) {



 char string[]="My homework!";
puts("The string is:");
printcharacters(string);
puts("");
return 0;
}

void printcharacters(const char *sPtr)
{ 
  for(;*sPtr!= '\0';++sPtr)
  {  printf("%c",*sPtr);
  }

}
