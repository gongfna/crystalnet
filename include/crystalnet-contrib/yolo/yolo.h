#pragma once
#include <crystalnet-ext.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const uint32_t yolov2_input_size;

extern s_model_t *yolov2(context_t *);
extern s_model_t *yolov3(context_t *);  // TODO

#ifdef __cplusplus
}
#endif
