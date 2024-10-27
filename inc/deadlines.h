/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deadlines.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:23:36 by lprieto-          #+#    #+#             */
/*   Updated: 2024/09/11 20:08:52 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEADLINES_H
# define DEADLINES_H

# include <time.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include <sys/time.h>

# define MAX_MONTH   12

/*********** structures ***************/
typedef struct s_pace
{
	int pace;
    int *days;
}   t_p;

/*********** deadlines ************/

void            add_days_to_date(const char *date_str, int mstone, int pace, t_p *paces);
int             arg_checker(char **argv);

/*********** dl_checkers ************/

int             is_valid_date(int year, int month, int day);
int             valid_date(const char *date_str);
int         	arg_is_int(char *value);
int             dl_milestone_range(char *milestone);
int             validate_pace(int pace);

/*********** dl_dates ************/

int             is_leap_year(int year);
int             days_in_month(int month, int year);
long long       date_to_timestamp(int year, int month, int day);
void            timestamp_to_date(long long timestamp, int *year, int *month, int *day);

/*********** dl_utils ************/

long long int	ft_atol(char *str);
int	            ft_is_digit(char *str);
size_t      	ft_strlen(const char *s);
int             find_pace_index(t_p *paces, int pace);
void            init_paces(t_p *paces, int pace, int mstone, int b_days);

/************* dl_message **************/

void		    handling(void);
void    	    pace(void);
void		    milestones(void);
void		    disclaimer(void);
void		    holygraph(void);

/*********** dl_error ************/

int			    info(char c);

/*********** color defines ************/

# define RD		"\033[1;31m"
# define GR		"\033[1;32m"
# define YL		"\033[1;33m"
# define BL		"\033[1;34m"
# define PK		"\033[0;35m"
# define PP		"\033[1;35m"
# define CY		"\033[1;36m"
# define OR     "\033[38;5;208m"
# define F		"\033[0m"

#endif
