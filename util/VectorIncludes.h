#pragma once

#include <vector>

template <typename type>
bool vectorIncludesString(std::vector<type> vector, type value)
{
	for (type element : vector)
	{
		if (element == value)
		{
			return true;
		}
	}

	return false;
}
