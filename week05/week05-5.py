class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        N=len(colors)#現在有幾個房子
        ans =0
        for i in range(N):#左手i
            for j in range(N):#右手J
                if colors[i] != colors[j] and j-i > ans: #色彩不同 and距離更大
                    ans=j-i#更新ans距離
        return ans #ans拿來用