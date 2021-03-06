/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   randomImage.c                                   __       __ __	      */
/*                                                  |    \  /   |       /\    */
/*   By: mduhoux <maxence.duhoux@viacesi.fr>        |__   \/    |      /  \   */
/*                                                  |     /\    |     /____\  */
/*   Created: 2016/12/09 09:58:40 by mduhoux        |__  /  \ __|__  /      \ */
/*   Updated: 2016/12/12 13:04:13 by mduhoux                                  */
/*                                                                            */
/* ************************************************************************** */

#include "launcher.h"

char * randomImage(char *argumentsList)
{
	DIR *directory;
	struct dirent *dir;
	int randomNumber;
	char * filenames[100];
	char * filename;
	int i;
	int	j;
	
	i = 0;
	directory = opendir(argumentsList);
	if (directory)									//boucle qui copie le nom des repertoires
	{
		while ((dir = readdir(directory)) != NULL)	//dans un tableau afin de selectionner
		{											//aleatoirement un fichier d'image
			if (dir->d_type == DT_REG)
			{
				filenames[i] = malloc(strlen(dir->d_name) * sizeof(char));
				strcpy(filenames[i], dir->d_name);
				i++;
			}
		}
	}
	closedir(directory);



	randomNumber = rand()%i;

	filename = malloc(strlen(filenames[randomNumber]) * sizeof(char));

	strcpy(filename, filenames[randomNumber]);

	for (j = 0; j < i; j++) //On free tous les mallocs précédents
	{
		free(filenames[j]);
	}

	//printf("fichier %s\n", filename);

	return filename;
}
