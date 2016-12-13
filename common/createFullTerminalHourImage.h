#pragma once
#include "struct_image.h"
#include "createUniformImage.h"
#include "mergeImages.h"
#include "centerImage.h"
#include <time.h>

//createFullTerminalHourImage
// Crée une image de la taille du terminal avec l'heure centrée dedans
// Retourne l'image mallocée
image * createFullTerminalHourImage(image numbersList[11]);