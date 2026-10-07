#include <thread>

class ThreadGuard {
	private:
		std::thread& thread_;

	public:
		explicit ThreadGuard(std::thread& thread) : thread_(thread) {}

		~ThreadGuard() {
			if (thread_.joinable()) {
				thread_.join();
			}
		}
};
