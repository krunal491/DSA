class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        start = 0
        eve = 1
        n = len(nums)
        for i in range(0,n):
            if(nums[i]%2==0):
                nums[i],nums[start] = nums[start],nums[i]
                start+=1
        return nums