//no. of trailing zeroes in factorial
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int findZeroes(ll n){

	int ans = 0, p =5;
	while((n/p)>0){
		ans +=(n/p);
		p *= 5;
	}

	return ans;

}

int main(){
	ll n; 
	cin>>n;

	cout<<findZeroes(n);

	return 0;
}
