#include<iostream>
using namespace std;

int main()
{
	int n;
	int x = 0;
	cin >> n;
	while(n != 1){
		if(n%2 == 1){
			n = (3*n + 1)/2;
			x++;
		}
		else {
			n = n/2;
			x++;
		}
	}
	cout << x;
	return 0;3
	
}