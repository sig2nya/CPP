#include <iostream>
#include <cstdio>
#include <stdexcept>

class FileHandler {
	private:
		FILE* fp;

	public:
		FileHandler(const char* filename) {
			fp = fopen(filename, "r");

			if (!fp) throw std::runtime_error("File Open Fail");

			std::cout << "File Open\n";
		}

		~FileHandler() {
			if (fp) {
				fclose(fp);
				std::cout << "File Close\n";
			}
		}
};

void readFile() {
	FileHandler file("test.txt");
	throw std::runtime_error("Read error");
}

int main() {
	try {
		readFile();
	}
	catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
}
