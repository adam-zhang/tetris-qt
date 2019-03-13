#ifndef __TOOLS__H
#define __TOOLS__H

#include <stdlib.h>

class tools
{
	private:
		tools();
		~tools();
	public:
		static void swap(int& a, int& b)
		{
			int t = a;
			a = b;
			b = t;
		}

		static int getrand(int min, int max)
		{
			return min + rand() % (max - min ) + 1;
		}

};
#endif//__TOOLS__H
