/**
 * @file main.cpp
 * @author Group 5
 * @brief Client side C/C++ program to demonstrate Socket programming for Bingo game.
 * @version 0.1
 * @date 2022-02-11
 */  
#include "client.cpp"

/**
 * @brief This is the entry for the client program.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char* argv[])
{
    int sock = 0;
    
    const char* connectRPC = "connect;MIKE;MIKE;";
    //const char* statusRPC = "status;";
    const char* logoffRPC = "disconnect;";
    char buffer[1024] = { 0 };
    const char* serverAddress = argv[1];
    // const int port = atoi(argv[2]);

    bool bConnect = ConnectToServer();
    // bool bConnect = ConnectToServer(serverAddress, port, sock);

    if (bConnect)
    {
        std::cout << "connected" << endl;
        // strcpy(buffer, connectRPC);
        // int nlen = strlen(buffer);
        // buffer[nlen] = 0;   // Put the null terminator

        // send(sock, buffer, strlen(buffer) + 1, 0);
        // read(sock, buffer, 1024);

        // read(sock, buffer, 1024);
        // cout << "%s\n", buffer) << endl;

        // cout << "What is your message for the server? " << endl;
        // char message[80];
        // std::cin.getline(message, sizeof message);
        // send(sock, message, strlen(message) + 1, 0);
    }
    else
    {
        cout << "\nExit without calling RPC.\n" << endl;
    }

    // Sleep 1 to 10 seconds randomly
    // int seconds = 1 + (rand() % static_cast<int>(10));
    // cout << "\nSleeping...\n" << endl;
    // sleep(seconds);

    // Disconnect Message
    if (bConnect)
    {
        // strcpy(buffer, logoffRPC);
        // int nlen = strlen(buffer);
        // buffer[nlen] = 0;   // Put the null terminator
        // send(sock, buffer, strlen(buffer) + 1, 0);
        // read(sock, buffer, 1024);

        cout << "\nDisconnected.\n" << endl;
    }
    else
    {
        cout << "\nExit without calling RPC.\n" << endl;
    }

    // Terminate connection.
    // close(sock);

    return 0;
}