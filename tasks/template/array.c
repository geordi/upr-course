#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <stdlib.h>
#include <assert.h>

void fill_array(int *array, const int len, const int start, const int increment) {
}

void print_array(const int *array, const int len) {
}

int num_count(const int *array, const int len, const int num) {
}

int in_interval(const int *array, const int len, const int from, const int to) {
}

double avg(const int *array, const int len) {
}

void min_max(const int *array, const int len, int *min, int *max) {
}

void array_reverse(int *array, const int len) {
}

int dot(const int *a, const int *b, const int len) {
}

void counting_sort(int *array, const int len, const int from, const int to) {
}

void test_fill_array() {
  int nums[6];
  int expected[] = {10, 15, 20, 25, 30, 35};

  fill_array(nums, sizeof(nums) / sizeof(*nums), 10, 5);

  // compare that two arrays are equal
  assert(memcmp(nums, expected, sizeof(expected)) == 0);

  // test we can pass NULL pointer
  fill_array(NULL, 10, 0, 0);
}

void test_num_count() {
  int nums[] = {10, 20, 10, 30};

  assert(num_count(nums, sizeof(nums) / sizeof(*nums), 10) == 2);
  assert(num_count(nums, sizeof(nums) / sizeof(*nums), 20) == 1);
  assert(num_count(nums, sizeof(nums) / sizeof(*nums), 200) == 0);
  assert(num_count(nums, 0, 200) == 0);
}

void test_in_interval() {
  int nums[] = {10, 20, 10, 30};

  assert(in_interval(nums, sizeof(nums) / sizeof(*nums), 10, 30) == 4);
  assert(in_interval(nums, sizeof(nums) / sizeof(*nums), 10, 29) == 3);
  assert(in_interval(nums, sizeof(nums) / sizeof(*nums), 11, 29) == 1);
  assert(in_interval(nums, sizeof(nums) / sizeof(*nums), 100, 200) == 0);
}

void test_avg() {
  {
    int nums[] = {10, 10, 10};
    assert(avg(nums, sizeof(nums) / sizeof(*nums)) == 10.0);
  }

  {
    int nums[] = {10, 20};
    assert(avg(nums, sizeof(nums) / sizeof(*nums)) == 15.0);
  }
  {
    int nums[] = {-10, 10};
    assert(avg(nums, sizeof(nums) / sizeof(*nums)) == 0);
  }
  {
    int nums[] = {1, 4, 5};
    assert(fabs(avg(nums, sizeof(nums) / sizeof(*nums)) - 3.33333) < 0.00001);
  }
}

void test_min_max() {
  int nums[] = {10, 10, 20, 10, 30, 5, 10};
  int min = -1, max = -1;

  min_max(nums, sizeof(nums) / sizeof(*nums), &min, &max);
  assert(min == 5 && max == 30);

  // test two first elements
  min_max(nums, 2, &min, &max);
  assert(min == 10 && max == 10);

  // try to pass NULLS to pointers
  min_max(NULL, 1, &min, &max);
  min_max(nums, 1, NULL, &max);
  min_max(nums, 1, &min, NULL);
}

void test_array_reverse() {
  int nums[] = {10, 20, 30, 40, 50};
  int expected[] = {50, 40, 30, 20, 10};

  array_reverse(nums, sizeof(nums) / sizeof(*nums));
  assert(memcmp(nums, expected, sizeof(expected)) == 0);
}

void test_dot() {
  {
    int a[] = {10, 20};
    int b[] = {20, -10};
    assert(dot(a, b, 2) == 0);
  }
  {
    int a[] = {10, 20};
    int b[] = {10, 20};
    assert(dot(a, b, 2) == 500);
  }
}

void test_counting_sort() {
  {
    int nums[] = {5, 4, 4, 3, 2, 2};
    int expected[] = {2, 2, 3, 4, 4, 5};

    counting_sort(nums, sizeof(nums) / sizeof(*nums), 0, 5);
    assert(memcmp(nums, expected, sizeof(expected)) == 0);
  }

  {
    int nums[] = {5, 4, 4, 3, 2, 2};
    int expected[] = {2, 2, 3, 4, 4, 5};

    // use only counters for 2, 3, 4, 5
    counting_sort(nums, sizeof(nums) / sizeof(*nums), 2, 5);
    assert(memcmp(nums, expected, sizeof(expected)) == 0);

    // check that we have counter for all numbers in array
    counting_sort(nums, sizeof(nums) / sizeof(*nums), 0, 1);
  }
}

int main() {
  test_fill_array();
  test_num_count();
  test_in_interval();
  test_avg();
  test_min_max();
  test_array_reverse();
  test_dot();
  test_counting_sort();

  return 0;
}

