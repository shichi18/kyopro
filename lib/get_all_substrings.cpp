//
// Created by shichi on 2024/04/06.
//

#include <bits/stdc++.h>
#include "lib_code.h"

vs getAllSubstrings(const basic_string<char> &str) {
  vs substrings;
  int length = LEN(str);

  for (int start = 0; start < length; start++) {
    for (int end = start; end < length; end++) {
      substrings.push_back(str.substr(start, end - start + 1));
    }
  }

  UNIQUE(substrings);

  return substrings;
}