#include<iostream>
using namespace std;

int fib(int x)
{
	if((x==1)||(x==0))
	{
		return x;
	}
	else
		return (fib(x-1)+fib(x-2));
}
int main()
{
	int num,i=0;
	cout<<"enter the number of terms of series"<<endl;
	cin>>num;
	cout<<"The fibonacci series is:"<<endl;
	while(i<num)
	{
		cout<<" "<<fib(i);
		i++;
	}
	return 0;

}