#include <stdint.h>
#ifndef __BENCHMARK_H__
#define __BENCHMARK_H__
// logging colors
#define FMT_COLOR_RED       "\e[0;31m"
#define FMT_COLOR_YELLOW    "\e[0;33m"
#define FMT_COLOR_CYAN      "\e[0;36m"
#define FMT_COLOR_END       "\e[0m"

// logging prefix
#define LOG_PREFIX_ERR      FMT_COLOR_RED "[ERROR]" FMT_COLOR_END
#define LOG_PREFIX_INFO     "[INFO]"
#define LOG_PREFIX_DBG      "[DEBUG]"
#define LOG_PREFIX_TRACE    "[TRACE]"


#define ONNX_LOG(...)	printf("\n\033[42;37m %s:%s %20s(%5d)\033[0m:", LOG_PREFIX_DBG, Benchmark.get_curr_time_formated(), __FUNCTION__, __LINE__) && printf(__VA_ARGS__)

typedef struct benchmark
{
    double (*get_curr_time)(void);
    char* (*get_curr_time_formated)(void);
    uint64_t (*get_current_time)(void);
    double (*lasting_time)(uint64_t start);
} benchmark;

extern const benchmark Benchmark;

#endif