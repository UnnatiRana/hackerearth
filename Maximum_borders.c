#include <stdio.h>

int main(){
	int row, column, testcases, shapecount, totalcount;
	char shape[1000];

	scanf("%d",&testcases);

	while(testcases > 0)
	{
		scanf("%d %d",&row,&column);
		while(row>0)
		{
			scanf("%s",&shape);
			for(int i=0;i<column;i++)
			{
				if(shape[i]=='#')
				{
					shapecount++;
				}
			}
			if(shapecount>totalcount)
			{
				totalcount=shapecount;
			}
			shapecount=0;
			row--;
		} 
		printf("%d\n",totalcount);
		totalcount=0;
		testcases--;
	}
}
