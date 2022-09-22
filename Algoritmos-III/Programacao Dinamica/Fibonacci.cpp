#include <iostream>

using namespace std;

int pd[10000];

int solve (int n){
	
	if(n == 1)
		return 1;
	else if(n ==0)
		return 1;
	
	if(pd[n] != -1)
		return pd[n];
	
	pd[n] = solve(n-1) + solve(n-2); 
	
	return pd[n];
}


int main()
{
	int n;
	cin >> n;
	for(int i = 0; i<=n; i++){
		pd[i] = -1;
	}
	
	cout << solve(n) << endl;
	
	
	return 0;
}