#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i, n, temp, num[100], desnum[100];
	int j, k, l;
    printf("\nTong so gia tri can so sanh la : ");
    scanf("%d", &l);
    for(n=0;n<l;n++)
    {
    	printf("\nNhap vao cac gia tri cua mang : ");
    	scanf("%d", &num[n]);
	}
	for(k=0;k<l;k++)
	{
		desnum[k]=num[k];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(desnum[i]<desnum[j])
		{
		temp = desnum[i];
		desnum[i]=desnum[j];
		desnum[j]=temp;
	    }
	    }
	}
	for(i=0;i<n;i++)
	printf("\nGia tri thu [%d] la : %d", i, desnum[i]);
}
