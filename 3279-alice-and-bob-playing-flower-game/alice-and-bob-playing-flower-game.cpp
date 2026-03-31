
class Solution {
public:
    long long flowerGame(int n, int m) {
        long n_odd = 0;
        long n_even = 0;
        long m_odd = 0;
        long m_even = 0;

        n_even = (n/2);
        n_odd = n - n_even;

        m_even = (m/2);
        m_odd = m - m_even;

        return (n_odd * m_even)+(n_even * m_odd);
    }
};