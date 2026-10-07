#ifndef BASE_FILTER_HPP
#define BASE_FILTER_HPP

#include <string>

class BaseFilter {
	public:
		virtual ~BaseFilter() = default;

		virtual bool isSpam(const std::string& message) = 0;
};

#endif
