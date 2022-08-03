/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:52:55 by mgagnon           #+#    #+#             */
/*   Updated: 2022/02/09 23:23:26 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

void	ft_stdin_write(int *ALL_INT, char *ALL_CHAR, char *filename)
{
	FILE_DESC = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	close(FILE_DESC);
	FILE_DESC = open(filename, O_WRONLY);
	ft_instruction();
	BUFFER = ' ';
	while (BUFFER != '\n')
	{
		while (read(0, &BUFFER, 1) > 0 && BUFFER != '\n')
			write(FILE_DESC, &BUFFER, 1);
		write(FILE_DESC, &BUFFER, 1);
		if (read(0, &BUFFER, 1) > 0 && BUFFER != '\n')
			write(FILE_DESC, &BUFFER, 1);
	}
	write(FILE_DESC, "\0", 1);
}

// incription des instructions de stdin
void	ft_instruction(void)
{
	write(1, "Bonjour, merci d'utiliser notre programme BSQ_TEAM_KARAOKE\n", 59);
	write(1, "Vous avez choisi d'utiliser l'entree standard\n", 46);
	write(1, "Sur la ligne 1, inscrivez les parametres de la map\n", 51);
	write(1, "Appuyez sur ENTER pour changer de ligne\n", 40);
	write(1, "Pour les autres lignes, inscrivez les in", 40);
	write(1, "formations de la map\n", 21);
	write(1, "Une fois terminer, appuyez une seconde f", 40);
	write(1, "ois sur ENTER pour quitter le mode entree standard.\n", 52);
}
