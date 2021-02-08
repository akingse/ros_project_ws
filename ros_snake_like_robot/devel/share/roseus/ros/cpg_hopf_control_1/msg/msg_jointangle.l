;; Auto-generated. Do not edit!


(when (boundp 'cpg_hopf_control_1::msg_jointangle)
  (if (not (find-package "CPG_HOPF_CONTROL_1"))
    (make-package "CPG_HOPF_CONTROL_1"))
  (shadow 'msg_jointangle (find-package "CPG_HOPF_CONTROL_1")))
(unless (find-package "CPG_HOPF_CONTROL_1::MSG_JOINTANGLE")
  (make-package "CPG_HOPF_CONTROL_1::MSG_JOINTANGLE"))

(in-package "ROS")
;;//! \htmlinclude msg_jointangle.msg.html


(defclass cpg_hopf_control_1::msg_jointangle
  :super ros::object
  :slots (_stamp _jointangle ))

(defmethod cpg_hopf_control_1::msg_jointangle
  (:init
   (&key
    ((:stamp __stamp) (instance ros::time :init))
    ((:jointangle __jointangle) (make-array 20 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _stamp __stamp)
   (setq _jointangle __jointangle)
   self)
  (:stamp
   (&optional __stamp)
   (if __stamp (setq _stamp __stamp)) _stamp)
  (:jointangle
   (&optional __jointangle)
   (if __jointangle (setq _jointangle __jointangle)) _jointangle)
  (:serialization-length
   ()
   (+
    ;; time _stamp
    8
    ;; float64[20] _jointangle
    (* 8    20)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; time _stamp
       (write-long (send _stamp :sec) s) (write-long (send _stamp :nsec) s)
     ;; float64[20] _jointangle
     (dotimes (i 20)
       (sys::poke (elt _jointangle i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; time _stamp
     (send _stamp :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _stamp :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64[20] _jointangle
   (dotimes (i (length _jointangle))
     (setf (elt _jointangle i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;;
   self)
  )

(setf (get cpg_hopf_control_1::msg_jointangle :md5sum-) "c599ebcef0cb4213f6d5e44ba736a1ea")
(setf (get cpg_hopf_control_1::msg_jointangle :datatype-) "cpg_hopf_control_1/msg_jointangle")
(setf (get cpg_hopf_control_1::msg_jointangle :definition-)
      "time stamp
float64[20] jointangle
")



(provide :cpg_hopf_control_1/msg_jointangle "c599ebcef0cb4213f6d5e44ba736a1ea")


