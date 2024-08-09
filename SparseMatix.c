#include<stdio.h>
void main(){
	int row,col,i,j,k=1,count=0,t=1;
	printf("Enter the number of rows of matrix: ");
	scanf("%d",&row);
	printf("Enter the number of columns of matrix: ");
	scanf("%d",&col);
	int mat[row][col];
	printf("Enter the elements of the matrix\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Sparse Matrix:\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(mat[i][j]!=0){
				count++;
			}
		}
	}
	int table[count+1][3];
	table[0][0]=row;
	table[0][1]=col;
	table[0][2]=count;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(mat[i][j]!=0){
				table[k][0]=i;
				table[k][1]=j;
				table[k][2]=mat[i][j];
				k++;
			}
		}
	}
	printf("Rows\tColumns\tValue\n");
	for(i=0; i<count+1; i++){
		printf("%d\t%d\t%d\n",table[i][0],table[i][1],table[i][2]);

	}
}
