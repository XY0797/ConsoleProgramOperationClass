#include "..\..\ConsoleOJ.hpp"
#include <iostream>
#include <thread>
#include <chrono>
ConsoleOJ program(R"(D:\18~20秒.exe)");
ConsoleOJ program1(R"(D:\1.exe)");

using namespace std;

int main() {
	string a;
	string e;
	long long timecst;
	if (program1.launchAndWait("1 100000000000000000\n1 100000000000000000\n"
	                           "1 100000000000000000\n1 100000000000000000\n"
	                           "1 100000000000000000\n1 100000000000000000",
	                           1000, a, timecst, e)) {
		cout << "成功：\n--------------\n" << a << "\n--------------\n"
		     << (timecst / 1000.0) << "秒" << '\n';
	} else {
		cout << "失败：" << e << '\n';
	}
	return 0;
}
