from collections import *
class Solution:
    def maximizeSum (self,arr, n) : 
        sum = 0
        i = n - 1
        val = arr[n-1]
        while i >= 0:
            i_next = i - 1
            val_next = arr[i_next]
            while i_next >= 0 and val_next == val:
                i_next -= 1
                if i_next >= 0:
                    val_next = arr[i_next]
            k = i - i_next
            sum += k * val
            for _ in range(k):
                if i_next >= 0 and val_next + 1 == val:
                    i_next -= 1
                    if i_next >= 0:
                        val_next = arr[i_next]
                else:
                    break
            i = i_next
            if i >= 0:
                val = arr[i]
        return sum
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    arr.sort()
    ob=Solution()
    
    ans = ob.maximizeSum(arr, n)
    print(ans)

    





# } Driver Code Ends