class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        #head and end pointer method
        index = 0

        for i in range(len(nums)):
            if nums[i] != val:
                nums[index] = nums[i]
                index += 1# update the index position
            else:
                continue
        
        return index