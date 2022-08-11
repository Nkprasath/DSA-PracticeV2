class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        shortest = min(strs, key=len)
        strs.remove(shortest)
        if shortest=='': return ''
        result = ''
        for q in shortest:
            result+=q
            for val in strs:
                if result != val[0:len(result)]: return result[0:-1]
        return result