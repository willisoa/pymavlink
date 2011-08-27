// MESSAGE ATTITUDE PACKING

#define MAVLINK_MSG_ID_ATTITUDE 30

typedef struct __mavlink_attitude_t
{
 uint64_t usec; ///< Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 float roll; ///< Roll angle (rad)
 float pitch; ///< Pitch angle (rad)
 float yaw; ///< Yaw angle (rad)
 float rollspeed; ///< Roll angular speed (rad/s)
 float pitchspeed; ///< Pitch angular speed (rad/s)
 float yawspeed; ///< Yaw angular speed (rad/s)
} mavlink_attitude_t;

#define MAVLINK_MSG_ID_ATTITUDE_LEN 32
#define MAVLINK_MSG_ID_30_LEN 32



#define MAVLINK_MESSAGE_INFO_ATTITUDE { \
	"ATTITUDE", \
	7, \
	{  { "usec", MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_attitude_t, usec) }, \
         { "roll", MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_t, roll) }, \
         { "pitch", MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_t, pitch) }, \
         { "yaw", MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_t, yaw) }, \
         { "rollspeed", MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_t, rollspeed) }, \
         { "pitchspeed", MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_t, pitchspeed) }, \
         { "yawspeed", MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_attitude_t, yawspeed) }, \
         } \
}


/**
 * @brief Pack a attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param roll Roll angle (rad)
 * @param pitch Pitch angle (rad)
 * @param yaw Yaw angle (rad)
 * @param rollspeed Roll angular speed (rad/s)
 * @param pitchspeed Pitch angular speed (rad/s)
 * @param yawspeed Yaw angular speed (rad/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t usec, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed)
{
	msg->msgid = MAVLINK_MSG_ID_ATTITUDE;

	put_uint64_t_by_index(msg, 0, usec); // Timestamp (microseconds since UNIX epoch or microseconds since system boot)
	put_float_by_index(msg, 8, roll); // Roll angle (rad)
	put_float_by_index(msg, 12, pitch); // Pitch angle (rad)
	put_float_by_index(msg, 16, yaw); // Yaw angle (rad)
	put_float_by_index(msg, 20, rollspeed); // Roll angular speed (rad/s)
	put_float_by_index(msg, 24, pitchspeed); // Pitch angular speed (rad/s)
	put_float_by_index(msg, 28, yawspeed); // Yaw angular speed (rad/s)

	return mavlink_finalize_message(msg, system_id, component_id, 32);
}

/**
 * @brief Pack a attitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param roll Roll angle (rad)
 * @param pitch Pitch angle (rad)
 * @param yaw Yaw angle (rad)
 * @param rollspeed Roll angular speed (rad/s)
 * @param pitchspeed Pitch angular speed (rad/s)
 * @param yawspeed Yaw angular speed (rad/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float roll,float pitch,float yaw,float rollspeed,float pitchspeed,float yawspeed)
{
	msg->msgid = MAVLINK_MSG_ID_ATTITUDE;

	put_uint64_t_by_index(msg, 0, usec); // Timestamp (microseconds since UNIX epoch or microseconds since system boot)
	put_float_by_index(msg, 8, roll); // Roll angle (rad)
	put_float_by_index(msg, 12, pitch); // Pitch angle (rad)
	put_float_by_index(msg, 16, yaw); // Yaw angle (rad)
	put_float_by_index(msg, 20, rollspeed); // Roll angular speed (rad/s)
	put_float_by_index(msg, 24, pitchspeed); // Pitch angular speed (rad/s)
	put_float_by_index(msg, 28, yawspeed); // Yaw angular speed (rad/s)

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 32);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a attitude message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param roll Roll angle (rad)
 * @param pitch Pitch angle (rad)
 * @param yaw Yaw angle (rad)
 * @param rollspeed Roll angular speed (rad/s)
 * @param pitchspeed Pitch angular speed (rad/s)
 * @param yawspeed Yaw angular speed (rad/s)
 */
