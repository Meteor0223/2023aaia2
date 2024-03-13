class Solution:
    def pivotInteger(self, n: int) -> int:
        total = 0 #全部加起來的數字
        for i in range(1,n+1):# i:1,2,3,4,....n    
            total += i#先算出全部的總和
        #接下來
        left = 0
        for i in range(1,n+1):
            left += i
            if left +left-i==total:return i
        return -1