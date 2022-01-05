class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        long long s = n*(n+1)*(2*n+1);
        return s/6;
    }
};
