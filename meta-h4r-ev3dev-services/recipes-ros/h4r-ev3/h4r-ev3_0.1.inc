SRC_URI = "https://github.com/Hacks4ROS/h4r_ev3_ctrl.git;protocol=git;branch=develop"

SRCREV="${AUTOREV}"


LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://../LICENSE;md5=66e1eeb3afdf47b310a8c763864b70c8"

SRC_URI[md5sum] = "???"
SRC_URI[sha256sum] = "???"

S = "${WORKDIR}/git/${ROS_SPN}"

inherit ros_catkin

CXXFLAGS:prepend = " -I${OECMAKE_BUILDPATH}/devel/include"