#include <sys/time.h>
#include "benchmark.h"
#include <stdio.h>
#include <time.h>
#include <stdint.h>

static inline double get_curr_time(void) 
{
    struct timeval tv;
    gettimeofday(&tv, NULL);

    return tv.tv_sec * 1000.0 + tv.tv_usec / 1000.0;
}
////////////////////////////////////////////////////////
static inline uint64_t get_current_time(void)
{
	struct timeval tv;

	gettimeofday(&tv, 0);
	return (uint64_t)(tv.tv_sec * 1000000000ULL + tv.tv_usec * 1000);
}

double lasting_time(uint64_t start)
{
    uint64_t end = get_current_time();
    return (double)(end - start) / 1000.0f / 1000.0f;
}

////////////////////////////////////////////////////////
static inline char *get_curr_time_formated()
{
    static char nowtime[20] = { 0 };
    time_t curr_time;
    time(&curr_time);
    strftime(nowtime, 20, "%Y-%m-%d %H:%M:%S", localtime(&curr_time));
    return nowtime;
}

const benchmark Benchmark = {
    .get_curr_time = get_curr_time,
    .get_curr_time_formated = get_curr_time_formated,
    .get_current_time = get_current_time,
    .lasting_time = lasting_time,
};