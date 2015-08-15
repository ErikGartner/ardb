# Q?: Can I distribute Ardb on my own website #
Yes, Ardb is release on the GPL v2 Licencing terms (http://www.gnu.org/copyleft/gpl.html), meaning you can use, modify, distribute Ardb freely as long as you keep it on same license terms.

# Q?: When will release X.Y be Generally Available? #
**When it's done! <sup>_</sup>**

Seriously the Ardb Team are volunteers, so we cannot guarantee any release schedule.

# Q?: How can I contribute #
Send an email to [Graham](mailto:graham.r.smith@gmail.com). Have a look at http://code.google.com/p/ardb . Any good help will be much appreciate, not only people with IT backgrounds.

# Q?: How can I report a Bug #
  1. Go to [googlecode](http://code.google.com/p/ardb/issues/list)
  1. Check the currently opened bug and make sure your issue is not already opened
  1. Create a new Issue

Any information that you can provide us with, will help. Such as:
  * A detailed bug report
  * An online demo page, showing the problem
  * A specific piece of code that is affected
  * A pointer to the area in Ardb where the bug occurs
  * Current Ardb version
  * Running Operating System
  * A repeatable process that raise the issue

The more information a bug report has, the more likely it will be to get fixed. If a long period of time has gone by without an update to your bug, please bring it up for discussion on the [Ardb Dev List](http://groups.google.com/group/ardb-devel).

# Q? Can I propose new features #
Yes, visit us on the [Ardb Discussion List](http://groups.google.com/group/ardb-discuss).

# Q? Will Ardb work on Windows 95/98 one day #
No. Ardb is based on fairly recent technologies, like Unicode. Windows 95/98 does not have proper Unicode support. They are no longer supported by Microsoft anyway. You should probably upgrade to a better system... May I suggest Linux? <sup>_</sup>

# Q? What is this Happy Families thing in Deck Builder #
[Happy Families](http://wiki.vekn.org/index.php/Happy_Families) is a formula designed by Legbiter to ensure a good card flow playing your deck. More information on this can be found on [Legbiter's web page(old)](http://legbiter.tripod.com/)

# Q? What tools do I need to build Ardb #
Ardb uses wxWidgets as its cross platform GUI toolkit.  It uses libxml and libxslt for processing deck lists. It is written in C++.  Any complier that can build these libraries can be used to build Ardb.  Ardb is built for Windows using Visual Studio 2008 and GCC on Linux.  It should build using GCC on Mac OSX but this is currently a work in progress!!