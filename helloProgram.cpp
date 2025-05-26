/*---------hello world--------*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void filterEven(vector<int>&arr)
{
	if(arr.empty())
	{
		cout<<"vector is empty"<<endl;
	}
	arr.erase(remove_if(arr.begin(), arr.end(), [](int n){ return n%2 != 0; } ), arr.end());
}
void print(vector<int>&arr)
{
	for(auto it : arr)
        {
                cout<<it<<" ";
        }
	cout<<endl;
}
int main()
{
	cout<<"HELLO WORLD"<<endl;
	//vector input
	vector<int>vec_even = {1, 2, 3, 4, 5, 6};
	cout<<"input: ";
	print(vec_even);
	//filter even nums from vector
	filterEven(vec_even);
	cout<<"filtered even: ";
	print(vec_even);
	return 0;
}
