/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:48:50 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/11/01 20:23:42 by ssulkuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1

int	main(int	argc, char	**argv)
{
	int		file;
	char	buffer[BUF_SIZE + 1];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc >= 3)
		write(2, "Too many arguments.\n", 20);
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
		{
			write(2, "Could not read file.\n", 21);
			return (0);
		}
		while (read(file, &buffer, BUF_SIZE))
			write(1, &buffer, BUF_SIZE);
	}
	return (0);
}
