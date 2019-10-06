#include <bits/stdc++.h>
using namespace std;
	
int binarySearch(int* arr, int low, int high, int target){

	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] == target){
			return mid;
		}
		else if(arr[mid]<target){
			low = mid+1;
		}
		else{
			high = mid-1;
		}

	}
	return -1;
}


int main(int argc, char const *argv[])
{
	int arr[8] = {1,4, 5, 18, 20, 200, 500, 1880};
	int result = binarySearch(arr, 0, 7, 200);
	cout<<result<<endl;
	return 0;
}