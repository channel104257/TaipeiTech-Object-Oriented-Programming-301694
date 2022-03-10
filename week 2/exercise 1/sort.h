#ifndef SORT_H
#define SORT_H

template < class T >

void sort(T &value1, T &value2, T &value3)
{
	if (value1 > value2)
	{
		T temp = value1;
		value1 = value2;
		value2 = temp;
	}

	if (value2 > value3)
	{
		T temp = value2;
		value2 = value3;
		value3 = temp;
	}

	if (value1 > value2)
	{
		T temp = value1;
		value1 = value2;
		value2 = temp;
	}
	
}

#endif // !SORT_H
