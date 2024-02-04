#include<iostream>
using namespace std;
/*
数组
放在一块连续的内存空间
数组中每个元素都是相同的数据类型
*/
int main5() {
	int a[] = { 0,1,2,3,4,5,6 };
	for (int i = 0; i < 7; i++) {
		cout << a[i] << endl;
	}
	cout << sizeof(a) << endl;
	cout << sizeof(a[0]) << endl;
	cout << (int)a << endl;
	cout << &a << endl;
	cout << "五只小猪称体重" << endl;
	int arr[] = { 300,350,200,400,250,600,700,1203,652};
	int max = 0;
	for (int i = 0; i <sizeof(arr)/4; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max << endl;
	cout << "数组元素逆置" << endl;
	int arr1[] = { 1,3,2,5,4 };
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << ",";
	}
	int start = 0;
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1;
	int m = 0;
	while (start <end) {
		m = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = m;
		start++;
		end--;
	}
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << ",";
	}
	cout << "冒泡排序" << endl;
	int arr2[] = {4,2,8,0,5,7,1,3,9};
	int leng = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i <leng-1; i++) {
		for (int j = 0; j < leng - i-1; j++) {
			int m = 0;
			if (arr2[j] > arr2[j+1]) {
				m = arr2[j + 1];
				arr2[j + 1] = arr2[j];
				arr2[j] = m;
			}
		}
		
	}
	for (int m = 0; m < 9; m++) {
		cout << arr2[m] << ",";
	}
	cout << "二维数组" << endl;
	//int a[2][3];

	system("pause");
	return 0;
}