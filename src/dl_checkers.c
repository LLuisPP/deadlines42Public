/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_checkers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:34:36 by lprieto-          #+#    #+#             */
/*   Updated: 2024/10/27 07:26:09 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deadlines.h"

int is_valid_date(int year, int month, int day)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
    if (month < 1 || month > MAX_MONTH)
		return (0);
    if (is_leap_year(year))
		days_in_month[1] = 29;
    return (day >= 1 && day <= days_in_month[month - 1]);
}

int valid_date(const char *date_str)
{
    int year;
	int month;
	int day;
    int length;
	
	length = ft_strlen(date_str);

    if (length != 8)
		return -1;

    if (date_str[2] != '-' || date_str[5] != '-')
       		return -1;

    char year_str[3] = { date_str[0], date_str[1], '\0' };
    char month_str[3] = { date_str[3], date_str[4], '\0' };
    char day_str[3] = { date_str[6], date_str[7], '\0' };

    year = ft_atol(year_str);
    month = ft_atol(month_str);
    day = ft_atol(day_str);

    if (is_valid_date(year, month, day))
		return (0);
    else
        return (-1);
}

int	arg_is_int(char *value)
{
	long	i;
	
	i = 0;
		while (value[i] == ' ' || value[i] == '\t')
			i++;
		if (!value[2] || value[i] == '\0')
			return (-1);
		else if (value[i] == '+' && value[i + 1] != 0)
			i++;
		else if (value[i] == '-' && (ft_is_digit(&value[++i]) == 0))
			return (-1);
		while (ft_is_digit(&value[i]) == 0 && value[i] != '\0')
			i++;
		if (ft_is_digit(&value[i]) == -1)
			return (-1);
	return (0);
}

int	dl_milestone_range(char *milestone)
{
	int	num;

		num = ft_atol(milestone);
		if (num * -1 > 0)
			return (-1);
		if (num > 6 || num < 0)
			return (-1);
	return (0);
}

int validate_pace(int pace)
{
	int	pace_index;
	int	pace_values[] = {8, 12, 15, 18, 22, 24};
	int	i;

	pace_index = -1;
	i = 0;
	
	while (i < 6)
	{
		if (pace == pace_values[i])
		{
			pace_index = i;
			return (pace_index);
		}
		i++;
	}
	return (pace_index);
}