#include <iostream>

bool isPalindrome(int x)
{
	int num0 = x, num1 = 0;

	//当前的x有几位数？保存在count里
	int t0 = x, count = 1;
	while ((t0 /= 10)) { count++; }
	std::cout << count << "\n\n";

	//输出每一个单独的数字位，如个十百千万的位置上相对应的数字
	int t1 = 1, cur_r = 0, pre_r = 0;
	for (size_t i = 1; i <= count; i++)
	{
		//通过求余运算符逐步剔除高位
		int v = (t1 *= 10);
		int r = x % v;

		//通过减去上一个r得到当前r
		cur_r = (r - pre_r) / (v / 10);
		std::cout << cur_r << "\n";
		pre_r = r;

		//重新拼接颠倒的数字
		num1 += cur_r * (v / 10);
	}

	return false;
}

int main()
{
	std::cout << (isPalindrome(123456789) ? "是" : "不是") << "\n";

	system("PAUSE");
	return 0;
}
