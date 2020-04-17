//ganesha 

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;


	//first component
	cout<<"*";
	for(int i=0; i<(n-3)/2; i++){
		cout<<" ";
	}
	for(int i =0; i<(n+1)/2; i++){
		cout<<"*";
	}
	cout<<"\n";
	//second component
	for(int j=0; j<(n-3)/2; j++){
	
		cout<<"*";
		for(int i=0; i<(n-3)/2; i++){
			cout<<" ";
		}
		cout<<"*";
		cout<<"\n";
	}

	//third component
//	cout<<"\n";
	for(int i=0; i<n; i++){
		cout<<"*";
	}
	cout<<"\n";

	//fourth component
	for(int j =0; j<(n-3)/2; j++){
	
		for(int i=0; i<=(n-3)/2; i++){
			cout<<" ";
		}
		cout<<"*";
		for(int i=0; i<(n-3)/2; i++){
			cout<<" ";
		}
		cout<<"*";
		cout<<"\n";
	}

	//fift component
	
	for(int i =0; i<(n+1)/2; i++){
		cout<<"*";
	}
	for(int i=0; i<(n-3)/2; i++){
		cout<<" ";
	}
	cout<<"*";

	return 0;
}
