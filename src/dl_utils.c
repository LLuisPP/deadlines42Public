/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:13:03 by lprieto-          #+#    #+#             */
/*   Updated: 2024/09/11 20:26:58 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deadlines.h"

long long int	ft_atol(char *str)
{
	long	i;
	long	nbr;
	long	isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t'
			|| str[i] == '\n'))
		i++;
	if (str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}

int	ft_is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int find_pace_index(t_p *paces, int pace)
{
	size_t	i;

	i = 0;
	
	while (i < 6)
	{
		if (pace == paces[i].pace)
			return (i);
		i++;
	}
	return (-1);
}

void init_paces(t_p *paces, int pace, int mstone, int b_days)
{
    int	i;
    int *selected_days = NULL;
    
	i = 0;
    int t8[] = {8, 24, 22, 36, 51, 71, 32};
    int t12[] = {13, 35, 33, 53, 77, 107, 47};
    int t15[] = {18, 42, 41, 67, 96, 134, 59};
    int t18[] = {24, 48, 49, 80, 115, 162, 70};
    int t22[] = {30, 58, 60, 98, 141, 197, 86};
    int t24[] = {45, 73, 60, 128, 141, 197, 86};

    if (pace == 8)
        selected_days = t8;
    else if (pace == 12)
        selected_days = t12;
    else if (pace == 15)
        selected_days = t15;
    else if (pace == 18)
        selected_days = t18;
    else if (pace == 22)
        selected_days = t22;
    else if (pace == 24)
        selected_days = t24;
    else
    {
        paces->days = NULL;
        return ;
    }

    paces->pace = pace;
    paces->days = (int *)malloc(7 * sizeof(int));
    if (paces->days == NULL)
    {
        perror("Error allocating memory for days");
        exit(EXIT_FAILURE);
    }

    while (i < 7)
    {
        if (i == mstone)
            paces->days[i] = selected_days[i] + b_days;
        else
            paces->days[i] = selected_days[i];
        i++;
    }
}