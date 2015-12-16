@echo off

%UE4%\Engine\Binaries\DotNET\UnrealBuildTool.exe -projectfiles -game %~dp0InstancedProperty.uproject -engine
if %errorlevel% neq 0 exit /b %errorlevel%
