/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include "general.h"
#include <stdlib.h>

struct CaravanImplementation{
  int length = 0;
  struct Node* head;
};

Caravan new_caravan()
{
  struct CaravanImplementation* list;
  list = (struct CaravanImplementation*) malloc(sizeof(struct Node));
  list->head = (struct Node*) malloc(sizeof(struct Node));
    return list;

}

int get_length(Caravan caravan)
{
  if(caravan->length == 0){
    return 0;
  }
  return caravan->length - 1;
}

void delete_caravan(Caravan caravan)
{
  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(animal != 0){
    if(caravan->head != NULL){
      add_to_caravan(animal, caravan);
      caravan->head->data = animal;
    }
  }


  caravan->length = caravan->length + 1;
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan){

}
