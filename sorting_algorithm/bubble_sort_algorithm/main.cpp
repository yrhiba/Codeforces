/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:28:49 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/09 02:16:36 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubble_sort(vector<int> &nums)
{
	bool f;

	for (int i = 1; i < nums.size(); i++)
	{
		f = true;
		for (int j = 0; j < (nums.size() - i); j++)
		{
			if (nums[j] > nums[j + 1])
			{
				swap(nums[j], nums[j + 1]);
				f = false;
			}
		}
		if (f)
			break;
	}
}

int main(void)
{
	vector<int> nums; nums.resize(10);

	srand(time(0));
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
		*i = rand() % 20;
	
	cout << "Array numbers befor sorting : " << endl;
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
		cout << *i << " ";
	cout << endl;

	bubble_sort(nums);

	cout << "Array numbers after sorting : " << endl;
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
		cout << *i << " ";
	cout << endl;
	
	return (0);
}