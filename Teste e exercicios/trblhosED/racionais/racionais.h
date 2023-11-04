#ifndef _RACIONAIS_H_
#define _RACIONAIS_H_


typedef struct _racionais_ {
	int num;
	int den;
} Tq;

Tq neg (Tq q);
Tq sum (Tq v1, Tq v2);
Tq sub (Tq v1, Tq v2);
Tq mut (Tq v1, Tq v2);
Tq div (Tq v1, Tq v2);

#endif
