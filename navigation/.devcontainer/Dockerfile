# Base ROS 2 Humble image
FROM ros:humble

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV ROS_DISTRO=humble

# Locale setup
RUN apt update && apt install -y locales && \
    locale-gen en_US en_US.UTF-8 && \
    update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

# Essential tools and ROS utilities
RUN apt install -y \
    curl wget git sudo gnupg2 lsb-release \
    build-essential python3-pip \
    python3-colcon-common-extensions \
    python3-vcstool python3-rosdep

# ROS 2 Navigation2 packages
RUN apt install -y \
    ros-humble-navigation2 \
    ros-humble-nav2-bringup \
    ros-humble-turtlebot3-msgs \
    ros-humble-turtlebot3-navigation2

# Set up workspace
RUN mkdir -p /workspace/nav2_ws/src
WORKDIR /workspace/nav2_ws

# Source ROS 2 environment
RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> /root/.bashrc
