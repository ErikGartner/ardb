# Steps #
  1. You need to have sqlite2 library installed. There is no package providing that version of sqlite in Fedora repository, so you have to obtain it elsewhere. Try [this page](http://rpm.pbone.net/index.php3/stat/3/srodzaj/1/search/sqlite2).
  1. Download http://ardb.googlecode.com/files/ardb-2.7-1.fc8.i386.rpm and install it via yum, rpm or whatever.
  1. Run `ardb`, let it download the database (it can take some time) and enjoy
  1. If you want ARDB to display card images, then create a `cardimages` directory in your HOME/.ardb directory, and put the image files in it, named like this: _Bum's Rush_ will be _bumsrush.jpg_.
