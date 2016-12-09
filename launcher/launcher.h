/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   launcher.h                                      __       __ __	          */
/*                                                  |    \  /   |       /\    */
/*   By: mduhoux <maxence.duhoux@viacesi.fr>        |__   \/    |      /  \   */
/*                                                  |     /\    |     /____\  */
/*   Created: 2016/12/07 15:45:13 by mduhoux        |__  /  \ __|__  /      \ */
/*   Updated: 2016/12/09 10:32:47 by mduhoux                                  */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//fonction empty pour nettoyer le terminal
void	empty();

//focntion randomNumber pour definir un chiffre aleatoire dans le but d'executer un saver aleatoirement
int		randomNumber(void);

//fonction logs qui cree et modifie le fichier de logs du saver
int		logs(char *ex);
