//EENG115 practise: Functions
// design a program using functions which take int input and summarize all integers between input value and 0

#include <stdio.h>
int sum(int num_sum);
int main()
{	
	int num;
	int result;
	printf("please enter a int:\n");
	scanf("%d",&num);
	result=sum(num);
	printf("result:%d",result);
}

int sum(int num_sum)
{
	int cnt;
	int result_sum=0;
	
	for(cnt=0;cnt<=num_sum;cnt++)
		{
			result_sum=cnt+result_sum;
		}
	return (result_sum);
}
