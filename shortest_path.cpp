// There are N cities with M bi-directional roads between them. You want to travel from a given source city to target city.
//  But there are some cities that have landmines in them and you will die if you visit these cities.
// Find the smallest number of roads that you can take to complete your travel without dying. If it is not possible to do so output -1.
// Input
// The first line contains two integers N and M denoting the number of cities and the number of roads respectively.
// The second line contains two integers: source and target.
// The third line contains N integers which are either 0 or 1 denoting whether each city has landmines or not. (1 means that the city has landmines.)
// Finally, there are M lines containing 2 integers each u and v denoting that there is a road between city u and city v.
// Output
// Output the smallest number of roads that you should take to complete your travel without dying. If it is not possible to do so output -1.
// Example
// input
// 5 5
// 0 2
// 0 1 0 0 0
// 0 1
// 1 2
// 0 3
// 3 4
// 4 2
// output
// 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int source, target;
    cin >> source >> target;

    vector<int> landmines(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> landmines[i];
    }

    vector<vector<int>> graph(N);
    for (int i = 0; i < M; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    if (source == target)
    {
        cout << 0 << endl;
        return 0;
    }

    queue<int> q;
    vector<int> distance(N, INT_MAX);
    vector<bool> visited(N, false);

    q.push(source);
    distance[source] = 0;
    visited[source] = true;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current])
        {
            if (!visited[neighbor] && landmines[neighbor] == 0)
            {
                visited[neighbor] = true;
                distance[neighbor] = distance[current] + 1;
                q.push(neighbor);

                if (neighbor == target)
                {
                    cout << distance[neighbor] << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
