#include<iostream>

using namespace std;

int main(){
	int n,j,i,temp;
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i];
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << arr[i] ;
	}	
		
	return 0;
}
