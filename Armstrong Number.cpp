#include<iostream>
#include<cmath>
using namespace std;
class prog
{
	public:int n,t,s=0,temp,c=0,temp1;
	void input()
	{
	cout<<"Enter an integer";
	cin>>n;
	temp=n;
	temp1=n;
	}
	void counter(){
		while(n!=0){
		n=n/10;
		c++;
	}
	}
	void armstrong()
	{
	while(temp1>0){
		t=temp1%10;
		s=s+pow(t,c);
		temp1=temp1/10;
	}
	if(s==temp){
		cout<<temp<<" \n\nthis number is amstrong number";
	}
	else{
		cout<<temp<<" \n\nthis number is not amstrong number";
	}
}
};
int main(){
	prog obj;
	obj.input();
	obj.counter();
	obj.armstrong();
}
