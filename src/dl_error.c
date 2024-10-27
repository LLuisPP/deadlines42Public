/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:58:02 by lprieto-          #+#    #+#             */
/*   Updated: 2024/09/11 19:12:09 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deadlines.h"

int	info(char c)
{
	if (c == 'i')
	{
		printf("\nError: invalid arguments:\n");
		handling();
	}
	if (c == 'd')
	{
		printf("\nError: invalid date:\n");
		handling();
	}
	if (c == 'n')
	{
		printf("\nError: not a number\n");
		handling();
	}
	if (c == 'm')
	{
		printf("\nError: wrong milestone\n");
		milestones();
	}
	if (c == 'p')
	{
		printf("\nError: wrong pace\n");
		pace();
	}
	return (-1);
}