/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_dates.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:30:54 by lprieto-          #+#    #+#             */
/*   Updated: 2024/10/27 07:21:42 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deadlines.h"

int is_leap_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
            return (1);
        else
        {
            if (year % 400 == 0)
                return (1);
        }
    }
    return (0);
}

int days_in_month(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
        || month == 10 || month == 12)
            return (31);
    if (month == 2)
	{
        if (is_leap_year(year))
            return (29);
        return (28);
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return (30);
    return (0);
}

long long date_to_timestamp(int year, int month, int day)
{
    struct tm tm = {0};
    tm.tm_year = year - 1900;
    tm.tm_mon = month - 1;
    tm.tm_mday = day;
    return ((long long)mktime(&tm) * 1000LL);
}

void timestamp_to_date(long long timestamp, int *year, int *month, int *day)
{
    time_t t = timestamp / 1000;
    struct tm *tm_info = localtime(&t);

    *year = tm_info->tm_year + 1900;
    *month = tm_info->tm_mon + 1;
    *day = tm_info->tm_mday;
}