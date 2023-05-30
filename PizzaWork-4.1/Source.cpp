#include <iostream>

using namespace std;


//—оздать функцию FillStr(S, N) строкового типа, возвращающую строку длины N,
//заполненную повтор€ющимис€ копи€ми строки - шаблона S(последн€€ копи€
//cтроки - шаблона может входить в результирующую строку частично).»спользу€
//эту функцию, сформировать по данному числу N и п€ти данным строкамшаблонам п€ть результирующих строк длины N.

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