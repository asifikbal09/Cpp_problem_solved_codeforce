#include <iostream>
#include <vector>

using namespace std;

int advanceToNextRound(int n, int k, const vector<int>& scores) {
    int kthPlaceScore = scores[k - 1];
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kthPlaceScore && scores[i] > 0) {
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int result = advanceToNextRound(n, k, scores);
    cout << result << endl;

    return 0;
}
