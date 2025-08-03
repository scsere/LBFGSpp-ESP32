#pragma once
#ifdef ESP_PLATFORM
#include "esp_log.h"
#else
#define ESP_LOGE(x, y) ;
#define ESP_LOGW(x, y) ;
#endif