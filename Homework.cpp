#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	int scores[100][3];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> scores[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(scores[i][0] - scores[j][0] > 5)) {
				break;
			}
			if (abs(scores[i][1] - scores[j][1] > 5)) {
				break;
			}
			if (abs(scores[i][2] - scores[j][2] > 5)) {
				break;
			}
			int totali = scores[i][0] + scores[i][1] + scores[i][2];
			int totalj = scores[j][0] + scores[j][1] + scores[j][3];
			if (abs(totali - totalj) > 10) {
				break;
			}
			ans++;
		}
	}
	cout  << ans;
}

