##Data parsing:
The program should take at least 2 arguments\
if argc == 2
 - if there is no "" that means it's just an int, so the program should run easily
 - if there is a "", we should convert the string in parameter to convert the integers in a 2D array

if argc > 2
 - use ft_atoi to convert arguments into integers
 - if one integer is invalid (max_int, min_int, not duplicated or not an int), free+exit

**check if there is a duplicate :**\
we cannot fill an int array with 0 to check for doublons (like ft_union). instead, we should compare integers one by one :c\
maybe: we could create an array of int the size of argc, filling it with 0. whenever we encounter an int, we give tab[argc] = int. then we check if tab[x]=int == tab[y]=int\


##CHECK IF CHECKIFSORTED WORKS!!!!!!!!!!!!!!!


##Algorithm:
