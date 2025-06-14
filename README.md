<!-- Project Title -->
<h1 align="center">42 - Minitalk 📡</h1>

<!-- Project Description -->
<p align="center">
The Minitalk project is a program that enables communication between a server and a client in Unix-based operating systems. This communication channel is created using Unix's signal mechanism. The project offers an opportunity to understand and implement basic concepts such as signal handling and IPC (Inter-Process Communication).
</p>

<!-- [Project Logo or Image](https://github.com/ayogun/42-project-badges/blob/main/badges/minitalkm.png) -->
<p align="center">
  <a target="blank"><img src="https://github.com/deryaxacar/42-Minitalk/blob/main/minitalk.png" height="150" width="150" /></a>
</p>

## Project Goal 🎯

The main goal of the Minitalk project is to establish communication between two processes using Unix signals and facilitate data exchange. This project helps deepen our understanding of Unix operating systems and enhances our system-level programming skills.

Communication between the server and client happens by running two separate programs: a server program and a client program. The server program catches a specific signal to receive and process messages. The client program sends a signal to the server to transmit a message. In this way, data can be exchanged between the two programs.

The project provides an opportunity to understand the concept of IPC, which plays a fundamental role in network applications and client-server architecture. It also offers practical experience in implementing and handling the signal mechanism, one of the core features of Unix operating systems.

The Minitalk project is an essential learning tool for anyone who wants to develop a deep understanding of operating systems and networking concepts, as it creates a simple communication channel using Unix signals while illustrating how a basic network application works.

## Use Cases 📜

The Minitalk project includes the following use cases:

- Creating a server and client
- Sending messages between the server and client
- Properly establishing and managing the communication channel

## Project Structure 📁

The Minitalk project may include the following components:

- **minitalk.h**: Header file containing function prototypes and necessary definitions.
- **server.c**: C file containing server functions and signal handlers.
- **client.c**: C file containing client functions and signal handlers.
- **utils.c**: C file containing utility functions and data structures.
- **Makefile**: Makefile used to automate the compilation and execution of the project.

## Bonus Section 🌟

- **client_bonus.c**: Bonus C file containing client functions and signal handlers.
- **server_bonus.c**: Bonus C file containing server functions and signal handlers.
- **utils_bonus.c**: C file containing bonus section utility functions and data structures.
- **Makefile**: Makefile used to automate the compilation and execution of the project.

## Requirements ⚙️

To run the Minitalk project, the following requirements must be met:

- Unix-based operating system (Linux, macOS)
- GCC compiler

## Installation 🛠️

Follow these steps to run the project locally:

1. Clone the repository to your local machine: `git clone https://github.com/deryaxacar/minitalk.git`
2. Navigate to the project directory: `cd minitalk`
3. Run the Makefile to compile the server and client: `make`

## Usage 🚀

To run the server and client, follow these steps:

1. Start the server: `./server`
2. Start the client and send a message to the server: `./client [server_pid] [message]`

---

<p align="center">2025 This project was created by Derya ACAR.</p>

