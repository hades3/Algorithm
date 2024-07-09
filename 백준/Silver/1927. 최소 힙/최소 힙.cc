#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;	
int n, x;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> x;
		if (x==0){
			if (pq.empty()){
				cout << 0 << "\n";
			}
			else{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else{
			pq.push(x);
		}
	}
	return 0;
}