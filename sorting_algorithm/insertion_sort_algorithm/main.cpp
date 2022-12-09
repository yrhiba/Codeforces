/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:49:53 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/09 16:19:08 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

void insertion_sort(vector<int> &nums)
{
	int value, hole;

	for (int i = 1; i < nums.size(); i++)
	{
		value = nums[i];
		hole = i;
		while ((hole > 0) && (value < nums[hole - 1]))
		{
			nums[hole] = nums[hole - 1];
			hole--;
		}
		nums[hole] = value;
	}
}

int main(void)
{
	srand(time(0));

	vector<int> nums; nums.resize(10);
	for (int i = 0; i < 10; i++)
		nums[i] = rand() % 100;
	
	cout << "Array before sorting : " << endl;
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << endl;

	insertion_sort(nums);

	cout << "Array after sorting : " << endl;
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << endl;

	return (0);
}
