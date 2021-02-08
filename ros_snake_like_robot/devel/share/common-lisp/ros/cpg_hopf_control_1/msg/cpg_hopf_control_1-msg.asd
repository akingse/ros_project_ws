
(cl:in-package :asdf)

(defsystem "cpg_hopf_control_1-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "msg_jointangle" :depends-on ("_package_msg_jointangle"))
    (:file "_package_msg_jointangle" :depends-on ("_package"))
  ))