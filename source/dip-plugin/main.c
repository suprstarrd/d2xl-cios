/*
 * DIP plugin for Custom IOS.
 *
 * Copyright (C) 2008-2010 Waninkoko, WiiGator.
 * Copyright (C) 2011 davebaol.
 * Copyright (C) 2020 Leseratte.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ios.h"
#include "patches.h"
#include "syscalls.h"
#include "types.h"


char *moduleName = "DIP";

int main(void)
{
	/* System patchers */
	static patcher patchers[] = {{Patch_DipModule, 0}};

	/* Print info */
	svc_write("$IOSVersion: DIPP:  " __DATE__ " " __TIME__ " 64M " __D2XL_VER__ " $\n");

	/* Initialize plugin */
	IOS_InitSystem(patchers, sizeof(patchers));

	return 0;
}
