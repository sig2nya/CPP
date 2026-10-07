void run_spam_filter(int filter_type, const char* message) {
	if (filter_type == FILTER_PREFIX) {
		check_prefix_matching(message);
	}
	else if (filter_type == FILTER_BLACK_IP) {
		check_black_ip(message);
	}
	else if (filter_type == FILTER_AI_SCORE) {
		check_ai_score(message);
	}
}
