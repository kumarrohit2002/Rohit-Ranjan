#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2;
	printf("Enter the row1: ");
	scanf("%d",&r1);
	printf("Enter the column1: ");
	scanf("%d",&c1);
	printf("Enter the row2: ");
	scanf("%d",&r2);
	printf("Enter the column2: ");
	scanf("%d",&c2);
	if(c1==r2){
		printf("Enter the element of matrix1:\n");
		for(int i=0;i<=r1-1;i++){
			for(int j=0;j<=c1-1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the element of matrix2:\n");
		for(int i=0;i<=r2-1;i++){
			for(int j=0;j<=c2-1;j++){
				scanf("%d",&b[i][j]);
			}
		}
		printf("Enter the element of matrix2:\n");
		for(int i=0;i<=r2-1;i++){
			for(int j=0;j<=c2-1;j++){
				c[i][j]=0;
				for(int k=0;k<=c1-1;k++){
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}