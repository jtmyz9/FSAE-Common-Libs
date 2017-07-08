/*
 * car_def.h
 *
 * Created: 1/10/2016 2:57:12 PM
 *  Author: MizzouRacing
 */ 


#ifndef CAR_DEF_H_
#define CAR_DEF_H_

#define INF_LOOP_PROT	100


/*
CAN Bus IDs for Car 23
*/
typedef enum
{	

	
	LEFT_FRONT = 0x661,
	RIGHT_FRONT = 0x662,
	LEFT_REAR = 0x663,
	RIGHT_REAR = 0x664,	
	ETC = 0x00,
	PEDAL = 0x345,
	THROTTLE = 0x393,
	PDM	= 0x50,
	/*
	* ECU Reception Block
	* First address must be divisable by 16
	*/
	STEERING_TX = 0x620,
	EGT_AMP = 0x621,
	IMU = 0x750
	} canbus_id;

/*
* i2c address assigned to devices in vehicle
* MLX90614, IMU(gyro, accel)
*/
typedef enum
{	
	//Programed I2C address for Melexis 
	INNER = 0x0A,
	MIDDLE = 0x0B,
	OUTER = 0x0C,
	BRAKE = 0x04,
	//I2C Mems sensors IMU rev1
	ACCEL = 0x19,
	GYRO = 0x35
	} i2c_id;

/*
* ETC error codes 
*/
typedef enum 
{
	NORMAL_OPERATION = 0,
	APPS_FAILURE,
	TPS_FAILURE,
	BSE_FAILURE
} ETC_error_codes;



#endif /* CAR_DEF_H_ */