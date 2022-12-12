/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:28:42 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/12 05:24:08 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;

void solve()
{
	long long l; cin >> l; cin.ignore();
	vector<int> nums(l);
	for (int i = 0; i < l; i++)
		cin >> nums[i];
	vector<int>::const_iterator max = max_element(nums.begin(), nums.end());
	vector<int>::const_iterator min = min_element(nums.begin(), nums.end());
	long long ml = 0, nl = 0; 
	for (long long i = 0; i < l; i++)
	{
		if (*max == nums[i])
			ml++;
		if (*min == nums[i])
			nl++;
	}
	if (*max != *min)
		cout << nl * ml * 2 << endl;
	else
		cout << l * (l - 1) << endl;
}

int main(void)
{
	int t; cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++)
		solve();
	return (0);
}
