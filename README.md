# How To Download Youtube Videos sexily

# Introduction
We will be using a python-based library called youtube-dl that runs in the command line, this library is enough to download both individial videos and series of videos in a playlist.
However, in order to convert the downloads into appropriate audio formats, we will also need another library called ffmpeg.

# Downloads & Installations:
## 1. Downloading `youtube-dl`
1. Search for "cmd" in your windows start menu
2. Right-click "Command Prompt" and run it as administrator
3. Check if you have python installed by typing in "python"
   If it says something like "Python 3.10.4 (tags/v3.10.4 ..." then you have it installed
   If not, you will have to install Python (mentioned later in this section)
4. After making sure you have python installed, we can exit from it by typing "exit()"
5. We can now run "pip install youtube-dl" to download and install the youtube-dl library to whichever directory your command prompt opened in
   You can check your current directory by checking the beginning of line. Example: C:\Users\Admin> means you're in C:\Users\Admin
   You can change your directory using the "cd" command, use "cd <file name>" to go deeper or "cd .." to go one folder back
   To change drives, simply enter the name of the drive, Example: to change from C:/ to D:/, run "D:"
## 2. Installing ffmpeg
1. Follow this link and download "https://www.gyan.dev/ffmpeg/builds/packages/ffmpeg-4.4.1-full_build.7z"
2. Type "path" into windows start menu and run "Edit the system environment variables"
3. Under the Advanced Section, click on the Environment Variables button on the very bottom
4. If you want this to only be available on your user, select "Path" under "User variables for <user>"
   If you want this to be available to all users on this PC, select "Path" under "System Variables"
5. After the selection, click the corresponding "Edit" button
6. Click "New" on the top right
7. Paste the directory link where ffmpeg was downloaded
   It is advised that ffmpeg be moved to a separate folder all to itself on your system drive before this.
8. Click "Ok" to all open windows so far to make sure we save everything we did
## 3. Installing Python
1. Follow this link: https://www.python.org/downloads/
2. Download the latest version of python
3. Install python on your machine
	Make sure to check that you install "pip" with python
	Also it's preferred to install to the default location
4. Run "python" in cmd to make sure python installed correctly

# Commands & Use:
The default command line you will want to copy paste is the following:
```youtube-dl --extract-audio --audio-format mp3 <youtube playlist link>```
You can change the format of the download to `m4a` or another audio format simply by replacing "`mp3`" in the above line by your desired audio format
However, to download regular youtube videos:
```youtube-dl <youtube video link>```

# FAQ and Help:
For help or any questions, send an email titled "ytdl" to jalal13elzein@gmail.com
I'm just a guy that's not affiliated with neither YouTube, youtube-dl, or ffmpeg so idk how much I can help, but I will try my best!!
	
