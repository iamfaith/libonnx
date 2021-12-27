#ifndef __DEFAULT_H__
#define __DEFAULT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <onnx.h>

void * resolver_default_create(void);
void resolver_default_destroy(void * rctx);

#include <op_declaration.h>



extern struct onnx_resolver_t resolver_default;

#ifdef __cplusplus
}
#endif

#endif /* __DEFAULT_H__ */
