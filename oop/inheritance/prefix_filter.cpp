#include "base_filter.cpp"
#include <iostream>

class PrefixFilter : public BaseFilter {
	public:
		bool isSpam(const std::string& message) override {
			std::cout << "[PrefixFilter] num / data Prefix Matching Detecting...\n";
			return false;
		}
};
