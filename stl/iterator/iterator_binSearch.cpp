//�õ�������ɶ��ֲ���
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//���������ַ���text��Ҫ���ҵ��ַ�x 
	string text;
	char x;
	cin >> text >> x;
		
	auto low = text.begin();
	auto high = text.end()-1;
	auto mid = text.begin()+(high-low)/2; //iterator������ӣ�ֻ����� 
	while(low<=high){
		if(*mid==x)	return *mid;
		else if(*mid<x)	low = mid+1;
		else high = mid-1;
		mid = low+(high-low)/2;
	}
	
	return 0;	
} 
