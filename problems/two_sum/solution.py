class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        n = len(nums)

        for i in range(n):
            x = target - nums[i]
            if x in map:
                return [map[x], i]
            map[nums[i]] = i

        return []