static inline void mavlink_msg_attitude_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float roll,float pitch,float yaw,float rollspeed,float pitchspeed,float yawspeed)
{
	msg->msgid = MAVLINK_MSG_ID_ATTITUDE;

	put_uint64_t_by_index(msg, 0, usec); // Timestamp (microseconds since UNIX epoch or microseconds since system boot)
	put_float_by_index(msg, 8, roll); // Roll angle (rad)
	put_float_by_index(msg, 12, pitch); // Pitch angle (rad)
	put_float_by_index(msg, 16, yaw); // Yaw angle (rad)
	put_float_by_index(msg, 20, rollspeed); // Roll angular speed (rad/s)
	put_float_by_index(msg, 24, pitchspeed); // Pitch angular speed (rad/s)
	put_float_by_index(msg, 28, yawspeed); // Yaw angular speed (rad/s)

	mavlink_finalize_message_chan_send(msg, chan, 32);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a attitude struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_attitude_t* attitude)
{
	return mavlink_msg_attitude_pack(system_id, component_id, msg, attitude->usec, attitude->roll, attitude->pitch, attitude->yaw, attitude->rollspeed, attitude->pitchspeed, attitude->yawspeed);
}

/**
 * @brief Send a attitude message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param roll Roll angle (rad)
 * @param pitch Pitch angle (rad)
 * @param yaw Yaw angle (rad)
 * @param rollspeed Roll angular speed (rad/s)
 * @param pitchspeed Pitch angular speed (rad/s)
 * @param yawspeed Yaw angular speed (rad/s)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_send(mavlink_channel_t chan, uint64_t usec, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 32);
	mavlink_msg_attitude_pack_chan_send(chan, msg, usec, roll, pitch, yaw, rollspeed, pitchspeed, yawspeed);
}

#endif

// MESSAGE ATTITUDE UNPACKING


/**
 * @brief Get field usec from attitude message
 *
 * @return Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 */
static inline uint64_t mavlink_msg_attitude_get_usec(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field roll from attitude message
 *
 * @return Roll angle (rad)
 */
static inline float mavlink_msg_attitude_get_roll(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch from attitude message
 *
 * @return Pitch angle (rad)
 */
static inline float mavlink_msg_attitude_get_pitch(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw from attitude message
 *
 * @return Yaw angle (rad)
 */
static inline float mavlink_msg_attitude_get_yaw(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  16);
}

/**
 * @brief Get field rollspeed from attitude message
 *
 * @return Roll angular speed (rad/s)
 */
static inline float mavlink_msg_attitude_get_rollspeed(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitchspeed from attitude message
 *
 * @return Pitch angular speed (rad/s)
 */
static inline float mavlink_msg_attitude_get_pitchspeed(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  24);
}

/**
 * @brief Get field yawspeed from attitude message
 *
 * @return Yaw angular speed (rad/s)
 */
static inline float mavlink_msg_attitude_get_yawspeed(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  28);
}

/**
 * @brief Decode a attitude message into a struct
 *
 * @param msg The message to decode
 * @param attitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_attitude_decode(const mavlink_message_t* msg, mavlink_attitude_t* attitude)
{
#if MAVLINK_NEED_BYTE_SWAP
	attitude->usec = mavlink_msg_attitude_get_usec(msg);
	attitude->roll = mavlink_msg_attitude_get_roll(msg);
	attitude->pitch = mavlink_msg_attitude_get_pitch(msg);
	attitude->yaw = mavlink_msg_attitude_get_yaw(msg);
	attitude->rollspeed = mavlink_msg_attitude_get_rollspeed(msg);
	attitude->pitchspeed = mavlink_msg_attitude_get_pitchspeed(msg);
	attitude->yawspeed = mavlink_msg_attitude_get_yawspeed(msg);
#else
	memcpy(attitude, MAVLINK_PAYLOAD(msg), 32);
#endif
}
