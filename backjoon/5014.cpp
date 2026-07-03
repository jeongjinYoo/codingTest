#include <iostream>
#include <queue>
#define MAX_VALUE 1000000
using namespace std;


int main(){
    int F, S, G, U, D;
    cin >> F >> S >> G >> U >> D;

    int cheak = -1;
    bool visited[F + 1];
    int dist[F + 1];
    for(int i = 0; i<=F; i++){
        visited[i] = dist[i] = 0;
    }

    int curr, next;
    int level = 1;
    queue<int> q;
    q.push(S);

    dist[S] = 0;
    visited[S] = true;

    while(!q.empty()){
        curr = q.front();
        q.pop();

        if(curr == G){
            cheak = dist[curr];
            break;
        }

        next = curr - D;
        if(next >= 1 && !visited[next]){
            visited[next] = true;
            dist[next] = dist[curr] + 1;
            q.push(next);
        }
        next = curr+ U;
        if(next <= F && !visited[next]){
            visited[next] = true;
            dist[next] = dist[curr] + 1;
            q.push(next);
        }
    }

    if(cheak != -1){
        cout << cheak << endl;
    } else{
        cout << "use the stairs" << endl;
    }
    return 0;
}