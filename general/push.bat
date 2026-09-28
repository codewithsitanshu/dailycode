@echo off
cd /d %~dp0

echo ===============================
echo Pushing today's code to GitHub...
echo ===============================

git add .

git commit -m "Daily code update %date% %time%"

git push origin main

echo.
echo ===============================
echo Push Completed!
echo ===============================
pause