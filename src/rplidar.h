#ifndef __RPLIDAR_H__
#define __RPLIDAR_H__

#include <rtthread.h>
#include <rtdevice.h>
#include <rplidar_cmd.h>

extern char rp_lidar_get_char(rt_device_t rplidar);

rt_device_t rp_lidar_create(const char* lidar_name);
rt_err_t rp_lidar_init(rt_device_t lidar);

rt_err_t rp_lidar_get_health(rt_device_t lidar, rplidar_response_device_health_t* health);

#endif // __RPLIDAR_H__