class Solution(object):
    def repeatedStringMatch(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        rep=-(-len(b)//len(a))
        s=a*rep
        if b in s:return rep
        elif b in s+a:return rep+1
        else: return -1
        