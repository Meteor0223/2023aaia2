class Solution(object):
    def commonChars(self, words):
        #counter =Counter(word[0])&Counter(word[1])&Counter(word[2])
        counter=Counter(words[0])
        for i in range(1,len(words)):
            counter &= Counter(words[i])
        ans=[]
        for c in counter:
            for i in range(counter[c]):#看要重複幾次
                ans.append(c)
        
        return ans
        