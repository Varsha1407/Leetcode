class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        winsum=sum(nums[:k])
        maxsum=winsum
        for i in range(k,len(nums)):
            winsum+=nums[i]-nums[i-k]
            if winsum>maxsum:
                maxsum=winsum
        return float(maxsum)/k
