//����һ���ַ��������ַ�����һ���ո�ǰ��������Ϊ��д 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s); //��ȡһ����
//	cin << s;       //��ȡ���ݣ����Կո���Ϊ�ָ�  ��˱��ⲻ����cin������s��ֵ 
	for(auto it = s.begin(); it!=s.end() && !isspace(*it); it++)
//	for(string::iterator it = s.begin(); it!=s.end() && !isspace(*it); it++)
		*it = toupper(*it);
	cout << s;
	
	return 0;
}
