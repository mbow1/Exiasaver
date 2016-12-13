/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   getKey.c                                        __       __ __	          */
/*                                                  |    \  /   |       /\    */
/*   By: mduhoux <maxence.duhoux@viacesi.fr>        |__   \/    |      /  \   */
/*                                                  |     /\    |     /____\  */
/*   Created: 2016/12/13 12:46:40 by mduhoux        |__  /  \ __|__  /      \ */
/*   Updated: 2016/12/14 00:05:37 by mduhoux                                  */
/*                                                                            */
/* ************************************************************************** */

#include "getKey.h"

int	getKey(void)
{
	pid_t pid_child;
	pid_t parent_pid;
	char *pid_parent;

	parent_pid = getpid();
	if (pid_child != 0)
		pid_child = fork();

	sprintf(pid_parent, "%d", parent_pid);
	switch(pid_child)
	{
		case -1:
			printf("erreur du fork");
			exit (1);
			break;
		case 0:
			execl("../execfiles/getKeyPressed", pid_parent, (char *)NULL);
			break;
		default:
			break;
	}
}
