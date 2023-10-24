{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdlib.h>\
\
int	*ft_range(int start, int end)\
\{\
	int *arr;\
	int i = 0;\
	int count = abs(start - end); //represent the number of the elements in the array which should be the absolute difference.\
	arr = malloc(sizeof(int) * (count + 1));\
	if (!arr)\
		return (NULL);\
	if (start <= end)\
	\{\
		while (start <= end)\
		\{\
			arr[i] = start;\
			start++;\
			i++;\
		\}\
	\}\
	else\
	\{\
		while (start >= end)\
		\{\
			arr[i] = start;\
			start--;\
			i++;\
		\}\
	\}\
	return(arr);\
\}\
\
/*\
#include <stdio.h>\
#include <stdlib.h>\
\
int main(void)\
\{\
	int start = 1;\
	int end = 5;\
	int *result = ft_range(start, end);\
\
	if (result)\
	\{\
		for (int i = 0; i <= abs(start - end); i++)\
		\{\
			printf("%d ", result[i]);\
		\}\
		free(result);\
		printf("\\n");\
	\}\
	return 0;\
\}\
*/}