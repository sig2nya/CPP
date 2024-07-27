#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks)  {
    int answer = health;
    const int health_max = health;
    int j = 0;
    int x = 0;

    for (int i = 0; i <= attacks.back().front(); i++) {
       if (i == attacks[x][0]) {
            answer -= attacks[x][1];
            x++;
            j = 0;

            if (answer <= 0) {
                return -1;
            }
       } else {
            j++;
            answer += bandage[1];

            if (j == bandage[0]) {
                answer += bandage[2];
                j = 0;
            }

            if (health_max < answer) {
                answer = health_max;
            }
       }
    }

    return answer;
}

int main() {
    vector<int> bandage1 = {5, 1, 5};
    vector<int> bandage2 = {3, 2, 7};
    vector<int> bandage3 = {4, 2, 7};
    vector<int> bandage4 = {1, 1, 1};
    int health = 30;

    vector<vector<int>> attacks1 = {
        {2, 10},
        {9, 15},
        {10, 5},
        {11, 5}
    };
    vector<vector<int>> attacks2 = {
        {1, 15},
        {5, 16},
        {8,  6},
    };
    vector<vector<int>> attacks3 = {
        {1, 15},
        {5, 16},
        {8,  6},
    };
    vector<vector<int>> attacks4 = {
        {1, 2},
        {3, 2},
    };

    cout << solution(bandage1, 30, attacks1)  << endl;
    cout << solution(bandage2, 20, attacks2)  << endl;
    cout << solution(bandage3, 20, attacks3)  << endl;
    cout << solution(bandage4, 5, attacks4)  << endl;
    return 0;
}
