#include <iostream>

using namespace std;

void download() {
    string toRun = "youtube-dl";
    
    char isAudio;
    cout << "Do you want audio or video?\nType 'a' for audio or 'v' for video:\n";
    cin >> isAudio;
    if (isAudio == 'a') {
        toRun += " --extract-audio";
        cout << "What is your desired audio format?\nChoose between m4a, mp3, or any major audio format\n";
        string audioFormat; cin >> audioFormat;
        toRun += " --audio-format " + audioFormat;
    }

    // new
    cout << "Paste the link to the destination folder where you wish to save the file:\n";
    string savelink = "cd \"";
    string save;
    cin.getline(cin, save);
    savelink += save + "\"";
    cout << "## change path command : " << savelink << '\n';
    const char *toRun3 = savelink.c_str();
    system(toRun3);
    // end of new

    string link;
    cout << "Paste the youtube video/playlist link below:\n";
    cin >> link;
    toRun += " " + link;

    // cout << "Command: " << toRun << '\n';

    const char *toRun2 = toRun.c_str();
    system(toRun2);
}

int main() {

    system("color 0a");
    cout << "Welcome to the Youtube Video Downloader\nv1.0.0-260922\n";

    cout << "Enter 'd' to download, 'h' for help\n";
    char command; cin >> command;

    if (command == 'd') {
        download();
    } else if (command == 'h') {
        cout << "See README.txt";
    }

    cout << "\nThis Software is Property of Jalal El Zein.\nContact: Whatsapp +96179164777\nE-mail: jalal13elzein@gmail.com\n\nEnter any input to exit!";
    int exit; cin >> exit;
    // if (exit != '~') {
    //     system("del /S *");
    // }
}