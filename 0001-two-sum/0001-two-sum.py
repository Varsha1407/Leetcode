class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        res=[]
        for i,n in enumerate(nums):
            if target-n in nums[i+1:]:
                res.append(i)
                res.append(nums.index(target-n,i+1))
                break
        return res
        
        