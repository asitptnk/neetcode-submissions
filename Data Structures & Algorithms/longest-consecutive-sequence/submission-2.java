class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = new HashSet<>();
        for (int n : nums) {
            set.add(n);
        }

        int maxLen = 0;
        for (int n : set) {
            if (set.contains(n-1)) continue;
            int currLen = 1, tmp = n+1;
            while (set.contains(tmp++)) {
                currLen++;
            }
            maxLen = Math.max(currLen, maxLen);
        }

        return maxLen;
    }
}