// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
	for (int i = 2; i < value; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

uint64_t nPrime(uint64_t n) {
	uint64_t k = 0;
	uint64_t num = 2;
	while (k != n) {
		if (checkPrime(num)) {
			k += 1;
		}
		if (k == n) {
			return num;
		}
		num += 1;
	}
}

uint64_t nextPrime(uint64_t value) {
	uint64_t k = 0;
	for (uint64_t i = value + 1; ; i++) {
		if (k == 1) {
			return i-1;
		}
		k = 0;
		for (uint64_t j = 2; j <= i; j++) {
			if (i % j == 0) {
				k += 1;
			}
		}	
	}
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int i = 2; i < hbound; i++) {
	  if (checkPrime(i)) {
	  sum += i;
	  }
  }
  return sum;
}
