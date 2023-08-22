#include<iostream>
using namespace std;
class rectangle{
	public:
		int len,breadth;
		int area(int a,int b)
		{
			return a*b;
		}
		int perimeter(int a,int b)
		{
			return 2*(a+b);
		}
};
int main()
{
	int a,b;
	cin>>a>>b;
	rectangle cs;
	cout<<"area: "<<cs.area(a,b)<<" "<<"perimeter: "<<cs.perimeter(a,b)<<endl;
}
