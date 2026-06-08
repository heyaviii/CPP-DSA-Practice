#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {

    vector<vector<int>> result;

    sort(intervals.begin(), intervals.end());

    result.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {

        if (intervals[i][0] <= result.back()[1]) {
            result.back()[1] =
                max(result.back()[1], intervals[i][1]);
        }
        else {
            result.push_back(intervals[i]);
        }
    }

    return result;
}

int main() {

    vector<vector<int>> intervals = {
        {1,3}, {2,6}, {8,10}, {15,18}
    };

    vector<vector<int>> ans = mergeIntervals(intervals);

    cout << "Merged Intervals: ";

    for (auto interval : ans) {
        cout << "[" << interval[0]
             << "," << interval[1] << "] ";
    }

    return 0;
}