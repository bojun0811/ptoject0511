#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
 void bubblesore(int t,int p );
int main(int argc, char *argv[]) {

int x=5;
int y,p,t;
const int *const ptr=&x;
printf("%d\n",&ptr);
//*ptr=7;
//ptr=&y;

printf("%d\n",&x);
p=&ptr;
t=&x;
bubblesore( t, p );
//printf("%d\n",new);
return 0;
} 
