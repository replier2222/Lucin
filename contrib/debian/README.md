
Debian
====================
This directory contains files used to package lucind/lucin-qt
for Debian-based Linux systems. If you compile lucind/lucin-qt yourself, there are some useful files here.

## lucin: URI support ##


lucin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lucin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lucinqt binary to `/usr/bin`
and the `../../share/pixmaps/lucin128.png` to `/usr/share/pixmaps`

lucin-qt.protocol (KDE)

