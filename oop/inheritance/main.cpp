#include <vector>
#include <memory>
#include "prefix_filter.cpp"
#include "ai_score_filter.cpp"

int main() {
	std::vector<std::unique_ptr<BaseFilter>> filters;

	filters.push_back(std::make_unique<PrefixFilter>());
	filters.push_back(std::make_unique<AiScoreFilter>());

	std::string test_message = "SPAM TEST MESSAGE";

	for (const auto& filter : filters) {
		if (filter->isSpam(test_message)) {
			std::cout << "-> SPAM DETECTED! BLOCKED\n";
			break;
		}
	}

	return 0;
}
