#include <iostream>
#include <string>

std::string xorCipher(const std::string& data, char key) {
	std::string result = data;

	for (char& c : result) {
		c = c ^ key;
	}

	return result;
}

int main() {
	std::string plainText = "HELLO";
	char key = 'K';

	std::string encrypted = xorCipher(plainText, key);
	std::string decrypted = xorCipher(encrypted, key);

	std::cout << "Plain	  : " << plainText << '\n';

	std::cout << "Encrypted : ";
	for (unsigned char c : encrypted) {
		std::cout << std::hex
				  << static_cast<int>(c)
				  << ' ';
	}

	std::cout << "\nDecrypted : " << decrypted << '\n';
	return 0;
}
