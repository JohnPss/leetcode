class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        it1 = iter(nums1)
        output = []
        nums2_set = set(nums2)

        for n1 in it1:
            if n1 in nums2_set and n1 not in output:
                output.append(n1)
        return output
