/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _CE_STAT_DESC_H_
#define _CE_STAT_DESC_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	ce_res_5[7:0], toeplitz_en[8], src_swap[9], dest_swap[10], gather[11], ce_res_6[15:12], length[31:16]
//	1	toeplitz_hash_0[31:0]
//	2	toeplitz_hash_1[31:0]
//	3	fw_metadata[15:0], ce_res_7[19:16], ring_id[27:20], looping_count[31:28]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_CE_STAT_DESC 4

struct ce_stat_desc {
             uint32_t ce_res_5                        :  8, //[7:0]
                      toeplitz_en                     :  1, //[8]
                      src_swap                        :  1, //[9]
                      dest_swap                       :  1, //[10]
                      gather                          :  1, //[11]
                      ce_res_6                        :  4, //[15:12]
                      length                          : 16; //[31:16]
             uint32_t toeplitz_hash_0                 : 32; //[31:0]
             uint32_t toeplitz_hash_1                 : 32; //[31:0]
             uint32_t fw_metadata                     : 16, //[15:0]
                      ce_res_7                        :  4, //[19:16]
                      ring_id                         :  8, //[27:20]
                      looping_count                   :  4; //[31:28]
};

/*

ce_res_5
			
			Reserved
			
			<legal all>

toeplitz_en
			
			
			<legal all>

src_swap
			
			Source memory buffer swapped
			
			<legal all>

dest_swap
			
			Destination  memory buffer swapped
			
			<legal all>

gather
			
			Gather of multiple copy engine source descriptors to one
			destination enabled
			
			<legal all>

ce_res_6
			
			Reserved
			
			<legal all>

length
			
			Sum of all the Lengths of the source descriptor in the
			gather chain
			
			<legal all>

toeplitz_hash_0
			
			32 LS bits of 64 bit Toeplitz LFSR hash result
			
			<legal all>

toeplitz_hash_1
			
			32 MS bits of 64 bit Toeplitz LFSR hash result
			
			<legal all>

fw_metadata
			
			Meta data used by FW
			
			In case of gather field in first source ring entry of
			the gather copy cycle in taken into account.
			
			<legal all>

ce_res_7
			
			Reserved 
			
			<legal all>

ring_id
			
			The buffer pointer ring ID.
			
			0 refers to the IDLE ring
			
			1 - N refers to other rings
			
			
			
			Helps with debugging when dumping ring contents.
			
			<legal all>

looping_count
			
			A count value that indicates the number of times the
			producer of entries into the Ring has looped around the
			ring.
			
			At initialization time, this value is set to 0. On the
			first loop, this value is set to 1. After the max value is
			reached allowed by the number of bits for this field, the
			count value continues with 0 again.
			
			In case SW is the consumer of the ring entries, it can
			use this field to figure out up to where the producer of
			entries has created new entries. This eliminates the need to
			check where the head pointer' of the ring is located once
			the SW starts processing an interrupt indicating that new
			entries have been put into this ring...
			
			Also note that SW if it wants only needs to look at the
			LSB bit of this count value.
			
			<legal all>
*/


/* Description		CE_STAT_DESC_0_CE_RES_5
			
			Reserved
			
			<legal all>
*/
#define CE_STAT_DESC_0_CE_RES_5_OFFSET                               0x00000000
#define CE_STAT_DESC_0_CE_RES_5_LSB                                  0
#define CE_STAT_DESC_0_CE_RES_5_MASK                                 0x000000ff

/* Description		CE_STAT_DESC_0_TOEPLITZ_EN
			
			
			<legal all>
*/
#define CE_STAT_DESC_0_TOEPLITZ_EN_OFFSET                            0x00000000
#define CE_STAT_DESC_0_TOEPLITZ_EN_LSB                               8
#define CE_STAT_DESC_0_TOEPLITZ_EN_MASK                              0x00000100

/* Description		CE_STAT_DESC_0_SRC_SWAP
			
			Source memory buffer swapped
			
			<legal all>
*/
#define CE_STAT_DESC_0_SRC_SWAP_OFFSET                               0x00000000
#define CE_STAT_DESC_0_SRC_SWAP_LSB                                  9
#define CE_STAT_DESC_0_SRC_SWAP_MASK                                 0x00000200

/* Description		CE_STAT_DESC_0_DEST_SWAP
			
			Destination  memory buffer swapped
			
			<legal all>
*/
#define CE_STAT_DESC_0_DEST_SWAP_OFFSET                              0x00000000
#define CE_STAT_DESC_0_DEST_SWAP_LSB                                 10
#define CE_STAT_DESC_0_DEST_SWAP_MASK                                0x00000400

