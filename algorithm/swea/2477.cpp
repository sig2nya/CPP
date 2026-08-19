#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Customer {
	int id;
	int arrival_time;
	int rec_id;
	int rep_id;
};

// 정비 대기열에서 사용할 우선순위 구조체
struct RepairWaiting {
	int id;
	int rec_finish_time;
	int rec_id;

	bool operator() (const RepairWaiting& a, const RepairWaiting& b) {
		if (a.rec_finish_time == b.rec_finihsh_time) {
			return a.rec_id > b.rec_id;
		}

		return a.rec_finish_time > b.rec_finish_time;
	}
};

// 창구 상태를 나타내는 구조체
struct Desk {
	int customer_id;
	int remaining_time;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
}
