
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
	//! Use DXT1 compression.
	SQUISH_kDxt1 = ( 1 << 0 ), 
	
	//! Use DXT3 compression.
	SQUISH_kDxt3 = ( 1 << 1 ), 
	
	//! Use DXT5 compression.
	SQUISH_kDxt5 = ( 1 << 2 ), 
	
	//! Use a very slow but very high quality colour compressor.
	SQUISH_kColourIterativeClusterFit = ( 1 << 8 ),	
	
	//! Use a slow but high quality colour compressor (the default).
	SQUISH_kColourClusterFit = ( 1 << 3 ),	
	
	//! Use a fast but low quality colour compressor.
	SQUISH_kColourRangeFit	= ( 1 << 4 ),
	
	//! Weight the colour by alpha during cluster fit (disabled by default).
	SQUISH_kWeightColourByAlpha = ( 1 << 7 )
	
} squish_flag_t;


void squish_CompressMasked( unsigned char const* rgba, int mask, void* block, int flags, float* metric );
void squish_Compress( unsigned char const* rgba, void* block, int flags, float* metric );
void squish_Decompress( unsigned char* rgba, void const* block, int flags );
int squish_GetStorageRequirements( int width, int height, int flags );
void squish_CompressImage( unsigned char const* rgba, int width, int height, void* blocks, int flags, float* metric );
void squish_DecompressImage( unsigned char* rgba, int width, int height, void const* blocks, int flags );

#ifdef __cplusplus
} /* extern "C" { */
#endif

