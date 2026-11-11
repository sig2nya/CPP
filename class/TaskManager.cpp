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
		int completedCount = 0;

	public:
		void addTask(int id, int cost) {
			Task task;
			
			task.id = id;
			task.cost = cost;

			tasks.push(task);
			return;
		}

		int process(int budget) {
			int count = 0;

			while (!tasks.empty()) {
				Task task = tasks.front();

				if (task.cost > budget) {
					break;
				}

				budget -= task.cost;
				tasks.pop();
				count++;
				completedCount++;
			}

			return count;
		}

		int getPendingCount() {
			return tasks.size();
		}

		int getCompletedCount() {
			return completedCount;
		}
};
