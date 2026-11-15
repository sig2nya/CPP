#include <iostream>
#include <queue>

using namespace std;

class TaskManager {
	private:
		queue<int> tasks;

	public:
		void addTask(int id) {
			tasks.push(id);
		}

		bool completeTask() {
			if (tasks.empty()) return false;

			tasks.pop();
			return true;
		}

		int getPendingCount() {
			return tasks.size();
		}
};
