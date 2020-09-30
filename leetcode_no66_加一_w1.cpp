/* ------------------------------------------------------------------|
给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

示例 1:

输入: [1,2,3]
输出: [1,2,4]
解释: 输入数组表示数字 123。
示例 2:

输入: [4,3,2,1]
输出: [4,3,2,2]
解释: 输入数组表示数字 4321。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/plus-one
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
------------------------------------------------------------------*/

/*	倒叙处理法
*
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：8.7 MB, 在所有 C++ 提交中击败了74.41%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

vector<int> plusOne(vector<int>& digits) 
{
	for (int i = digits.size() - 1; i >= 0; i--)
	{
		digits[i]++;
		if (digits[i] == 10)
		{
			digits[i] == 0;
		}
		else
		{
			return digits;
		}
	}
	digits.insert(digits.begin(), 1);
	return digits;
	//if (digits[digits.size() - 1] != 9)
	//{
	//	digits[digits.size() - 1]++;
	//	return digits;
	//}
	//else
	//{
	//	int i = digits.size() - 1;
	//	while (i >= 0 && digits[i] == 9)
	//	{
	//		digits[i] = 0;
	//		i--;
	//	}
	//	if (i == -1)
	//	{
	//		digits.insert(digits.begin(), 1);
	//	}
	//	else
	//	{
	//		digits[i]++;
	//	}
	//}
	//return digits;
}

int main()
{
	vector<int> digits = { 9};
	//
	{

	}
	//
	digits = plusOne(digits);
}