# ros2_dev_containers
This repository consist of Dev containers files of ROS 2 for  Navigation
![image](https://github.com/user-attachments/assets/89f92b5d-fc77-4d96-8df8-0c6fd122dd3c)
# ROS 2 Navigation Dev Container 🧭

This repository provides a pre-configured **Dev Container** for developing with the **ROS 2 Navigation Stack (Nav2)** using **ROS 2 Jazzy** on **Ubuntu 24.04**.

It uses **Docker** and **VS Code Remote - Containers** to offer a consistent, isolated, and reproducible development environment for robot navigation.

---

## 🚀 Features

- 🧠 ROS 2 Jazzy with Navigation Stack (Nav2)
- 🐳 Dev Container with Docker support
- 🖥️ Integration with VS Code Remote - Containers
- 🗺️ Launch and test navigation with TurtleBot3 and simulated maps
- 🔄 Pre-configured workspace for building and testing navigation packages

---

## 🧰 Prerequisites

- [Docker](https://www.docker.com/)
- [Visual Studio Code](https://code.visualstudio.com/)
- [Remote - Containers Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

---

## 📦 Folder Structure

```bash
navigation/
├── .devcontainer/         # Dev container configuration
│   ├── devcontainer.json
│   └── Dockerfile
├── ros2_ws/               # ROS 2 Workspace
│   ├── src/
│   ├── build/
│   └── install/
└── README.md              # This file

1.Clone the repository:

git clone https://github.com/Venkatesh7981/ros2_dev_containers.git
cd ros2_dev_containers/navigation

2.Open in VS Code and select:
Reopen in Container (you’ll be prompted by VS Code if Docker is running)

3.Build the workspace inside the container:

cd ros2_ws
colcon build
source install/setup.bash

4.Run a navigation
source /opt/ros/jazzy/setup.bash
ros2 launch nav2_bringup tb3_simulation_launch.py

