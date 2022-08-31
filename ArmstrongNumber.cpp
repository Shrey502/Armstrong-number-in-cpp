#include<iostream>
#include<cmath>
using namespace std;
class ArmastrongNum
{
	private:
	int n;
	public:
	void  setInput(int num)
	{
       n=num;
	}
	int count(){
		int c=0;
		while(n!=0){
		n=n/10;
		c++;
		}
		return c;
	}
	int  isArmstrong()
	{
		int temp=n;
		int s=0;
		int c=count();
		int rem;
	while(n>0){
		rem=rem%10;
		s=s+pow(rem,c);
		n/=10;
	}
	if(s==temp){
		cout<<temp<<" is amstrong number";
	}
	else{
		cout<<temp<<" is not amstrong number";
	}
}
};
int main(){
	ArmastrongNum n1;
	int n;
	cout<<"Enter a number :";
	cin>>n;
	n1.setInput(n);
	n1.isArmstrong();
	return 0;
}
