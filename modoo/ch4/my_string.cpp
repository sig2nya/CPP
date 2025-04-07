#include <iostream>
#include <string.h>

class MyString {
	char *string_content;
	int string_length;

	public:
		MyString(char c);
		MyString(const char *str);
		MyString(const MyString &str);
		~MyString();

		int length() const;
		void print();
};

MyString::MyString(char c) {
	string_content = new char[1];
	string_content[0] = c;
	string_length = 1;
}

MyString::MyString(const char *str) {
	string_length = strlen(str);
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++) string_content[i] = str[i];
}

MyString::MyString(const MyString& str) {
	string_length = str.string_length;
	for (int i = 0; i != string_length; i++) {
		string_content[i] = str.string_content[i];
	}
}

MyString::~MyString() {
	delete[] string_content;
}

int MyString::length() const {
	return string_length;
}

void MyString::print() {
	for (int i = 0; i != string_length; i++) {
		std::cout << string_content[i];
	}
}

int main() {
	MyString str1("hello world!");
	MyString str2(str1);

	str1.print();
	std::cout << std::endl;
	str2.print();
	std::cout << std::endl;
	return 0;
}
