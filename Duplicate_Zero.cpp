    void duplicateZeros(vector<int>& arr)
    {
        int len = arr.size();
       // vector<int> dst = arr;
        int i = 0;
        while (i < len)
        {
            if (arr[i] == 0)
            {
                arr.insert(arr.begin() + i, 0);
                    i += 2;
            }
            else
                i++;
        }
        arr.resize(len);
    }