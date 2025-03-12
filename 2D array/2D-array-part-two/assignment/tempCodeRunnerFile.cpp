for (int i = 0; i < n; i++)
        {
            arr2[0][i] = arr[i][n-1];
        }
        for (int i = 0; i < n-1; i++)
        {
            arr2[1][i] = arr[i][n-2];
        }
        for (int i = 0; i < n-1; i++)
        {
            arr2[2][i] = arr[i][n-3];
        }