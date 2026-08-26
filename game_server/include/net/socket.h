#pragma once

class Socket {
	private:
		int fd_;

	public:
		Socket();
		~Socket();

		int fd() const;
};
