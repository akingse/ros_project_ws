; Auto-generated. Do not edit!


(cl:in-package cpg_hopf_control_1-msg)


;//! \htmlinclude msg_jointangle.msg.html

(cl:defclass <msg_jointangle> (roslisp-msg-protocol:ros-message)
  ((stamp
    :reader stamp
    :initarg :stamp
    :type cl:real
    :initform 0)
   (jointangle
    :reader jointangle
    :initarg :jointangle
    :type (cl:vector cl:float)
   :initform (cl:make-array 20 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass msg_jointangle (<msg_jointangle>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <msg_jointangle>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'msg_jointangle)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cpg_hopf_control_1-msg:<msg_jointangle> is deprecated: use cpg_hopf_control_1-msg:msg_jointangle instead.")))

(cl:ensure-generic-function 'stamp-val :lambda-list '(m))
(cl:defmethod stamp-val ((m <msg_jointangle>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cpg_hopf_control_1-msg:stamp-val is deprecated.  Use cpg_hopf_control_1-msg:stamp instead.")
  (stamp m))

(cl:ensure-generic-function 'jointangle-val :lambda-list '(m))
(cl:defmethod jointangle-val ((m <msg_jointangle>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cpg_hopf_control_1-msg:jointangle-val is deprecated.  Use cpg_hopf_control_1-msg:jointangle instead.")
  (jointangle m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <msg_jointangle>) ostream)
  "Serializes a message object of type '<msg_jointangle>"
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'stamp)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'stamp) (cl:floor (cl:slot-value msg 'stamp)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'jointangle))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <msg_jointangle>) istream)
  "Deserializes a message object of type '<msg_jointangle>"
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'stamp) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
  (cl:setf (cl:slot-value msg 'jointangle) (cl:make-array 20))
  (cl:let ((vals (cl:slot-value msg 'jointangle)))
    (cl:dotimes (i 20)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<msg_jointangle>)))
  "Returns string type for a message object of type '<msg_jointangle>"
  "cpg_hopf_control_1/msg_jointangle")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'msg_jointangle)))
  "Returns string type for a message object of type 'msg_jointangle"
  "cpg_hopf_control_1/msg_jointangle")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<msg_jointangle>)))
  "Returns md5sum for a message object of type '<msg_jointangle>"
  "c599ebcef0cb4213f6d5e44ba736a1ea")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'msg_jointangle)))
  "Returns md5sum for a message object of type 'msg_jointangle"
  "c599ebcef0cb4213f6d5e44ba736a1ea")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<msg_jointangle>)))
  "Returns full string definition for message of type '<msg_jointangle>"
  (cl:format cl:nil "time stamp~%float64[20] jointangle~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'msg_jointangle)))
  "Returns full string definition for message of type 'msg_jointangle"
  (cl:format cl:nil "time stamp~%float64[20] jointangle~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <msg_jointangle>))
  (cl:+ 0
     8
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'jointangle) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <msg_jointangle>))
  "Converts a ROS message object to a list"
  (cl:list 'msg_jointangle
    (cl:cons ':stamp (stamp msg))
    (cl:cons ':jointangle (jointangle msg))
))
