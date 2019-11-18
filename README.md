# TCPServerToolkit-Cpp

This is a TCP server toolkit for Windows (the code is not yet portable) using socket selector (1 thread to handle all clients I/O).
A sample implementation shows how to use the toolkit. SampleServer is a simple echo server.

ThreadSafeQueue is a class to share data between multiple threads (for a producer/consumer purpose).
