class Solution {
    private:
	std::unordered_map<char, char> m;
	std::string alpha = "abcdefghijklmnopqrstuvwxyz";
	inline void createMapping(std::string &order)
	{
		for (int i = 0; i < 26; i++)
			m[order[i]] = alpha[i];
	}

	inline void mapWord(std::string &word, std::string &alpha)
	{
		for (auto &c : word)
			c = m[c];
	}


public:
    inline bool isAlienSorted(std::vector<std::string> &words, std::string &order)
	{
		const auto len = words.size();
		createMapping(order);

		for (int i = 0; i < len - 1; i++)
		{
			auto &w1 = words[i];
			if (i == 0)
				mapWord(w1, order);
			auto &w2 = words[i + 1];
			mapWord(w2, order);
			if (w1 > w2)
				return false;
		}

		return true;
	}
    
    
};