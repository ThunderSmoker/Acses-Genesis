# Gideon: A Rule-based Voice Assistant

## Project Description
Gideon is a simple rule-based voice assistant written in C++ with integrated functionalities to manage various tasks. It includes user authentication, simple applications launcher, timer, and other utilities. The assistant uses basic voice feedback through a text-to-speech program called `espeak` to provide an interactive experience for users.

## Features
- **Account Management**: Create, log in, and recover passwords.
- **Applications Launcher**: Launch popular Windows applications and web-based utilities.
- **Timer**: Set a timer with specified hours, minutes, and seconds.
- **Voice Feedback**: Uses `espeak` to give verbal feedback to users.
- **Basic Security**: Stores encrypted usernames and passwords.

## Prerequisites
To run this project, ensure you have the following:
- A Windows-based system.
- A C++ compiler like `g++`.
- Installed `espeak` for text-to-speech functionality.
- `CreateProcess` permissions to launch system applications.

## Installation
1. **Clone or Download** the project files to your local system.
2. **Ensure `espeak` is installed** on your system. You can install it from [espeak's website](http://espeak.sourceforge.net/) or via package managers like Chocolatey.
3. **Compile the project** using a C++ compiler. For example:
   ```bash
   g++ -o gideon gideon.cpp
4. Run the compiled executable:
   ```bash
   ./gideon
## How to Use

### Creating an Account
1. Start the program and select "CREATE ACCOUNT".
2. Enter a username and password.
3. Your account is created, and the details are stored in a simple encrypted format.

### Logging In
1. Start the program and select "LOGIN".
2. Enter your username and password.
3. If correct, you are logged in, and you can use the main menu to interact with various functionalities.

### Forgot Password
1. Select "FORGOT PASSWORD" from the main menu.
2. Enter the remembered username, and if found, the encrypted password is revealed.

### Main Menu
After logging in, you are presented with the following options:

- **Apps**: Launch common applications or web-based utilities.
- **Timer**: Set a countdown timer with specified hours, minutes, and seconds.
- **Music**: Placeholder for a music player (not implemented).
- **Game**: Placeholder for a gaming feature (not implemented).
- **Notes**: Placeholder for a notes feature (not implemented).
- **Chatbot**: Placeholder for a chatbot (not implemented).
- **Logout**: Logout and return to the login menu.

### Voice Feedback
The program uses `espeak` to provide verbal cues and feedback for a more interactive experience.

## Important Notes

- **Security**: This project uses basic encryption for storing user information but should not be considered highly secure. It is for educational purposes and should not be used to store sensitive information.
- **Compatibility**: This project is designed for Windows. Some functionalities, like launching applications, might not work on other platforms.
- **Customization**: The assistant provides a simple structure, allowing customization and extension to add more features. Consider expanding its functionality as needed.

## Conclusion

This project is a beginner-level voice assistant I created to explore basic functionalities and learn about C++ programming with Windows system interactions. It is a simple tool that includes features like user authentication, application launching, and a basic timer, with voice feedback using `espeak`. 

Keep in mind that this is an entry-level project, not intended for professional use or to manage sensitive information. The focus was on experimenting with different concepts and gaining experience in C++ development. If you're interested in building similar projects, feel free to use this as a starting point and expand upon it as you learn more.

Thank you for checking out this project! I hope it helps you in your learning journey.
