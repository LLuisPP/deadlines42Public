/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:00:14 by lprieto-          #+#    #+#             */
/*   Updated: 2024/10/27 09:26:48 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deadlines.h"

void	handling(void)
{
	printf("\n");
	printf(" ╔══ DEADLINE 42 HANDLING ═══════════════════════════════════╗\n");
	printf(" ║                                                           ║\n");
	printf(" ║  ./deadlines    [kickoff]  [Milestone]  [Pace]  [B-days]  ║\n");
	printf(" ║                      ⇓          ⇓         ⇓         ⇓     ║\n");
	printf(" ║     ▄██▀ █▀██       prm1       prm2      prm3      prm4   ║\n");
	printf(" ║   ▄██▀   ▄█▀▄        ⇓          ⇓         ⇓         ⇓     ║\n");
	printf(" ║   ▀▀▀▀██ ▀▀▀▀     YY-MM-DD    0 - 6     8 - 24     > 0    ║\n");
	printf(" ║       ▀▀                                                  ║\n");
	printf(" ║     Exs:    ./deadline42  23-09-12  4  22                 ║\n");
	printf(" ║             ./deadline42  24-04-26  2  8  12              ║\n");
	printf(" ║                                                           ║\n");
	printf(" ╚═══════════════════════════════════════════════════════════╝\n\n");
}

void	pace(void)
{
	printf("\n");
	printf(" ╔═══ PACES ═══════════ MONTHS TO FINISH ══╗\n");
	printf(" ║                                         ║\n");
	printf(" ║    PACE [8]      ->       8  months     ║\n");
	printf(" ║    PACE [12]     ->       12 months     ║\n");
	printf(" ║    PACE [15]     ->       15 months     ║\n");
	printf(" ║    PACE [18]     ->       18 months     ║\n");
	printf(" ║    PACE [22]     ->       22 months     ║\n");
	printf(" ║    PACE [24]     ->       24 months     ║\n");
	printf(" ║                                         ║\n");
	printf(" ╚═════════════════════════════════════════╝\n\n");
}

void	milestones(void)
{
	printf("\n");
	printf(" ╔══ 42 CURSUS MILESTONES ═════════════════════════════════╗\n");
	printf(" ║                                                         ║\n");
	printf(" ║ [0] - libft                                             ║\n");
	printf(" ║ [1] - ft_printf | b2broot | get_next_line               ║\n");
	printf(" ║ [2] - push_swap | so_long-fractol-fdf | pipex-minitalk  ║\n");
	printf(" ║ [3] - philosophers | minishell                          ║\n");
	printf(" ║ [4] - netpractce | cpp's | cube3d-miniRT      ▄██▀ █▀██ ║\n");
	printf(" ║ [5] - inception | cpp's | webserver-ft_irc  ▄██▀   ▄█▀▄ ║\n");
	printf(" ║ [6] - trascendence                          ▀▀▀▀██ ▀▀▀▀ ║\n");
	printf(" ║                                                 ▀▀      ║\n");
	printf(" ╚═════════════════════════════════════════════════════════╝\n\n");
}

void	disclaimer(void)
{
	printf("\n");
	printf(" ╔══ %sDEADLINES 42 DISCLAIMER%s ══════════════════════════════╗\n", RD, F);
	printf(" ║                                                         ║\n");
	printf(" ║  This is %sNOT an official software%s from 42 Network       ║\n", RD, F);
	printf(" ║  and it does NOT replace the official info provided     ║\n");
	printf(" ║  by 42 pedago employee or any 42 staff.                 ║\n");
	printf(" ║                                                         ║\n");
	printf(" ║  This is %sjust a personal-purpose project%s to selftest    ║\n", RD, F);
	printf(" ║  skills for developing personal use tools.              ║\n");
	printf(" ║  The dates shown are just orientative to your kickoff   ║\n");
	printf(" ║  date.                                                  ║\n");
	printf(" ║  It might not match your current oficial deadline.      ║\n");
	printf(" ║  Use it carefully, just as an estimation, not oficial.  ║\n");
	printf(" ║                                                         ║\n");
	printf(" ║  If you have doubts about pace system:        ▄██▀ █▀██ ║\n");
	printf(" ║    - %scontact/ask your school Staff.%s         ▄██▀   ▄█▀▄ ║\n", RD, F);
	printf(" ║    - check intra documentation.             ▀▀▀▀██ ▀▀▀▀ ║\n");
	printf(" ║                                                 ▀▀      ║\n");
	printf(" ╚═════════════════════════════════════════════════════════╝\n\n");
}

void	holygraph(void)
{
	printf("\n ═ HOLYGRAPH ═══════════════════════════════════════════════\n\n");
	printf(" ╔═ M 6 ═══════════════════════════════════ exam rank 06 ══╗\n");
	printf(" ║ ╔═ M 5 ═══════════════════════════════ exam rank 05 ══╗ ║\n");
	printf(" ║ ║ ╔═ M 4 ═══════════════════════════ exam rank 04 ══╗ ║ ║\n");
	printf(" ║ ║ ║ ╔═ M 3 ═══════════════════════ exam rank 03 ══╗ ║ ║ ║\n");
	printf(" ║ ║ ║ ║ ╔══ M 2 ══════════════════ exam rank 02 ══╗ ║ ║ ║ ║\n");
	printf(" ║ ║ ║ ║ ║ ╔══ M 1 ══════════════════════════════╗ ║ ║ ║ ║ ║\n");
	printf(" ║ ║ ║ ║ ║ ║  ╔═ M 0 ══════════════════════════╗ ║ ║ ║ ║ ║ ║\n");
	printf(" ║ ║ ║ ║ ║ ║  ║              libft             ║ ║ ║ ║ ║ ║ ║\n");
	printf(" ║ ║ ║ ║ ║ ║  ╚════════════════════════════════╝ ║ ║ ║ ║ ║ ║\n");
	printf(" ║ ║ ║ ║ ║ ╚══ borntobeRoot ══ ft_printf ══ gnl ═╝ ║ ║ ║ ║ ║\n");
	printf(" ║ ║ ║ ║ ╚═ p_swap ══ pipex/mtalk ══ s_lo/frol/fdf═╝ ║ ║ ║ ║\n");
	printf(" ║ ║ ║ ╚═ philosophers ══════════════ minishell ═════╝ ║ ║ ║\n");
	printf(" ║ ║ ╚═ cube3d-miniRT ═════ netpractce ═════ cpp's ════╝ ║ ║\n");
	printf(" ║ ╚═ webserver-ft_irc ═════ inception ═════ cpp's ══════╝ ║\n");
	printf(" ╚═ trascendence ══════════════════════════════════════════╝\n\n");
}