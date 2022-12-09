/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 02:44:55 by yrhiba            #+#    #+#             */
/*   Updated: 2022/12/09 02:51:44 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int games_numbres; cin >> games_numbres;
	string games_results; cin >> games_results;

	int anton_games_won = 0, danik_games_won = 0; 
	for (int i = 0; i < games_numbres; i++)
	{
		if (games_results[i] == 'A')
			anton_games_won++;
		else
			danik_games_won++;
	}
	if (anton_games_won > danik_games_won)
		cout << "Anton";
	else if (danik_games_won > anton_games_won)
		cout << "Danik";
	else
		cout << "Friendship";
	return (0);
}
