def bubble_sort(nums):
    for i in range(len(nums) - 1):
        for j in range(len(nums) - 1 - i):
            if nums[j] > nums[j+1]:
                nums[j] , nums[j+1] = nums[j+1] , nums[j]
    return nums
print(bubble_sort([65, 12, 13, 31, -5, 20, 87, -55, 64, -21]))
