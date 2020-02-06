//输入一个字符串，将字符串第一个空格前的内容置为大写 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s); //读取一整行
//	cin << s;       //读取内容，但以空格作为分隔  因此本题不可用cin来输入s的值 
	for(auto it = s.begin(); it!=s.end() && !isspace(*it); it++)
//	for(string::iterator it = s.begin(); it!=s.end() && !isspace(*it); it++)
		*it = toupper(*it);
	cout << s;
	
	return 0;
}
