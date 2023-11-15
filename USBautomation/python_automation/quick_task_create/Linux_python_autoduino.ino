#include <Keyboard.h>

void setup() {
  delay(500);
  // Open terminal on Linux via Run Command
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('F');
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("terminal");
  Keyboard.press(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("mkdir python_dummy_file_");
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cd python_dummy_file_");
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  // Create Python virtual environment
  Keyboard.print("python -m venv venv");
  Keyboard.press(KEY_RETURN);
  delay(10000); // Adjust this delay according to your needs
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("source venv/bin/activate");
  Keyboard.press(KEY_RETURN);
  delay(3500);
  Keyboard.releaseAll();
  delay(500);
  // Upgrade pip
  Keyboard.print("pip install pip --upgrade");
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  // Install Python modules
  Keyboard.print("pip install tkinter ttkbootstrap matplotlib wordcloud streamlit jupyter");
  delay(30000); // Adjust this delay according to your needs
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  // Open nano text editor
  Keyboard.print("nano");
  Keyboard.press(KEY_RETURN);
}

void loop() {
  // Empty loop
}
#include <Keyboard.h>

void setup() {
  delay(500);
  // Open terminal on Linux via Run Command
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('F');
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("terminal");
  Keyboard.press(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("mkdir python_dummy_file_");
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cd python_dummy_file_");
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  // Create Python virtual environment
  Keyboard.print("python -m venv venv");
  Keyboard.press(KEY_RETURN);
  delay(10000); // Adjust this delay according to your needs
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("source venv/bin/activate");
  Keyboard.press(KEY_RETURN);
  delay(3500);
  Keyboard.releaseAll();
  delay(500);
  // Upgrade pip
  Keyboard.print("pip install pip --upgrade");
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  // Install Python modules
  Keyboard.print("pip install tkinter ttkbootstrap matplotlib wordcloud streamlit jupyter");
  delay(30000); // Adjust this delay according to your needs
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  // Open nano text editor
  Keyboard.print("nano");
  Keyboard.press(KEY_RETURN);
}

void loop() {
  // Empty loop
}
