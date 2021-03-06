/*
 *
 *  JUMA.IO - JUMA SDK for STM families
 *
 *  Copyright (C) 2013-2016  JUMA Technology
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the Apache V2 License as published by
 *  the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#ifndef _ENV_SENSOR_H_
#define _ENV_SENSOR_H_

typedef enum _env_status_t{
   env_status_ok = 0,   
   env_status_error = 1,
} env_status_t;

typedef enum _env_sensor_selection{
   TEMP_HUMI_ENABLE            = 1,
   AIR_PRESSURE_ENABLE         = 2,
   ALL_ENABLE                  = 3,
} env_sensor_selsection_t;

env_status_t env_sensor_select_features(env_sensor_selsection_t features);
env_status_t env_sensor_start(void);
/*unit: degree centigrade ℃,eg: 26.66℃ */
env_status_t env_sensor_get_temperature(float* temperature);
/*unit: relative humidity rH,eg: 26.66%rH*/
env_status_t env_sensor_get_humidity(float* humidity);
env_status_t env_sensor_get_temperature_humidity(float* temperature, float* humidity);
/*unit absolute pressure hPa,eg:1000.00hPa*/
env_status_t env_sensor_get_air_pressure(float* air_pressure);

#endif /*ENV_SENSOR_H_*/

