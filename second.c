int maxArea(int *height, int heightSize)
{
    int left = 0;
    int right = heightSize - 1;
    int maxArea = 0;

    while (left < right)
    {
        int nowArea = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
        if (nowArea > maxArea)
        {
            maxArea = nowArea;
        }
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxArea;
}