#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];
void merge(int left, int right, int mid){
	int left_size=mid-left+1;
	int right_size=right-mid;
	int left_array[left_size+1];
	int right_array[right_size+1];
	for(int i=0; i<left_size; i++){
		left_array[i]=a[i+left];
	}
	for(int i=0; i<right_size; i++){
		right_array[i]=a[i+mid+1];
	}
	left_array[left_size]=right_array[right_size]=INT_MAX;
	int left_i=0;
	int right_i=0;
	for(int i=left; i<=right; i++){
		if(left_array[left_i]<=right_array[right_i]){
			a[i]=left_array[left_i];
			left_i++;
		}else{
			a[i]=right_array[right_i];
			right_i++;
		}
	}
}
void mergesort(int left, int right){
	if(left==right) return;
	int mid=(left+right)/2;
	mergesort(left, mid);
	mergesort(mid+1, right);
	merge(left, right, mid);
}
int main(){

    int n;
	cin>>n;
	//int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	mergesort(0,n-1);
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;

}
