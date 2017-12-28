:: This file was generated based on '../../../AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Targets/Android/build.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_40
set CMAKE_PATH="C:\Users\krys.kolodziejczyk\AppData\Local\Fusetools\Fuse\Android\AndroidSDK\cmake"

if exist %CMAKE_PATH%\NUL goto HASCMAKE
if exist %CMAKE_PATH%\ goto HASCMAKE
goto NOCMAKE

:HASCMAKE
call gradlew assembleDebug %* || goto ERROR

"C:\Program Files (x86)\Fuse\uno.exe" cp app/build/outputs/apk/app-debug.apk exploring.apk || goto ERROR

popd && exit /b 0

:NOCMAKE
echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android'. Expected to find cmake in C:\Users\krys.kolodziejczyk\AppData\Local\Fusetools\Fuse\Android\AndroidSDK\cmake"

:ERROR
popd && exit /b 1
