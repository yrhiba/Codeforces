/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:49:49 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/11 16:14:50 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void merge(vector<int> &a1, vector<int> &a2, vector<int> &nums)
{
	int i = 0, j = 0, k = 0;
	while (i < a1.size() && j < a2.size())
	{
		if (a1[i] <= a2[j])
			nums[k++] = a1[i++];
		else
			nums[k++] = a2[j++];
	}
	while (i < a1.size())
		nums[k++] = a1[i++];
	while (j < a2.size())
		nums[k++] = a2[j++];
}

void merge_sort(vector<int> &nums)
{
	if (nums.size() < 2)
		return ;
	vector<int> a1(nums.size() / 2);
	vector<int> a2(nums.size() - (nums.size() / 2));
	int i = -1;
	while (++i < nums.size() / 2)
	{
		a1[i] = nums[i];
	}
	while (i < nums.size())
	{
		a2[i - (nums.size() / 2)] = nums[i];
		i++;
	}
	merge_sort(a1);
	merge_sort(a2);
	merge(a1, a2, nums);
}

void printnums(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << endl;
}

int main(void)
{
	srand(time(0));
	vector<int> nums(10);
	for (int i = 0; i < 10; i++)
		nums[i] = rand() % 100;

	cout << "The Elements in array before sorting : " << endl;
	printnums(nums);

	merge_sort(nums);

	cout << "The Elements in array after sorting  : " << endl;
	printnums(nums);

	return (0);
}
