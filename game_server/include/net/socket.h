#pragma once

class Socket {
	private:
		int fd_;

	public:
		Socket();
		~Socket();

		Socket(const Socket&) = delete;
		Socket& operator = (const Socket&) = delete;

		Socket(Socket&& other) noexcept;
		Socket& operator = (Socket&& other) noexcept;

		int fd() const;
};
