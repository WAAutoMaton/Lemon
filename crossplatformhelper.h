/***************************************************************************
    This file is part of Project Lemon
	Copyright (C) 2016 Menci

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************/

#ifdef __APPLE__
#	define LEMON_OS_OSX
#	define LEMON_OS_UNIX
#elif __linux__
#	define LEMON_OS_LINUX
#	define LEMON_OS_UNIX
#elif _WIN32
#	define LEMON_OS_WIN32
#endif
