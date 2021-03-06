/*
 * This file is part of the coreboot project.
 *
  * Copyright (C) 2018 Intel Corp.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <intelblocks/cpulib.h>
#include <intelblocks/fast_spi.h>
#include <soc/bootblock.h>

void bootblock_cpu_init(void)
{
	/* Temporarily cache the memory-mapped boot media. */
	if (CONFIG(BOOT_DEVICE_MEMORY_MAPPED) &&
		CONFIG(BOOT_DEVICE_SPI_FLASH))
		fast_spi_cache_bios_region();
}
