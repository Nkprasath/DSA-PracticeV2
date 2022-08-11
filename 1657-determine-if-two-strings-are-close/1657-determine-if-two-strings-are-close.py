class Solution(object):
    def closeStrings(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: bool
        """
        if len(word1) != len(word2): return False
        d1 = {}
        d2 = {}
        
        for i in word1:
            if i not in d1:
                d1[i]=0
            d1[i]+=1
            
        for i in word2:
            if i not in d2:
                d2[i]=0
            d2[i]+=1
            
        val1=[]
        val2=[]
        key1=[]
        key2=[]
        
        for i,j in d1.items():
            key1.append(i)
            val1.append(j)
        for i,j in d2.items():
            key2.append(i)
            val2.append(j)
            
        val1.sort()
        val2.sort()
        key1.sort()
        key2.sort()
        
        if val1==val2 and key1==key2: return True
        else: return False
    