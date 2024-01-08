////
//// Created by Mac Apple on 2024/01/08.
////
//#include <bits/stdc++.h>
//#define VERTICES_NUM 7
//#define EDGES_NUM 6
//#include <iostream>
//using namespace std;
//
//int graph[VERTICES_NUM + 1][VERTICES_NUM + 1];
//bool visited[VERTICES_NUM + 1];
//queue<int> q;
//
//
//// BFS : 새로 방문하게 되는 노드를 queue에 계속 넣어
//
//void BFS() {
//    // queue가 비워지기 전까지 맨 앞에 있는 원소를 뽑아 탐색
//    while (!q.empty()) {
//        int curr_v = q.front();
//        q.pop();
//
//        for(int next_v = 1; next_v <= VERTICES_NUM; next_v++)
//            // 연결이 되어 있으면서, 방문하지 않았다면 -> 조건 판별
//            if (graph[curr_v][next_v] && !visited[next_v]) {
//                cout << next_v << endl;
//                visited[next_v] = true;
//                q.push(next_v);
//            }
//    }
//}
//
//int main() {
//    int start_points[EDGES_NUM] = {1, 1, 1, 2, 4, 6};
//    int end_points[EDGES_NUM] = {2,3,4,5,6,7};
//
//
//    // 인접 행렬로 그래프 표현하기
//    for(int i = 0; i <EDGES_NUM; i++){
//        int start = start_points[i];
//        int end = end_points[i];
//
//        graph[start][end] = 1;
//        graph[end][start] = 1;
//    }
//
//    int root_vertex = 1;
//    cout << root_vertex << endl;
//    q.push(root_vertex);
//    BFS();
//}