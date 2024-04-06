//
// Created by shichi on 2024/04/06.
// 部分文字列を全通り取得する
//

#include "lib_code.h"

sts getAllSubstrings(const string &s) {
  set<string> st;

  for (int i = 0; i < s.size(); i++) {
    for (int j = 1; i + j <= s.size(); j++) {
      st.insert(s.substr(i, j));
    }
  }

  return st;
}