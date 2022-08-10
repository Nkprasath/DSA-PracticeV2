class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        sp = s.split()
        rev = []
        for i in reversed(sp):
            rev.append(i)
        return " ".join(rev)
        