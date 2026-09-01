#include <iostream>
#include <cstring>

class CppBuffer {
	private:
		char data[1024];
		int size;

	public:
		CppBuffer() : size(0) {}

		bool append(const char* text, int len) {
			if (size + len > 1024) return false;

			std::memcpy(data + size, text, len);
			size += len;
			return true;
		}

		int getSize() const {
			return size;
		}
};

int main() {
	CppBuffer buf;

	buf.append("Hello", 5);

	// Compile Error
	buf.size = -999;

	std::cout << "Present Buf Size : " << buf.getSize() << std::endl;
	return 0;
}
