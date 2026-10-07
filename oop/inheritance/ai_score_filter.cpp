#include "base_filter.cpp"
#include <iostream>

class AiScoreFilter : public BaseFilter {
	public:
		bool isSpam(const std::string& message) override {
			std::cout << "[AiScoreFilter] AI Spam Score Detecting...\n";
			return false;
		}
};
