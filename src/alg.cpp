// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  uint64_t k = 0;
  for (int i = 1; i*i <= value; i++) {
    if (value % i == 0) {
      k = k + 1;
    }
  }
  if (value == 1) {
    return false;
  }
  if (k == 1) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
    uint64_t p = 0, l = 0;
	while (n > 0) {
		if (checkPrime(p)) {
			l = p;
			--n;
		}
		++p;
	}
	return l;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t k = 1, p = value + 1;
	while (k > 0) {
    if (checkPrime(p)) {
			k = 0;
			return p;
		}
		p++;
	}
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t k = 0;
	for (int i = 1; i < hbound; i++) {
		if (checkPrime(i)) {
			k = k + i;
		}
	}
	return k;
}
