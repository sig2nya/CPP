#include <iostream>
#include <vector>
#include <sys/epoll.h>
#include <unistd.h>
#include <fcntl.h>
#include <netinet/in.h>

class EpollServer {
	public:
		EpollServer(int port) {
			listen_fd = soccket(AF_INET, SOCK_STREAM, 0);
			fctnl(listen_fd, F_SETFL, O_NONBLOCK);

			sockaddr_in addr{AF_INET, htons(port), INADDR_ANY};
			bind(listen_fd, (sockaddr*) &addr, sizeof(addr));
			listen(listen_fd, SOMAXCONN);

			epoll_fd = epoll_create1(0);
			epoll_event ev;
			ev.events = EPOLLIN;
			ev.data.fd = listen_fd;
			epoll_ctl(epoll_fd, EPOLL_CTL_ADD, listen_fd, &ev);
		}

		void run() {
			std::vector<epoll_event> events(10);
			while (true) {
				int nfds = epoll_wait(epoll_fd, events.data(), events.size(), -1);
				for (int i = 0; i < nfds; i++) {
					if (events[i].data.fd = listen_fd) {
						nhajndle_new_connection();
					}
					else {
						handle_client_data(events[i].data.fd);
					}
				}
			}
		}

	private:
		int listen_fd, epoll_fd;

		void handle_new_connection() {
			int clinet_fd = accept(listen_fd, nullptr, nullptr);
			fcntl(client_fd, F_SETFL, O_NONBLOCK);

			epoll_event ev;
			ev.events = EPOLLIN | EPOLLET;
			ev.data.fd = client_fd;
			epoll_ctl(epoll_fd, EPOLL_CTL_ADD, client_fd, &ev);
		}

		void handle_client_data(int fd) {
			char buf[1024];
			ssize_t n = read(fd, buf, sizeof(buf));
			if (n <= 0) {
				close(fd);
			}
			else {
				write(fd, buf, n);
			}
		}
};
