# Logger 

### This Logger can be used to log events either through the terminal, into a file or send it via TCP
#### It contains main class called Logger where we have defined three virtual methods:

* LogInTerminal
* LogInFile
* LogInServer
#### Three sub-classes that inhirit the methods of Logger class and override them:

* Class: LogError
* Class: LogWarning
* Class: LogVerbosity

#### Each sub-class send a special message (eg. LogError send Error: [message] time of log / LogWarning send Warning: [message] time)
#### Every log message can be displayed through the mentioned three interfaces.

# Use Case:

1. After compiling execute the the simple_server first to start listening and waiting for a handshake
2. Open a second terminal and execute the main program
3. You are about to enter to the odc but you need to enter your name first
4. If your name is either Imed, Chokri or Mohamed the program will log to a file (log.txt) with the message "authorized personnel"
5. If your name is either Oussama, Maher or Mazen the program will log in Terminal with the message "require a companion to enter"
6. If your name isn't one of the mentioned above names then the program will send log through TCP to the server with the message "unauthorized personnel !!"





Author: Oussama Lakhneche
