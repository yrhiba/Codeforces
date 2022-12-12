/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:47:50 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/12 05:24:45 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <map>
#include <utility>

using namespace std;

typedef struct s_not_friend 
{
	long long x;
	long long y;
} t_notfriend;

bool subi_isin_list(long long j, long long s, vector<t_notfriend> &list)
{
	for (int i = 0; i < list.size(); i++)
	{
		if ((list[i].x == s && list[i].y == j) || (list[i].x == j && list[i].y == s))
			return true;
	}
	return false;
}

bool is_j_friend(long long j, vector<long long> &sub, vector<t_notfriend> &list)
{
	for (long long i = 0; i < sub.size(); i++)
	{
		if (subi_isin_list(j, sub[i], list))
			return false;
	}
	return true;
}

void solve()
{
	long long n, m; cin >> n >> m;

	vector<t_notfriend> list(m);

	for (long long i = 0; i < m; i++)
		cin >> list[i].x >> list[i].y;

	long long s = n;
	for (long long i = 1; i <= n; i++)
	{
		vector<long long> sub; sub.push_back(i);
		for (long long j = i + 1; j <= n; j++)
		{
			if (is_j_friend(j, sub, list))
				sub.push_back(j);
			else
				break;
		}
		if (sub.size() > 1)
			s++;
	}
	cout << s << endl; cin.ignore();
}

int main()
{
	long long t; cin >> t; cin.ignore();
	for (long long i = 0; i < t; i++)
		solve();
	return (0);
}
