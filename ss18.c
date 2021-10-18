#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i, j;
	char temp[25];
	char str_arr[5][20], str[20];
	for(i=0;i<5;i++)
	{
		printf("\nNhap vao mot chuoi : ");
		scanf("%s", str_arr[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strlen(str_arr[i])<strlen(str_arr[j]))
			{
			strcpy(temp, str_arr[i]);
			strcpy(str_arr[i], str_arr[j]);
			strcpy(str_arr[j], temp);
		    }
		}
	}
	printf("\nChuoi sau khi sap xep la : ");
	for(i=0;i<5;i++)
	{
		printf("\nChuoi thu %d la : %s", i, str_arr[i]);
	}
}
