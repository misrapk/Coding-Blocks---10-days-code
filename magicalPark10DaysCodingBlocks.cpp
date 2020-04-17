//magical park coding blocks 10days code
#include<bits/stdc++.h>
using namespace std;


void magical_park(char a[][100], int m, int n, int k, int s){
	//man can get out of park
	bool success = true;

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			char ch = a[i][j];


			//check for strength
			if(s<k){
				success = false;
				break;
				
			}
			//case1: if "*"
			if(ch == '*'){
				s +=5;
			}
			else if(ch == '.')
				s -=2;
			else      //if # then break
				break;

			//we also loose one point when we move right
			//excpt for last column
			if(j != n-1)
				s--;
		}
	}
	if(success){
		cout<<"Yes"<<endl;
		cout<<s<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}

int main(){
	int n, m, s,k;
	cin>>m>>n>>s>>k;

	char park[100][100];
	for(int i =0; i<m; i++){
		for(int j =0; j<n; j++){
			cin>> park[i][j];
		}
	}
	magical_park(park, m,n,k,s);

	return 0;
}
