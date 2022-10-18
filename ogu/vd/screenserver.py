import os
from random import randint
import re

from flask import Flask, jsonify
from flask import Flask, flash, request, redirect, url_for
from werkzeug.utils import secure_filename

app = Flask(__name__)


UPLOAD_FOLDER = 'uploads'
ALLOWED_EXTENSIONS = ['png']

app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = UPLOAD_FOLDER

@app.route('/rec', methods=['POST', 'GET'])
def upload_file():
    print('test')

    print(request.files)
    file = request.files['media']

    if file.filename == '':
        print('err name')
    else:
        filename = f'abc-{randint(1,100)}-{randint(1,100)}.png'

    filename = secure_filename(file.filename)
    file.save(os.path.join('uploads', filename))
    return jsonify(),200

app.run(port=5000, host='localhost')