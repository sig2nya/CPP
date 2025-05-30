#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1("He");
	string s2("He");
	string s3("He");
	string s4("He");
	string s5("He");
	string s6("He");
	string s7("He");
	string s8("He");
	string s9("He");
	string s10("He");

	string t("llo!");
	const char* p1 = "llo!";
	const char* p2 = p1 + 4;

	s1.append(t);
	s2.append(t, 0, 4);
	s3.append("llo!");
	s4.append("llo!", 4);
	s5.append(t.begin(), t.end());
	s6.append(p1, p2);
	s7.append(5, 'H');
	s8 += t;
	s9 += "llo!";

	for (string::iterator iter=t.begin(); iter != t.end(); ++iter) {
		s10.push_back(*iter);
	}

	cout << "s1.append(s) : " << s1 << endl;
	cout << "s2.append(s) : " << s2 << endl;
	cout << "s3.append(s) : " << s3 << endl;
	cout << "s4.append(s) : " << s4 << endl;
	cout << "s5.append(s) : " << s5 << endl;
	cout << "s6.append(s) : " << s6 << endl;
	cout << "s7.append(s) : " << s7 << endl;
	cout << "s8.append(s) : " << s8 << endl;
	cout << "s9.append(s) : " << s9 << endl;
	cout << "s10.append(s) : " << s10 << endl;

	return 0;
}
