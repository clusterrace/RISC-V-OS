#pragma once

struct sbiret {
  long error;
  long value;
};

#define PANIC(fmt, ...)                                                   \
  do {                                                                    \
    printf("%s - PANIC: %s:%d: " fmt "\n", __DATE__, __FILE__, __LINE__, ##__VA_ARGS__); \
    while (1) {                                                           \
    }                                                                     \
  } while (0)