// 격자 BFS에서 (x, y)는 수학에서의 x, y가 아닌 행렬에서의 (i, j)와 같이 x행, y열을 의미함에 꼭 유의합니다.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
queue<pair<int, int> > q;
int answer[5][5];
int order = 1;
int grid[5][5] = {
        {1, 0, 1, 1, 1},
        {1, 0, 1, 0, 1},
        {1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 1},
};
bool visited[5][5];

bool InRange(int x, int y) {
    return 0 <= x && x < 5 && 0 <= y && y < 10;
}

bool CanGo(int x, int y) {
    if(!InRange(x, y))
        return false;
    if(visited[x][y] || grid[x][y] == 0)
        return false;
    return true;
}

void Push(int x, int y) {
    answer[x][y] = order++;
    visited[x][y] = true;
    q.push(make_pair(x, y));
}

void BFS() {
    int dx[2] = {1, 0};
    int dy[2] = {0, 1};

    while(!q.empty()){
        pair<int, int> curr_pos = q.front();
        q.pop();

        int x = curr_pos.first;
        int y = curr_pos.second;
        for(int i = 0; i < 2; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if(CanGo(new_x, new_y))
                Push(new_x, new_y);
        }
    }
}

int main() {
    Push(0, 0);
    BFS();
 }