//
// Created by shichi on 2024/02/18.
// 文字列分割
//

#include "lib_code.h"

// s: 文字列, delimiter: 分割区切り文字
vs split(const string &s, char delimiter) {
  vs tokens;
  string token;
  istringstream tokenStream(s);

  while (getline(tokenStream, token, delimiter)) {
    tokens.push_back(token);
  }

  return tokens;
}

// s: 文字列, delimiter: 分割区切り文字
vsv split_speed(const string_view &s, char delimiter) {
  vsv tokens;
  size_t start = 0;
  size_t end = s.find(delimiter);

  while (end != string_view::npos) {
    tokens.push_back(s.substr(start, end - start));
    start = end + 1;
    end = s.find(delimiter, start);
  }

  tokens.push_back(s.substr(start));

  return tokens;
}