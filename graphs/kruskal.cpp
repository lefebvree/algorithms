
#include <vector>

using namespace std;

void kruskal ( int n, int distance[][3], int tree[][2] ) {

	int c[n] = {};
	vector <int> component[n];
	int a = 0;

	for (int i = 0; i < n; i++) {
		c[i] = i;
		component[i].push_back(i);
	}

	for (int j = 0; j < n; j++) {

		int c1 = c[distance[j][0]];
		int c2 = c[distance[j][1]];

		if (c1 != c2) {

			int x, y;
			if (component[c1].size() < component[c2].size()) {
				x = c1; y = c2;
			} else {
				x = c2; y = c1;
			}

			tree[a][0] = distance[j][0];
			tree[a][1] = distance[j][1];
			a++;

			while (!component[x].empty()) {
				c[component[x].back()] = y;
				component[y].push_back(component[x].back());

				component[x].pop_back();
			}
		}
	}
}
