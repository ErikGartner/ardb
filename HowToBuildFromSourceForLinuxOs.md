# Install required libs #
This program requires the following packages for build:
  * libxml-dev - Development files for the GNOME XML library
  * libxslt-dev - XSLT processing library - development kit
  * libsqlite2-dev - SQLite development files
  * libwxgtk2.8-dev **WITH UNICODE SUPPORT** - wxWidgets Cross-platform C++ GUI toolkit (GTK+ development)
  * tofrodos - Converts DOS 

&lt;-&gt;

 Unix text files, alias tofromdos
  * wx-common

_Some linux distribution packaging system could name those libs differently. Rpm based linux (fedora, mandriva) uses the "-devel" postfix for developments packages_

# Get the source code #

http://code.google.com/p/ardb/source from svn _to build from source you need the source code_

# Compile sources #
How to build the ARDB program: Use one of the following methods
  * Using build script
  * Using autotools

## Using build script: make\_linux.sh ##
Do the following:
```
meshee@lasombra:~ cd <path_to_codebase>/wxARDB/
meshee@lasombra:~ bash make_linux.sh
```

Everything should be fine...

If it's not, try manually running

## Manual running a.k.a autotools ##
```
meshee@lasombra:~ cd <path_to_codebase>/wxARDB/
meshee@lasombra:~ aclocal
meshee@lasombra:~ automake --add-missing
meshee@lasombra:~ autoconf
meshee@lasombra:~ ./configure
meshee@lasombra:~ make
```

(builds alright with autoconf-2.13, automake-1.4)

Executable could be find here: 

<path\_to\_codebase>

/wxARDB/src/ardb

# Final steps #
Create config folder:
```
meshee@lasombra:~ mkdir ~/.ardb
```

Copy resources to config folder:
```
mkdir ~/.ardb/xsl
meshee@lasombra:~ cp  resources/vtesicons/* ~/.ardb
meshee@lasombra:~ cp  resources/*.xsl ~/.ardb/xsl
```

# Run Ardb #
Launch ardb and let it create ~/.ardb/cards.db from white-wolf.com

```
meshee@lasombra:~ src/ardb
```

# For Debian Etch users #
Debian Etch does not offer official packages for wxWidgets 2.8.x serie. Don't panic, Meshenka is here and found for you a repository that will save you soul:

from [wxPython.org](http://wiki.wxpython.org/InstallingOnUbuntuOrDebian)

## Add a new repository to source.list ##
in /etc/apt/source.list add this :
```
# wxWidgets/wxPython repository at  apt.wxwidgets.org
deb http://apt.wxwidgets.org/ etch-wx main
```

The repository packages are signed so you have to register the key. Do the following:
```
gpg --keyserver pgpkeys.mit.edu --recv-key  06EA41DE4F6C1E86
gpg -a --export 06EA41DE4F6C1E86 | apt-key add  -
```

06EA41DE4F6C1E86 is the missing key `aptitude update` complains about (key of "Vadim Zeitlin <vadim@tt-solutions.com>" package maintainer)

## Install wxWidgets.2.8.x ##
Do an `aptitude update`, know that you had register Vadim's key to apt-key update should go smoothly. Now you can `aptitude search ^libwx` and install required dev packages:
  * libwxbase2.8-dev
  * libwxgtk2.8-dev

```
aptitude install libwxbase2.8-dev libwxgtk2.8-dev
```

Et voila!!

## Check install ##
You can check that you now have wx2.8.x installed by doing the following as root:
```
lasombra:~# wx-config --version-full
2.8.6.1
```



--
Enjoy