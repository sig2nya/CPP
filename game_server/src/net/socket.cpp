#include "net/socket.h"

#include <sys/socket.h>
#include <unistd.h>
#include <iostream>

Socket::Socket() {
	fd_ = ::socket(AF_INET, SOCK_STREAM, 0);

	std::cout << "[Create] fd = "
			  << fd_
			  << '\n';
}

Socket::Socket(Socket&& other) noexcept {
	fd_ = other.fd_;
	other.fd_ = -1;
}

Socket::~Socket() {
	if (fd_ >= 0) {
		std::cout << "[Destructed] fd = "
				  << fd_
				  << '\n';
		::close(fd_);
	}
}

int Socket::fd() const {
	return fd_;
}
