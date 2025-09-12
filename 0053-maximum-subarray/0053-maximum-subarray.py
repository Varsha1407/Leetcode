class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cursum=nums[0]
        maxsum=nums[0]
        for i in range(1,len(nums)):
            cursum=max(nums[i],cursum+nums[i])
            maxsum=max(maxsum,cursum)
        return maxsum