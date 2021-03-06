/* Copyright (c) 2009, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __MACH_QDSP5_V2_SNDDEV_ECODEC_H
#define __MACH_QDSP5_V2_SNDDEV_ECODEC_H
#include <mach/qdsp5v2/audio_def.h>

struct snddev_ecodec_data {
	u32 capability; /* RX or TX */
	const char *name;
	u32 copp_id; /* audpp routing */
	u32 acdb_id; /* Audio Cal purpose */
	u8 channel_mode;
	u32 conf_pcm_ctl_val;
	u32 conf_aux_codec_intf;
	u32 conf_data_format_padding_val;
	s32 max_voice_rx_vol[VOC_RX_VOL_ARRAY_NUM]; /* [0]:NB, [1]:WB */
	s32 min_voice_rx_vol[VOC_RX_VOL_ARRAY_NUM];
#ifdef CONFIG_SH_AUDIO_DRIVER
	s32 voice_rx_vol_step[VOC_RX_VOL_ARRAY_NUM][VOC_RX_VOL_STEP_NUM];
#endif /* CONFIG_SH_AUDIO_DRIVER */
};
#endif
