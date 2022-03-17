#include<bits/stdc++.h>
using namespace std;

// Adjacency list of the graph
vector<vector<int> > graph;

// Value of the node
vector<int> values, xor_values;

// Function to pre-compute the xor values
int pre_compute_xor(int i, int prev)
{
	// xor of the sub-tree
	int x = values[i];

	for (int j = 0; j < graph[i].size(); j++)
		if (graph[i][j] != prev) {

			// xor x with xor of the sub-tree
			// of it child nodes
			x ^= pre_compute_xor(graph[i][j], i);
		}

	xor_values[i] = x;

	// Return the xor
	return x;
}

// Function to return the xor of
// the nodes of the sub-tree
// rooted at node u
int query(int u)
{
	return xor_values[u];
}

// Driver code
int main()
{
	int n = 7;

	graph.resize(n);
	xor_values.resize(n);

	// Create the graph
	graph[0].push_back(1);
	graph[0].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(4);
	graph[2].push_back(5);
	graph[2].push_back(6);

	// Set the values of the nodes
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	values.push_back(4);
	values.push_back(5);
	values.push_back(6);
	values.push_back(7);

	// Pre-computation
	pre_compute_xor(0, -1);

	// Perform queries
	int queries[] = { 0, 1, 4, 5 };
	int q = sizeof(queries) / sizeof(queries[0]);
	for (int i = 0; i < q; i++)
		cout << query(queries[i]) << endl;

	return 0;
}
