#include <bits/stdc++.h>
#define is_left(c) (c) == 'd' or (c) == 'f'
#define is_right(c) (c) == 'j' or (c) == 'k'

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int T;
	std::cin >> T;
	
	while (T--)
	{
		int n;
		double t = 0;
		std::cin >> n;
		
		// string - word
		// int - count of the word
		std::map<std::string, int> m;
		
		while (n--)
		{
			std::string s;
			std::cin >> s;
			double word_time = 2;	
			
			for (size_t k = 1; k < s.size(); ++k)
			{
				// left hand
				if (is_left(s[k]))
				{
					// same hand
					if (is_left(s[k-1])) word_time += 4;
					
					// diff hand
					else word_time += 2;
				}
				// right hand
				else
				{
					if (is_right(s[k-1])) word_time += 4;
					else word_time += 2;
				}
			}
			
			// if s did not appear before
			if (m.count(s) == 0)
			{
				++m[s];
			}
			else
			{
				word_time /= 2.0;
			}
			
			t += word_time;
		}
		
		std::cout << t << '\n';
	}
	
	return 0;
}
