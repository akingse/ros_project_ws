// Auto-generated. Do not edit!

// (in-package cpg_hopf_control_1.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class msg_jointangle {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.stamp = null;
      this.jointangle = null;
    }
    else {
      if (initObj.hasOwnProperty('stamp')) {
        this.stamp = initObj.stamp
      }
      else {
        this.stamp = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('jointangle')) {
        this.jointangle = initObj.jointangle
      }
      else {
        this.jointangle = new Array(20).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type msg_jointangle
    // Serialize message field [stamp]
    bufferOffset = _serializer.time(obj.stamp, buffer, bufferOffset);
    // Check that the constant length array field [jointangle] has the right length
    if (obj.jointangle.length !== 20) {
      throw new Error('Unable to serialize array field jointangle - length must be 20')
    }
    // Serialize message field [jointangle]
    bufferOffset = _arraySerializer.float64(obj.jointangle, buffer, bufferOffset, 20);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type msg_jointangle
    let len;
    let data = new msg_jointangle(null);
    // Deserialize message field [stamp]
    data.stamp = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [jointangle]
    data.jointangle = _arrayDeserializer.float64(buffer, bufferOffset, 20)
    return data;
  }

  static getMessageSize(object) {
    return 168;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cpg_hopf_control_1/msg_jointangle';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c599ebcef0cb4213f6d5e44ba736a1ea';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    time stamp
    float64[20] jointangle
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new msg_jointangle(null);
    if (msg.stamp !== undefined) {
      resolved.stamp = msg.stamp;
    }
    else {
      resolved.stamp = {secs: 0, nsecs: 0}
    }

    if (msg.jointangle !== undefined) {
      resolved.jointangle = msg.jointangle;
    }
    else {
      resolved.jointangle = new Array(20).fill(0)
    }

    return resolved;
    }
};

module.exports = msg_jointangle;
