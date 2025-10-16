from collections import Counter
class Solution(object):
    def getLargestOutlier(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        total=sum(nums)
        freq=Counter(nums)
        result=-float('inf')
        for x in nums:
            y2=total-x
            if y2%2!=0:
                continue
            y=y2//2
            if y in freq:
                if x==y and freq[y]<2:
                    continue
                result=max(result,x)
        return result