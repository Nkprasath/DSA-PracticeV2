class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:
            indexes = haystack.find(needle)
            return indexes
        else:
            return -1