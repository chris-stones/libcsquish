

#include "squish.h"

extern "C" {

void squish_CompressMasked( const unsigned char* rgba, int mask, void* block, int flags, float* metric ) {
  
  squish::CompressMasked(rgba, mask, block, flags, metric );
}

void squish_Compress( const unsigned char* rgba, void* block, int flags, float* metric )
{
  squish::Compress( rgba, block, flags, metric );
}

void squish_Decompress( unsigned char* rgba, const void* block, int flags ) {
  
  squish::Decompress(rgba, block, flags);
}

int squish_GetStorageRequirements( int width, int height, int flags ) {
  
  return squish::GetStorageRequirements(width, height, flags);
}

void squish_CompressImage( const unsigned char* rgba, int width, int height, void* blocks, int flags, float* metric ) {
  
  return squish::CompressImage(rgba,width,height,blocks,flags,metric);
}

void squish_DecompressImage( unsigned char* rgba, int width, int height, void const* blocks, int flags ) {
  
  return squish::DecompressImage(rgba,width,height,blocks,flags);
}
  
}


