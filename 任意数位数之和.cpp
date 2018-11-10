/*或者位数用从后往前的方法来计算，老师的方法 
ex：  
各个位置的数=x%10
x=x/10 
*/ 
#include <iostream> 
#include <cmath>
using namespace std;
int f(int n,int t)
{
	cout<<"weishuwei:"<<t<<endl;
	int wei,last,sum,avg;//wei为最高项，通过循环一一取出
	sum=0,wei=0,last=0;
	avg=n;
	while(t>0)
	{
     wei=avg/pow(10,t-1);
	 sum+=wei;
	 cout<<wei<<'\t';
	 avg=avg-wei*pow(10,t-1) ;
	   t--;	  
	} 
	cout<<"sum="<<sum;
}
int main()
{
	int a,i,test,t; 
	cin>>a;
	//判断输入的数字是几位数，i即为位数 
	test=a;
	while (test!=0)
	{
		test=test/10;
		i++;
	 } 
    t=i;
	f(a,t);
}
/*1000/10=100
  100/10=10
  10/10=1
  1/10=0.1
*/
