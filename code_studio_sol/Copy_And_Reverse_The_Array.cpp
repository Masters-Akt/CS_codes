vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.
    vector<int> copy_arr(n);
    for(int i=0;i<n;i++){
		copy_arr[n-i-1] = arr[i];
    }
    return copy_arr;
}	