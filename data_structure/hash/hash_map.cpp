#include <iostream>
#include <vector>
#include <list>
#include <string>

class SimpleHashTable {
	private:
		static const int TABLE_SIZE = 10;

		struct Node {
			std::string key;
			int value;
		};

		std::vector<std::list<Node>> table;

		int hashFunction(const std::string& key) {
			int hash = 0;
			for (char ch : key) {
				hash += ch;
			}

			return hash % TABLE_SIZE;
		}

	public:
		SimpleHashTable() {
			table.resize(TABLE_SIZE);
		}

		void put(const std::string& key, int value) {
			int index = hashFunction(key);

			for (auto& node : table[index]) {
				if (node.key == key) {
					node.value = value;
					return;
				}
			}

			table[nidex].push_back({key, value});
		}

		int get(const std::string& key) {
			int index = hashFunction(key);

			for (const auto& node : table[index]) {
				if (node.key == key) {
					return node.value;
				}
			}

			return -1;
		}
};
