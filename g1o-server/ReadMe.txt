Gothic 1 Online server
======================

Run GO_Server.exe with this directory as its working directory.

Configuration is stored in GO_Config.server.xml. The server is private by
default. Set <public>1</public> to register it with the master server compiled
into GO_Server.exe. The startup log reports whether public registration is
enabled.

Required runtime directories:

  server-scripts  Squirrel scripts executed by the server
  client-scripts  Squirrel scripts downloaded and executed by clients
  download        Additional files downloaded into the client's Data folder

The default installation supplies minimal server-main.gm and client-main.gm
files. Existing configuration and script files are preserved by xmake install.

Master list files
-----------------

GO_Master.exe writes list.txt and list.html into its current working directory.
It does not host those files over HTTP. Publish that directory through a web
server at the URL compiled into GO_Launcher.exe.

See the repository README.md for xmake configuration, build, and installation
commands.
