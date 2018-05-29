#include <stdio.h>
#include <stdlib.h>


void bubblesore(int a,int y )
{

    int number[2] = {y,a};
    int i = 0, j = 0;
    int temp = 0;

    for( i = 0; i < 2; i++) {
        for( j = i; j < 1; j++) {
            if( number[j] < number[i] ) 
			{
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }
     printf("±Æ§Ç"); 
    for( i = 0; i < 2; i++ ) {
        printf(" %d ", number[i]);
    }
}
