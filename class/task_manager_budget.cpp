#include <iostream>
#include <queue>

using namespace std;

struct Task {
	int id;
	int cost;
};

class TaskManager {
	private:
		queue<Task> tasks;

	public:
		void addTask(int id, int cost) {
			Task task;
			task.id = id;
			task.cost = cost;
			tasks.push(task);
		}

		int process(int budget) {
			int count = 0;

			while (!tasks.empty()) {
				if (tasks.front().cost > budget) break;

				budget -= tassks.front().cost;
				tasks.pop();
				count++;
			}

			return count;
		}

		int getPendingCount() {
			return tasks.size();
		}
};
