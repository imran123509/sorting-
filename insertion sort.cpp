#include<bits/stdc++.h>
using namespace std;
/*
choose one element put that element at the correct position it is called insertion sort
*/
void insertion_sort(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; ++i){
		int j=i;
		while(j>0 && a[j]<a[j-1]){
			swap(a[j], a[j-1]);
			j--;
		}
	}
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	
}
int main(){

    insertion_sort();
    return 0;

}
