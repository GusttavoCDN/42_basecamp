## TASK.JSON

```json
{
    "configurations": [
        {
            "name": "debug",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/main",
            "args": [
                "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
            ],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
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
            ],
            "preLaunchTask": "debug"
        }
    ]
}
```

# LAUNCH.JSON

```json
{
    "configurations": [
        {
            "name": "debug",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/main",
            "args": [
                "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
            ],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
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
            ],
            "preLaunchTask": "debug"
        }
    ]
}
```