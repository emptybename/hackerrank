#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[101] = {0};
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		ar[x]++; 
	}
	int count = 0;
	for(int i = 0;i<=100;i++){
		count += ar[i]/2;
	}
	cout<<count<<endl;
}
