#include<iostream>
#include<algorithm>
using namespace std;
int search(int ar[],int low, int high, int item){
	int mid;
	while(low<=high){
		mid = (low+high)/2;
		if(ar[mid] > item)high = mid -1;
		else if(ar[mid] < item)low = mid+1;
		else return mid;
	}
	return high;
}
int main(){
	int s,n,m;
	cin>>s>>n>>m;
	int ar[n], br[m];
	for(int i = 0; i<n;i++)cin>>ar[i];
	for(int i = 0; i<m;i++)cin>>br[i];
	sort(ar, ar+n);
	sort(br, br+m);
	if(ar[0]+br[0] > s)cout<<"-1"<<endl;
	else{
		int max = -1;
		for(int i = 0;i<n;i++){
			if(s - ar[i] >= br[0] ){
				int index = search(br, 0, m-1, s-ar[i]);
				if(max < ar[i] + br[index])max = ar[i] + br[index];
			}
		}
		cout<<max<<endl;
	}

}
