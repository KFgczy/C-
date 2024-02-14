#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
void test() {
	fstream fs;
	//char a[10] = "ieasdf";
	fs.open("D:\\Code\\codes\\hello.txt", ios::out | ios::binary);
	//fs.write("ieasdf", sizeof("ieasdf"));
	fs.read((char*)&"ieasdf", 10);
	cout << (char*)&"ieasdf" << endl;
	fs.close();
	//ifstream ifs;
	//ifs.open("D:\\Code\\codes\\hello.txt", ios::in);
	//if (ifs.is_open()) {
	//	cout << "OK" << endl;
	//}
	//else {
	//	cout << "NO" << endl;
	//	return;
	//}
	///*string str;
	//while (ifs >> str) {
	//	cout << str << endl;
	//}
	//cout << "+++++++++++++++++++++++++++++++++++" << endl;
	//char str1[1024] = { 0 };
	//int a = 5;
	//while (ifs.getline(str1, sizeof(str1))) {
	//	cout << str1 << endl;
	//}*/
	///*string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}
	//ifs.close();*/
	//char c;
	//while ((c = ifs.get()) != EOF) {//end of file
	//	cout << c << endl;
	//}
	/*ofstream ofs;
	ofs.open("D:\\Code\\codes\\test.txt", ios::out);
	ofs << "hello" << endl;
	ofs.close();*/
}
int main() {
	test();
	return 0;
}