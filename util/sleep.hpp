#pragma once

#include <thread>
#include <chrono>

namespace std
{
	namespace con
	{
		void sleep(int msecs) {
			std::this_thread::sleep_for(std::chrono::milliseconds(msecs));
		}
	}
}
