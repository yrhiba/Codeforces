/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:15:31 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/05 22:26:02 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace	std;

void	solve(void)
{
	string s1, s2;
	int	i;

	cin >> s1 >> s2;
	i = -1;
	while (++i < s1.length())
	{
		if (toupper(s1[i]) != toupper(s2[i]))
			break ;
	}
	if (toupper(s1[i]) < toupper(s2[i]))
		cout << -1;
	else if (toupper(s1[i]) > toupper(s2[i]))
		cout << 1;
	else
		cout << 0;
	cout << endl;
}

int	main(void)
{
	solve();
	return (0);
}
