for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            if (abs(nums[i] - nums[j]) == k)
            {
                sum += nums[j];
                max_sum = max(max_sum, sum);
            }
        }
    }