/* Description		CE_STAT_DESC_0_GATHER
			
			Gather of multiple copy engine source descriptors to one
			destination enabled
			
			<legal all>
*/
#define CE_STAT_DESC_0_GATHER_OFFSET                                 0x00000000
#define CE_STAT_DESC_0_GATHER_LSB                                    11
#define CE_STAT_DESC_0_GATHER_MASK                                   0x00000800

/* Description		CE_STAT_DESC_0_CE_RES_6
			
			Reserved
			
			<legal all>
*/
#define CE_STAT_DESC_0_CE_RES_6_OFFSET                               0x00000000
#define CE_STAT_DESC_0_CE_RES_6_LSB                                  12
#define CE_STAT_DESC_0_CE_RES_6_MASK                                 0x0000f000

/* Description		CE_STAT_DESC_0_LENGTH
			
			Sum of all the Lengths of the source descriptor in the
			gather chain
			
			<legal all>
*/
#define CE_STAT_DESC_0_LENGTH_OFFSET                                 0x00000000
#define CE_STAT_DESC_0_LENGTH_LSB                                    16
#define CE_STAT_DESC_0_LENGTH_MASK                                   0xffff0000

/* Description		CE_STAT_DESC_1_TOEPLITZ_HASH_0
			
			32 LS bits of 64 bit Toeplitz LFSR hash result
			
			<legal all>
*/
#define CE_STAT_DESC_1_TOEPLITZ_HASH_0_OFFSET                        0x00000004
#define CE_STAT_DESC_1_TOEPLITZ_HASH_0_LSB                           0
#define CE_STAT_DESC_1_TOEPLITZ_HASH_0_MASK                          0xffffffff

/* Description		CE_STAT_DESC_2_TOEPLITZ_HASH_1
			
			32 MS bits of 64 bit Toeplitz LFSR hash result
			
			<legal all>
*/
#define CE_STAT_DESC_2_TOEPLITZ_HASH_1_OFFSET                        0x00000008
#define CE_STAT_DESC_2_TOEPLITZ_HASH_1_LSB                           0
#define CE_STAT_DESC_2_TOEPLITZ_HASH_1_MASK                          0xffffffff

/* Description		CE_STAT_DESC_3_FW_METADATA
			
			Meta data used by FW
			
			In case of gather field in first source ring entry of
			the gather copy cycle in taken into account.
			
			<legal all>
*/
#define CE_STAT_DESC_3_FW_METADATA_OFFSET                            0x0000000c
#define CE_STAT_DESC_3_FW_METADATA_LSB                               0
#define CE_STAT_DESC_3_FW_METADATA_MASK                              0x0000ffff

/* Description		CE_STAT_DESC_3_CE_RES_7
			
			Reserved 
			
			<legal all>
*/
#define CE_STAT_DESC_3_CE_RES_7_OFFSET                               0x0000000c
#define CE_STAT_DESC_3_CE_RES_7_LSB                                  16
#define CE_STAT_DESC_3_CE_RES_7_MASK                                 0x000f0000

/* Description		CE_STAT_DESC_3_RING_ID
			
			The buffer pointer ring ID.
			
			0 refers to the IDLE ring
			
			1 - N refers to other rings
			
			
			
			Helps with debugging when dumping ring contents.
			
			<legal all>
*/
#define CE_STAT_DESC_3_RING_ID_OFFSET                                0x0000000c
#define CE_STAT_DESC_3_RING_ID_LSB                                   20
#define CE_STAT_DESC_3_RING_ID_MASK                                  0x0ff00000

/* Description		CE_STAT_DESC_3_LOOPING_COUNT
			
			A count value that indicates the number of times the
			producer of entries into the Ring has looped around the
			ring.
			
			At initialization time, this value is set to 0. On the
			first loop, this value is set to 1. After the max value is
			reached allowed by the number of bits for this field, the
			count value continues with 0 again.
			
			In case SW is the consumer of the ring entries, it can
			use this field to figure out up to where the producer of
			entries has created new entries. This eliminates the need to
			check where the head pointer' of the ring is located once
			the SW starts processing an interrupt indicating that new
			entries have been put into this ring...
			
			Also note that SW if it wants only needs to look at the
			LSB bit of this count value.
			
			<legal all>
*/
#define CE_STAT_DESC_3_LOOPING_COUNT_OFFSET                          0x0000000c
#define CE_STAT_DESC_3_LOOPING_COUNT_LSB                             28
#define CE_STAT_DESC_3_LOOPING_COUNT_MASK                            0xf0000000


#endif // _CE_STAT_DESC_H_
