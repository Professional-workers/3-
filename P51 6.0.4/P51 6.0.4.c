/*统计素数并求和
本题要求统计给定整数M和N区间内素数的个数并对它求和
输入区间1-500（包含自身）
输出格式：
在一行中顺序输出M和N区间内素数的个数以及他们的总和，数字用空格隔开
思路：*/

#include<stdio.h>
int main()
{
	int M ,N;     //M到N 区间，这个数1-500之间都行      //4 60
	scanf_s("%d %d", &M, &N);
	int i = 0;            //i到N的叠加计数
	int max = 0;           //定义一个整数，意为最大的值
	int sum = 0;    //素数的总和
	int min= 0;    //定义一个整数，意为最小的值
	int j =0;     //计数素数有多少个
	
	if (M < N)             //设定两个值，去比较，最小的是min，最大的是max，这样就不用用户依顺序输入大小
	{
		min = M;
		max = N;

	}
	else 
	{
		min = N;
		max = M;
	}
	for (i =min; i<max; i++)                  //让i从min值走，走到i=max为止，当条件满足时，运行程序，再i++
	{
		int tey = 1;
		for (int k = 2; k < i; k++)            //当k<i时，就执行判断i是不是素数的程序，k++是因为要用所有小于i的数去%i，这样才能判断是不是素数，
			                                   
		{
			if (i % k == 0)                     // 
			{
				tey = 0;     //这时候，他就不是素数
				break;
			}
		}
		if (tey)                    //我们要设定一个条件，当他等于1的时候就是素数，当然，我们得设定一个条件去判断
		{
			j++;                   //如果成立那么就，j+1和sum+=i;
			sum += i;
			printf("素数有 %d \n",i);   //循环内输出，每检测到素数就输出一次
		}

	}
	printf("%d %d", j++, sum);    //循环外输出
} 
