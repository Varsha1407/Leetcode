from collections import Counter
class Solution(object):
    def leastInterval(self, tasks, n):
        """
        :type tasks: List[str]
        :type n: int
        :rtype: int
        """
        freq=Counter(tasks)
        max_freq=max(freq.values())
        count_max=sum(1 for v in freq.values() if v==max_freq)

        return max(len(tasks),(max_freq-1)*(n+1)+count_max)