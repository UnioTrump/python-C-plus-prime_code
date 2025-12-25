// Graph representation using adjacency list
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
private:
	int n;
	struct Vertex {
		int idx;
	};
	vector<int> node;
	vector<list<int>> adj;	//аз╫с╠М
public:
	Graph(int n) {
		this->n = n;
		this->adj = vector<list<int>>(n);
	}

	void addedge(int u, int v) {
		adj[u].push_back(v);
	}

	void deledge(int u, int v) {
		adj[u].remove(v);
	}
	void disp() {
		for (int i = 0; i < n; i++) {
			cout << i + 1 << "->";
			for (int j : adj[i]) {
				cout << j;
			}
			cout << endl;
		}
		cout << endl;
	}

};

void main() {
	int n;	//n: num node
	cout << "Please input the number of node(n): ";
	cin >> n;
	Graph g(n);
	int u, v;
	while (true) {
		cout << "Please input the node that the edge linked (e.g. 2 5): ";
		cin >> u >> v;
		if (u == -1 && v == -1)
			break;
		g.addedge(u - 1, v - 1);	//index begins at 0
	}
	g.disp();
}