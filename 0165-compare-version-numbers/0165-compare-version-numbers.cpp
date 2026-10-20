class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        int n = version1.size();
        int m = version2.size();

        while (i < n || j < m) {
            int r1 = 0, r2 = 0;

            while (i < n && version1[i] != '.') {
                r1 = r1 * 10 + (version1[i] - '0');
                i++;
            }

            while (j < m && version2[j] != '.') {
                r2 = r2 * 10 + (version2[j] - '0');
                j++;
            }

            if (r1 > r2) return 1;
            if (r1 < r2) return -1;

            i++;
            j++;
        }

        return 0;
    }
};