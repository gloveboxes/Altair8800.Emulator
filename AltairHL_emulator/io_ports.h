/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

#pragma once

#include "dx_timer.h"
#include "dx_utilities.h"
#include "environment_types.h"
#include "iotc_manager.h"
#include <applibs/storage.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

DX_DECLARE_TIMER_HANDLER(port_timer_expired_handler);
DX_DECLARE_TIMER_HANDLER(tick_count_handler);
DX_DECLARE_ASYNC_HANDLER(async_publish_json_handler);
DX_DECLARE_ASYNC_HANDLER(async_publish_weather_handler);
DX_DECLARE_ASYNC_HANDLER(async_set_timer_handler);
DX_DECLARE_ASYNC_HANDLER(async_copyx_request_handler);

#ifdef AZURE_SPHERE
extern DX_GPIO_BINDING gpioRed;
extern DX_GPIO_BINDING gpioGreen;
extern DX_GPIO_BINDING gpioBlue;
#endif

extern ALTAIR_CONFIG_T altair_config;
extern DX_TIMER_BINDING tmr_port_timer_expired;
extern DX_TIMER_BINDING tmr_copyx_request;

extern DX_ASYNC_BINDING async_copyx_request;
extern DX_ASYNC_BINDING async_publish_json;
extern DX_ASYNC_BINDING async_publish_weather;
extern DX_ASYNC_BINDING async_set_timer; 

uint8_t io_port_in(uint8_t port);
void io_port_out(uint8_t port, uint8_t data);