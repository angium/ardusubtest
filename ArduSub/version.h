#pragma once

#include "ap_version.h"

#define THISFIRMWARE "ArduSub V3.5.3"
#define FIRMWARE_VERSION 3,5,3,FIRMWARE_VERSION_TYPE_OFFICIAL

#ifndef GIT_VERSION
#define FIRMWARE_STRING THISFIRMWARE
#else
#define FIRMWARE_STRING THISFIRMWARE " (" GIT_VERSION ")"
#endif