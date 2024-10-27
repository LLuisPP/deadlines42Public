/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deadlines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:49:02 by lprieto-          #+#    #+#             */
/*   Updated: 2024/10/27 09:02:22 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deadlines.h"

void add_days_to_date(const char *date_str, int mstone, int pace, t_p *paces)
{
    int year;
    int month;
    int day;
    int pace_index;
    long long timestamp;
    sscanf(date_str, "%d-%d-%d", &year, &month, &day);

    if (year < 100)
        year += 2000;

    pace_index = find_pace_index(paces, pace);

    timestamp = date_to_timestamp(year, month, day);

    int cumulative_days = 0;
    int i = 0;
    while (i <= 6)
    {
        cumulative_days += paces[pace_index].days[i];
        long long new_timestamp = timestamp + cumulative_days * 86400000LL;
        int n_year, n_month, new_day;
        if (i == mstone)
            printf(" %s>", YL);
        timestamp_to_date(new_timestamp, &n_year, &n_month, &new_day);
        printf("       Milestone %d:             %04d-%02d-%02d%s\n", i, n_year, n_month, new_day, F);
        i++;
    }
}

int	arg_checker(char **argv)
{
	if (valid_date(argv[1]) != 0)
	{
		info('d');
		return (-1);
	}
	if (arg_is_int(argv[2]) == -1)
	{
		info('n');
		return (-1);
	}
	if (dl_milestone_range(argv[2]) != 0)
	{
		info('m');
		printf("   Select one: 0, 1, 2, 3, 4, 5, 6\n\n");
		return (-1);
	}
	if (validate_pace(ft_atol(argv[3])) == -1)
	{
		info('p');
    	printf("   Select one: 8, 12, 15, 18, 22, 24\n\n");
		return (-1);
	}
	return (0);
}

int main(int argc, char **argv)
{
    t_p paces;
    int b_days;
    
    b_days = 0;
	if (argc < 4 || argc > 5)
		return (info('i') * -1);
    if (arg_checker(argv) == -1)
        return (-1);
    disclaimer();
    if (argc == 5)
        b_days = ft_atol(argv[4]);
    init_paces(&paces, ft_atol(argv[3]), ft_atol(argv[2]), b_days);
	printf(" ╔════ days added: %d ════════%s 20%s%s ◂═ input date ◂═╗\n ║\n", b_days, GR, argv[1], F);
	printf(" ╚════ Milestones ═════════════ YYYY MM DD ═════════ %sPACE %d%s\n\n", BL, atoi(argv[3]), F);
    add_days_to_date(argv[1], atoi(argv[2]), atoi(argv[3]), &paces);
	printf("\n ╚═════════════════════════════════════════════════════════╝\n");
    return (0);
}