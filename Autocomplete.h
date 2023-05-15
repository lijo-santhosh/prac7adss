//worked with johna
#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <string>
#include <vector>

class Autocomplete {
 private:
  struct TrieNode {
    std::vector<TrieNode*> Child;
    bool wordEnd;

    TrieNode() {
      wordEnd = false;
      Child = std::vector<TrieNode*>(26, nullptr);
    }
  };

  TrieNode* root;

 public:
  Autocomplete();

  void insert(std::string word);

  std::vector<std::string> getTheSuggestions(std::string PartWord);

  void getTheWords(std::string wordBuilt, TrieNode* current, std::vector<std::string>& suggestions);
};

#endif
