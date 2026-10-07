#include <unistd.h>
#include <sys/socket.h>
#include <iostream>

class Socket {
	private:
		int fd_;

	public:
		Socket()
			: fd_(::socket(AF_INET, SOCK_STREAM, 0)) {
				std::cout << "socket opend : " << fd_ << '\n';
			}

		~Socket() {
			if (fd_ >= 0) {
				std::cout << "socket closed : " << fd_ << '\n';
				::close(fd_);
			}
		}

		int fd() const {
			return fd_;
		}
};

void process() {
	Socket socket;

	if (socket.fd() < 0) {
		return;
	}

	bool error = true;

	if (error) {
		std::cout << "error\n";
		return;
	}

	std::cout << "success\n";
}
