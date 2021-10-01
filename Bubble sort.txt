// C++ program for the above approach
#include<bits/stdc++.h>
using namespace std;

// Function to implement bubble
// sort without using loops
vector<int> bubble_sort(vector<int> ar)
{

// Base Case: If array
// contains a single element
if (ar.size() <= 1)
	return ar;

// Base Case: If array
// contains two elements
if (ar.size() == 2){
	if(ar[0] < ar[1])
	return ar;
	else
	return {ar[1], ar[0]};
}

// Store the first two elements
// of the list in variables a and b
int a = ar[0];
int b = ar[1];

// Store remaining elements
// in the list bs
vector<int> bs;
for(int i = 2; i < ar.size(); i++)
	bs.push_back(ar[i]);

// Store the list after
// each recursive call
vector<int> res;

// If a < b
if (a < b){
	vector<int> temp1;
	temp1.push_back(b);
	for(int i = 0; i < bs.size(); i++)
	temp1.push_back(bs[i]);
	vector<int> v = bubble_sort(temp1);
	v.insert(v.begin(), a);
	res = v;
}

// Otherwise, if b >= a
else{
	vector<int> temp1;
	temp1.push_back(a);
	for(int i = 0; i < bs.size(); i++)
	temp1.push_back(bs[i]);
	vector<int> v = bubble_sort(temp1);
	v.insert(v.begin(), b);
	res = v;
}

// Recursively call for the list
// less than the last element and
// and return the newly formed list
vector<int> pass;
for(int i = 0; i < res.size() - 1; i++)
	pass.push_back(res[i]);

vector<int> ans = bubble_sort(pass);
ans.push_back(res[res.size() - 1]);
return ans;

}

// Driver Code
int main()
{

vector<int> arr{1, 3, 4, 5, 6, 2};
vector<int> res = bubble_sort(arr);

// Print the array
for(int i = 0; i < res.size(); i++)
	cout << res[i] << " ";
}


