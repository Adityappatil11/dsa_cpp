# SDE practice repo with Bazel build!

This repo is for C++ DSA parctice and build using bazel for both Linux and Windows


## Bazel Build Setup 
this section involves the bazel build setup of both Windows and Linux

### Windows - [Bazel install Windows](https://bazel.build/install/windows)

Windows SDK are requried as prerequisites for the installation and can be downloaded from [Windows SDK](https://developer.microsoft.com/en-us/windows/downloads/windows-sdk/)

C++ Build tools can be installed from Visual Studio [installer](https://visualstudio.microsoft.com/downloads/) 

install bazel binary from [bazelbuild/bazel](https://github.com/bazelbuild/bazel/releases)
> bazel-version-windows-x86_64.exe

### linux - [Bazel install Linux](https://bazel.build/install/ubuntu)

Using Bazel apt repo (Recommended - one time setup)

1.      sudo apt install apt-transport-https curl gnupg -y
        curl -fsSL https://bazel.build/bazel-release.pub.gpg | gpg --dearmor >bazel-archive-keyring.gpg
        sudo mv bazel-archive-keyring.gpg /usr/share/keyrings
        echo "deb [arch=amd64 signed-by=/usr/share/keyrings/bazel-archive-keyring.gpg] https://storage.googleapis.com/bazel-apt stable jdk1.8" | sudo tee /etc/apt/sources.list.d/bazel.list

2.      sudo apt update && sudo apt install bazel
3.      sudo apt update && sudo apt full-upgrade
4.      sudo apt install bazel

## Debug configurations for Launch JSON

### GDB debug (Linux)
bazel builds the code in debug mode as default so we need to make sure it build debug binaries for gdb debugger

bazel build command for debug mode in linux 
        
        bazel build //target_file --compilation_mode=dbg

The launch Json floder configurations goes as follows

        {
            "name": "(gdb)Linux Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "path to exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "Set Disassembly Flavor to Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ]
        },

### Windows Debug

bazel builds binaries in debug mode itself, use the normal build command to build it 

    bazel build //target_file

The launch Json floder configurations goes as follows

    {
            "name": "(Windows) Launch",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "${workspaceFolder}\\bazel-bin\\LinkedList\\main.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "console": "integratedTerminal"
    },    