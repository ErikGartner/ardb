# Introduction #

This page describes how to build Ardb from source for MAC OS X 10.5.x.

# Requirements #

  * XCode 3.1.1 or 3.1.2 from  http://developer.apple.com/mac/
  * wxWidgets 2.8.10 from http://prdownloads.sourceforge.net/wxwindows/wxMac-2.8.10.tar.gz
  * sqlite 2 from http://www.sqlite.org/download.html
  * ardb source code from http://code.google.com/p/ardb/source/checkout

# Details #

Install XCode
Open a terminal window
In the terminal window build and install wxWidgets following instructions in install-mac.txt.  Use ../configure --disable-shared to disable shared libraries.
In the terminal window checkout sqlite 2 using the commands:
<pre>
cvs -d :pserver:anonymous@www.sqlite.org:/sqlite login<br>
cvs -d :pserver:anonymous@www.sqlite.org:/sqlite checkout sqlite<br>
</pre>

When the first command prompts you for a password, enter "anonymous". Then
<pre>
cd sqlite<br>
cvs update -r version_2<br>
./configure --disable-shared<br>
make<br>
sudo make install<br>
</pre>

In the terminal window checkout and build ardb using:

<pre>
svn checkout http://ardb.googlecode.com/svn/trunk/ ardb-read-only<br>
cd ardb-read-only<br>
cd wxArdb<br>
chmod +x make_macOSX.sh<br>
./make_macOSX.sh<br>
</pre>

This will create the ardb.app.  You will want to update the database using File|Update Database

You can add card image support by downloading the cardimages zip file from  http://www.powerbase-bath.com/files/cardimages.zip.  Extract the cardimages.zip file to ardb.app/Contents/Resources.