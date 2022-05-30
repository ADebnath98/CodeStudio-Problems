void reverseArraysolver(int left, int right, vector<int> &arr)
{
    if(left >= right)
        return;
    swap(arr[left], arr[right]);
    reverseArraysolver(left+1, right-1, arr);
}

void reverseArray(vector<int> &arr , int m)
{
    reverseArraysolver(m+1,arr.size()-1, arr);
	// Write your code here.
}
