#include "sum_reverse_sort.h"

int Sum(int x, int y) {
    return x + y;
}

string Reverse(string s) {
    reverse(s.begin(), s.end());
    return s;
}

void Sort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
}
