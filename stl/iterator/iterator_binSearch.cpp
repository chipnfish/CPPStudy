//用迭代器完成二分查找
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//输入有序字符串text和要查找的字符x 
	string text;
	char x;
	cin >> text >> x;
		
	auto low = text.begin();
	auto high = text.end()-1;
	auto mid = text.begin()+(high-low)/2; //iterator不能相加，只能相减 
	while(low<=high){
		if(*mid==x)	return *mid;
		else if(*mid<x)	low = mid+1;
		else high = mid-1;
		mid = low+(high-low)/2;
	}
	
	return 0;	
} 
