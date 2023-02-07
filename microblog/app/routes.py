from flask import render_template
from app import app
from app.forms import LoginForm

@app.route('/')
@app.route('/index')
def index():
    user = {'username': 'Dmitriy'}
    posts = [
        {
            'author': {'username': 'John'},
            'body': 'Beatyful day in Portland!'
        },
        {
            'author': {'username': 'Susan'},
            'body': 'The Avengers movie is so cool!'
        }
    ]
    return render_template('index.html', title='Home', user=user, posts=posts)

@app.route('/login')
def login():
    form = LoginForm()
    return render_template('login.html', title='Sign in', form=form)