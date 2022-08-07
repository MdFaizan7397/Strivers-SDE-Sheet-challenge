class Solution {
public:
    int countVowelPermutation(int n) {
  // 'a', 'e', 'i', 'o', 'u'
  vector<vector<int>> moves = { {1}, {0, 2}, {0, 1, 3, 4}, {2, 4}, { 0 } }, v(2, vector<int>(5, 1));
  while (--n > 0) {
    for (auto i = 0; i < 5; ++i)
      v[(n + 1) % 2][i] = accumulate(begin(moves[i]), end(moves[i]), 0,
        [&](int s, int j) {return (s + v[n % 2][j]) % 1000000007; });
  }
  return accumulate(begin(v[0]), end(v[0]), 0, [](int s, int n) { return (s + n) % 1000000007; });
}
};