int null = 0, *p = null; //Invalid since int cannot initialize int *

int null = 0, *p = &null; //Valid since the pointer now points to a reference 