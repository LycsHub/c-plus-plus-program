/*����λ���ôӺ���ǰ�ķ��������㣬��ʦ�ķ��� 
ex��  
����λ�õ���=x%10
x=x/10 
*/ 
#include <iostream> 
#include <cmath>
using namespace std;
int f(int n,int t)
{
	cout<<"weishuwei:"<<t<<endl;
	int wei,last,sum,avg;//weiΪ����ͨ��ѭ��һһȡ��
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
	//�ж�����������Ǽ�λ����i��Ϊλ�� 
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
