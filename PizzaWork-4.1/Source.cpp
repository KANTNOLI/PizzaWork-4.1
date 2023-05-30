#include <iostream>

using namespace std;


//������� ������� FillStr(S, N) ���������� ����, ������������ ������ ����� N,
//����������� �������������� ������� ������ - ������� S(��������� �����
//c����� - ������� ����� ������� � �������������� ������ ��������).���������
//��� �������, ������������ �� ������� ����� N � ���� ������ ��������������� ���� �������������� ����� ����� N.

string FillStr(string mainString, int size) {
	string msg = "";
	int sizeMain = 0;
	for (sizeMain = 0; sizeMain < mainString[sizeMain]; sizeMain++);
	int remainder = size % sizeMain; // 10 % 3 = 1
	int count = size / sizeMain; // 10 / 3 = 3 

	for (int i = 0; i < count; i++) {
		msg += mainString;
	}

	for (int i = 0; i < remainder; i++) {
		msg += mainString[i];
	}

	return msg;
}

int main() {
	string str1 = "abasc/";
	string str2 = "vasf/";
	string str3 = "qds/";
	string str4 = "ii/";
	string str5 = "c/";

	cout << FillStr(str1, 10) << endl;
	cout << FillStr(str2, 10) << endl;
	cout << FillStr(str3, 10) << endl;
	cout << FillStr(str4, 10) << endl;
	cout << FillStr(str5, 10) << endl;
	
	return 0;
}