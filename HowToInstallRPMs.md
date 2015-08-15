# Installing RPMs #

This is brief How-to guide for installing RPMs on Linux systems. The focus of this guide is the installation of RPMs for OpenSuse, but using the tool 'alien', these RPMs can also be installed on other distributions as well (thanks to Salem for posting a brief description on how to do this on the newsgroup and thanks to Chris Berger for providing a Debian package and additional input).

## Download ##

The first step is to download the tarball of the latest Linux ARDB package from this web site. Here, we'll use the one for OpenSuse, which looks something like ardbXsuseY.tar.gz (where X and Y are version numbers).

## Unpacking ##

Unpack the tarball by running
```
tar zxvf ardbXsuseY.tar.gz
```
Most of the following information can also be found in the README file supplied with the tarball.

## Switching to Root ##

Make sure that you are root, e.g. by typing in
```
su - root
```

## Install RPM ##

Install the rpm package you found in the tarball:
```
rpm -i wxARDB-X.i686.rpm
```
If your system does not use rpm for package management, you have to use alien:
```
alien -i wxARDB-X.i686.rpm
```
You might have to install alien first and use some more parameters (AFAIK alien creates Debian packages by default).

At the end of this page is a list of everything that needs to be installed on your system for ARDB to work. You might have to install some of these on your system before being able to run ARDB, e.g.:

```
apt-get install libwxbase2.8-0 libwxgtk2.8-0
```

To uninstall ARDB again, you have to enter:
```
rpm -e wxARDB-X
```

## Running ARDB for the first time ##

use your regular user account to run ARDB for the first time (should be installed in /usr/local/bin/) by typing in
```
ardb
```

ARDB will now try to get the card files from White Wolf's web server and will convert them. Don't worry about missing icons/images at the moment. If you don't have access to the internet, just use the provided vtescsv.zip file.

## Exit again ##

exit ARDB

## Copy resources ##

copy resources.tar.gz to the newly created .ardb directory (in your home directory) and unpack resources.tar.gz:
```
tar zxvf resources.tar.gz
```
to display card images download the 60MByte zip file at

http://www.divshare.com/download/3437098-a1c

or from

http://www.powerbase-bath.com/files/cardimages.zip

copy it into your .ardb directory and unpack it:
```
unzip cardimages.zip
```
Card images courtesy of the players over at
http://www.vtes.pl/

## Enjoy ##

Restart ARDB and enjoy

## Optional ##

Uninstall WINE (You don't need it for ARDB anymore).

## Required packages ##

ARDB needs the following packages to be installed, before installing the ardb rpm, you might need to install some of these:

  * libc.so.6
  * libc.so.6(GLIBC\_2.0)
  * libc.so.6(GLIBC\_2.1.3)
  * libgcc\_s.so.1
  * libgcc\_s.so.1(GCC\_3.0)
  * libm.so.6
  * libpthread.so.0
  * libsqlite.so.0
  * libstdc++.so.6
  * libstdc++.so.6(CXXABI\_1.3)
  * libstdc++.so.6(GLIBCXX\_3.4)
  * libwx\_baseu-2.8.so.0
  * libwx\_baseu-2.8.so.0(WXU\_2.8)
  * libwx\_baseu\_net-2.8.so.0
  * libwx\_baseu\_net-2.8.so.0(WXU\_2.8)
  * libwx\_baseu\_xml-2.8.so.0
  * libwx\_gtk2u\_adv-2.8.so.0
  * libwx\_gtk2u\_adv-2.8.so.0(WXU\_2.8)
  * libwx\_gtk2u\_aui-2.8.so.0
  * libwx\_gtk2u\_core-2.8.so.0
  * libwx\_gtk2u\_core-2.8.so.0(WXU\_2.8)
  * libwx\_gtk2u\_html-2.8.so.0
  * libwx\_gtk2u\_qa-2.8.so.0
  * libwx\_gtk2u\_xrc-2.8.so.0
  * libxml2.so.2
  * libxslt.so.1
  * libz.so.1