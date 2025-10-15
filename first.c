#include <stdio.h>

int findInsert(int *nums, int numSize, int target)
{
    int head = 0;
    int tail = numSize - 1;
    while (head <= tail)
    {
        int mid = head + (tail - head) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            tail = mid - 1;
        }
        else
        {
            head = mid + 1;
        }
    }
    return head;
}

int main()
{
    int nums1[] = {1, 3, 5, 6};
    int target1 = 5;
    int result1 = (findInsert(nums1, 4, target1));
    printf("loaction of target1 is %d\n", result1);

    int target2 = 2;
    int result2 = (findInsert(nums1, 4, target2));
    printf("loaction of target2 is %d\n", result2);

    int target3 = 7;
    int result3 = (findInsert(nums1, 4, target3));
    printf("loaction of target3 is %d\n", result3);

    return 0;
}