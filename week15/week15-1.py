#week15-1.py 寫到一伴的python版
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python把字串的迴圈寫出來
        N=len(s)#先知道字串長度
        for i in range(N):
            print(s[i],t[i])#字串陣列
        return 0 #課堂作業1,先隨便給個0
        