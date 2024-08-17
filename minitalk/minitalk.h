/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:42:18 by jmacera-          #+#    #+#             */
/*   Updated: 2024/03/21 15:22:11 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include "./printf/ft_printf.h"

int		ft_atoi(char *str);
void	ft_bit_write(int x);
void	ft_signal_control(int x);
void	ft_send_signal(int pid, char *str);

#endif
