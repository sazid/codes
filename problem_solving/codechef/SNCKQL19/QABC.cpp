#include <bits/stdc++.h>

int32_t arr[(int)1e5 + 5];
int32_t make[(int)1e5 + 5];

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int32_t T;
    std::cin >> T;

    while (T--)
    {
        int32_t N;
        std::cin >> N;

        for (int32_t i = 0; i < N; ++i) std::cin >> arr[i];
        for (int32_t i = 0; i < N; ++i) std::cin >> make[i];

        bool f = true;

        for (int32_t i = 0; i < N-2; ++i)
        {
            if (arr[i] == make[i]) continue;
            else if (arr[i] < make[i])
            {
                int32_t diff = make[i] - arr[i];
                if (diff*2 + arr[i+1] > make[i+1] || diff*3 + arr[i+2] > make[i+2])
                {
                    f = false;
                    break;
                }
                else
                {
                    arr[i] += diff;
                    arr[i+1] += diff * 2;
                    arr[i+2] += diff * 3;
                }
            }
            else
            {
                f = false;
                break;
            }
        }

        if (f) for (int32_t i = 0; i < N; ++i)
        {
            if (arr[i] != make[i])
            {
                f = false;
                break;
            }
        }

        if (f) std::cout << "TAK\n";
        else std::cout << "NIE\n";
    }

    return 0;
}
