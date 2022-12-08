/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:04:35 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/08 22:25:17 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;


void selection_sort(vector <int> &nums)
{
	vector <int> tmp; tmp.resize(nums.size());

	for (int i = 0; i < (nums.size() - 1); i++)
	{
		int min_index = i;
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[j] < nums[min_index])
				min_index = j;
		}
		swap(nums[i], nums[min_index]);
	}
}

int main(void)
{
	vector <int> nums;

	srand(time(0));
	for (int i = 0; i < 10; i++)
		nums.push_back(rand() % 10);

	cout << "the original vector : ";
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << endl;

	selection_sort(nums);

	cout << "the sorted vector :   ";
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << endl;

	return (0);
}
