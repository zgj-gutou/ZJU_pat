/*
1002. 写出这个数 (20)

时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
 */
#include<iostream>
using namespace std;
#include<string>

int main(){

	int m;
	int sum = 0;
	string str;
	string str_p;
	string num[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string str_out = "";

	cin>>str;

	char *p = &str[0];   //p为str[0]的地址，这样后面可以直接逐个访问整个字符串的每个字符

	while(*p != '\0'){
		str_p = *p;

		m = atoi(str_p.c_str());  //把每个char字符转换成int整数
		
		//cout << m <<endl;
		sum = sum + m;
		p++;
		//cout << sum <<endl;
	}
	//cout << sum <<endl;

	str = to_string(sum);  //把和转换成string字符串
	p = &str[0];

	while(*p != '\0'){
		str_p = *p;
		m = atoi(str_p.c_str());	//把字符转换成int整数
		str_out = str_out + num[m];  //根据m查找数组中对应的字符串，并连接
		p++;
		if(*p != '\0'){
			str_out = str_out + " ";  
		}
	}

	cout << str_out;
	return 0;
}