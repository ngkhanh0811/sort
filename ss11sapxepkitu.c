#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i, n = 0;
	int a;
	char temp[15];
	char x[10][12];
	printf("\nNhap vao cac chuoi : \n\n");
	printf("\nKet thuc bang 'END' \n\n");
	do
	{
		printf("\nChuoi thu %d : ", n+1);
		scanf("%s", x[n]);
	}
	while (strcmp(x[n++], "END"));
	n=n-1;
	for (a=0;a<n-1;a++)
	{
		for(i=a+1;i<n;i++)
		{
			if(strcmp(x[a], x[i])>0);
			{
				strcpy(temp, x[a]);
				strcpy(x[a], x[i]);
				strcpy(x[i], temp);
			}
		}
	}
	printf("\nChuoi sau khi sap xep la : ");
	for(i=0;i<n;i++)
	{
		printf("\nChuoi thu %d la : %s", i, x[i]);
	}
}
