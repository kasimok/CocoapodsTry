/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef BLUR_RASTER_GLSL_GEN_H_RD
#define BLUR_RASTER_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class BlurRasterShaderRD : public ShaderRD {

public:

	BlurRasterShaderRD() {

		static const char _vertex_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,35,100,101,102,105,110,101,32,70,76,65,71,95,72,79,82,73,90,79,78,84,65,76,32,40,49,32,60,60,32,48,41,10,35,100,101,102,105,110,101,32,70,76,65,71,95,85,83,69,95,79,82,84,72,79,71,79,78,65,76,95,80,82,79,74,69,67,84,73,79,78,32,40,49,32,60,60,32,49,41,10,35,100,101,102,105,110,101,32,70,76,65,71,95,71,76,79,87,95,70,73,82,83,84,95,80,65,83,83,32,40,49,32,60,60,32,50,41,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,66,108,117,114,32,123,10,9,118,101,99,50,32,112,105,120,101,108,95,115,105,122,101,59,32,10,9,117,105,110,116,32,102,108,97,103,115,59,32,10,9,117,105,110,116,32,112,97,100,59,32,10,10,9,10,9,102,108,111,97,116,32,103,108,111,119,95,115,116,114,101,110,103,116,104,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,98,108,111,111,109,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,115,99,97,108,101,59,32,10,10,9,102,108,111,97,116,32,103,108,111,119,95,101,120,112,111,115,117,114,101,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,119,104,105,116,101,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,108,117,109,105,110,97,110,99,101,95,99,97,112,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,97,117,116,111,95,101,120,112,111,115,117,114,101,95,115,99,97,108,101,59,32,10,10,9,102,108,111,97,116,32,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,32,10,9,102,108,111,97,116,32,114,101,115,49,59,32,10,9,102,108,111,97,116,32,114,101,115,50,59,32,10,9,102,108,111,97,116,32,114,101,115,51,59,32,10,125,10,98,108,117,114,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,50,32,98,97,115,101,95,97,114,114,91,51,93,32,61,32,118,101,99,50,91,93,40,118,101,99,50,40,45,49,46,48,44,32,45,49,46,48,41,44,32,118,101,99,50,40,45,49,46,48,44,32,51,46,48,41,44,32,118,101,99,50,40,51,46,48,44,32,45,49,46,48,41,41,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,98,97,115,101,95,97,114,114,91,103,108,95,86,101,114,116,101,120,73,110,100,101,120,93,44,32,48,46,48,44,32,49,46,48,41,59,10,9,117,118,95,105,110,116,101,114,112,32,61,32,99,108,97,109,112,40,103,108,95,80,111,115,105,116,105,111,110,46,120,121,44,32,118,101,99,50,40,48,46,48,44,32,48,46,48,41,44,32,118,101,99,50,40,49,46,48,44,32,49,46,48,41,41,32,42,32,50,46,48,59,32,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,0
		};
		static const char _fragment_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,35,100,101,102,105,110,101,32,70,76,65,71,95,72,79,82,73,90,79,78,84,65,76,32,40,49,32,60,60,32,48,41,10,35,100,101,102,105,110,101,32,70,76,65,71,95,85,83,69,95,79,82,84,72,79,71,79,78,65,76,95,80,82,79,74,69,67,84,73,79,78,32,40,49,32,60,60,32,49,41,10,35,100,101,102,105,110,101,32,70,76,65,71,95,71,76,79,87,95,70,73,82,83,84,95,80,65,83,83,32,40,49,32,60,60,32,50,41,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,66,108,117,114,32,123,10,9,118,101,99,50,32,112,105,120,101,108,95,115,105,122,101,59,32,10,9,117,105,110,116,32,102,108,97,103,115,59,32,10,9,117,105,110,116,32,112,97,100,59,32,10,10,9,10,9,102,108,111,97,116,32,103,108,111,119,95,115,116,114,101,110,103,116,104,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,98,108,111,111,109,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,115,99,97,108,101,59,32,10,10,9,102,108,111,97,116,32,103,108,111,119,95,101,120,112,111,115,117,114,101,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,119,104,105,116,101,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,108,117,109,105,110,97,110,99,101,95,99,97,112,59,32,10,9,102,108,111,97,116,32,103,108,111,119,95,97,117,116,111,95,101,120,112,111,115,117,114,101,95,115,99,97,108,101,59,32,10,10,9,102,108,111,97,116,32,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,32,10,9,102,108,111,97,116,32,114,101,115,49,59,32,10,9,102,108,111,97,116,32,114,101,115,50,59,32,10,9,102,108,111,97,116,32,114,101,115,51,59,32,10,125,10,98,108,117,114,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,99,111,108,111,114,59,10,10,35,105,102,100,101,102,32,71,76,79,87,95,85,83,69,95,65,85,84,79,95,69,88,80,79,83,85,82,69,10,108,97,121,111,117,116,40,115,101,116,32,61,32,49,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,97,117,116,111,95,101,120,112,111,115,117,114,101,59,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,10,10,35,105,102,100,101,102,32,77,79,68,69,95,77,73,80,77,65,80,10,10,9,118,101,99,50,32,112,105,120,95,115,105,122,101,32,61,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,59,10,9,118,101,99,52,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,45,48,46,53,44,32,45,48,46,53,41,32,42,32,112,105,120,95,115,105,122,101,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,48,46,53,44,32,45,48,46,53,41,32,42,32,112,105,120,95,115,105,122,101,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,48,46,53,44,32,48,46,53,41,32,42,32,112,105,120,95,115,105,122,101,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,45,48,46,53,44,32,48,46,53,41,32,42,32,112,105,120,95,115,105,122,101,41,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,32,47,32,52,46,48,59,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,77,79,68,69,95,71,65,85,83,83,73,65,78,95,66,76,85,82,10,10,9,10,9,10,9,10,9,118,101,99,52,32,65,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,45,49,46,48,44,32,45,49,46,48,41,41,59,10,9,118,101,99,52,32,66,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,48,46,48,44,32,45,49,46,48,41,41,59,10,9,118,101,99,52,32,67,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,49,46,48,44,32,45,49,46,48,41,41,59,10,9,118,101,99,52,32,68,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,45,48,46,53,44,32,45,48,46,53,41,41,59,10,9,118,101,99,52,32,69,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,48,46,53,44,32,45,48,46,53,41,41,59,10,9,118,101,99,52,32,70,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,45,49,46,48,44,32,48,46,48,41,41,59,10,9,118,101,99,52,32,71,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,41,59,10,9,118,101,99,52,32,72,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,49,46,48,44,32,48,46,48,41,41,59,10,9,118,101,99,52,32,73,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,45,48,46,53,44,32,48,46,53,41,41,59,10,9,118,101,99,52,32,74,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,48,46,53,44,32,48,46,53,41,41,59,10,9,118,101,99,52,32,75,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,45,49,46,48,44,32,49,46,48,41,41,59,10,9,118,101,99,52,32,76,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,48,46,48,44,32,49,46,48,41,41,59,10,9,118,101,99,52,32,77,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,32,42,32,118,101,99,50,40,49,46,48,44,32,49,46,48,41,41,59,10,10,9,102,108,111,97,116,32,98,97,115,101,95,119,101,105,103,104,116,32,61,32,48,46,53,32,47,32,52,46,48,59,10,9,102,108,111,97,116,32,108,101,115,115,101,114,95,119,101,105,103,104,116,32,61,32,48,46,49,50,53,32,47,32,52,46,48,59,10,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,40,68,32,43,32,69,32,43,32,73,32,43,32,74,41,32,42,32,98,97,115,101,95,119,101,105,103,104,116,59,10,9,102,114,97,103,95,99,111,108,111,114,32,43,61,32,40,65,32,43,32,66,32,43,32,71,32,43,32,70,41,32,42,32,108,101,115,115,101,114,95,119,101,105,103,104,116,59,10,9,102,114,97,103,95,99,111,108,111,114,32,43,61,32,40,66,32,43,32,67,32,43,32,72,32,43,32,71,41,32,42,32,108,101,115,115,101,114,95,119,101,105,103,104,116,59,10,9,102,114,97,103,95,99,111,108,111,114,32,43,61,32,40,70,32,43,32,71,32,43,32,76,32,43,32,75,41,32,42,32,108,101,115,115,101,114,95,119,101,105,103,104,116,59,10,9,102,114,97,103,95,99,111,108,111,114,32,43,61,32,40,71,32,43,32,72,32,43,32,77,32,43,32,76,41,32,42,32,108,101,115,115,101,114,95,119,101,105,103,104,116,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,77,79,68,69,95,71,65,85,83,83,73,65,78,95,71,76,79,87,10,10,9,10,10,35,100,101,102,105,110,101,32,71,76,79,87,95,65,68,68,40,109,95,111,102,115,44,32,109,95,109,117,108,116,41,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,92,10,9,123,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,92,10,9,9,118,101,99,50,32,111,102,115,32,61,32,117,118,95,105,110,116,101,114,112,32,43,32,109,95,111,102,115,32,42,32,112,105,120,95,115,105,122,101,59,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,92,10,9,9,118,101,99,52,32,99,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,111,102,115,41,32,42,32,109,95,109,117,108,116,59,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,92,10,9,9,105,102,32,40,97,110,121,40,108,101,115,115,84,104,97,110,40,111,102,115,44,32,118,101,99,50,40,48,46,48,41,41,41,32,124,124,32,97,110,121,40,103,114,101,97,116,101,114,84,104,97,110,40,111,102,115,44,32,118,101,99,50,40,49,46,48,41,41,41,41,32,123,32,92,10,9,9,9,99,32,42,61,32,48,46,48,59,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,92,10,9,9,125,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,92,10,9,9,99,111,108,111,114,32,43,61,32,99,59,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,92,10,9,125,10,10,9,105,102,32,40,98,111,111,108,40,98,108,117,114,46,102,108,97,103,115,32,38,32,70,76,65,71,95,72,79,82,73,90,79,78,84,65,76,41,41,32,123,10,9,9,118,101,99,50,32,112,105,120,95,115,105,122,101,32,61,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,59,10,9,9,112,105,120,95,115,105,122,101,32,42,61,32,48,46,53,59,32,10,10,9,9,118,101,99,52,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,48,46,48,44,32,48,46,48,41,32,42,32,112,105,120,95,115,105,122,101,41,32,42,32,48,46,49,55,52,57,51,56,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,49,46,48,44,32,48,46,48,41,44,32,48,46,49,54,53,53,54,57,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,50,46,48,44,32,48,46,48,41,44,32,48,46,49,52,48,51,54,55,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,51,46,48,44,32,48,46,48,41,44,32,48,46,49,48,54,53,57,53,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,45,49,46,48,44,32,48,46,48,41,44,32,48,46,49,54,53,53,54,57,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,45,50,46,48,44,32,48,46,48,41,44,32,48,46,49,52,48,51,54,55,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,45,51,46,48,44,32,48,46,48,41,44,32,48,46,49,48,54,53,57,53,41,59,10,10,9,9,10,9,9,99,111,108,111,114,32,42,61,32,98,108,117,114,46,103,108,111,119,95,115,116,114,101,110,103,116,104,59,10,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,9,125,32,101,108,115,101,32,123,10,9,9,118,101,99,50,32,112,105,120,95,115,105,122,101,32,61,32,98,108,117,114,46,112,105,120,101,108,95,115,105,122,101,59,10,9,9,118,101,99,52,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,48,46,48,44,32,48,46,48,41,32,42,32,112,105,120,95,115,105,122,101,41,32,42,32,48,46,50,56,56,55,49,51,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,48,46,48,44,32,49,46,48,41,44,32,48,46,50,51,51,48,54,50,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,48,46,48,44,32,50,46,48,41,44,32,48,46,49,50,50,53,56,49,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,48,46,48,44,32,45,49,46,48,41,44,32,48,46,50,51,51,48,54,50,41,59,10,9,9,71,76,79,87,95,65,68,68,40,118,101,99,50,40,48,46,48,44,32,45,50,46,48,41,44,32,48,46,49,50,50,53,56,49,41,59,10,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,9,125,10,10,35,117,110,100,101,102,32,71,76,79,87,95,65,68,68,10,10,9,105,102,32,40,98,111,111,108,40,98,108,117,114,46,102,108,97,103,115,32,38,32,70,76,65,71,95,71,76,79,87,95,70,73,82,83,84,95,80,65,83,83,41,41,32,123,10,9,9,10,9,9,10,9,9,102,114,97,103,95,99,111,108,111,114,32,42,61,32,98,108,117,114,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,10,35,105,102,100,101,102,32,71,76,79,87,95,85,83,69,95,65,85,84,79,95,69,88,80,79,83,85,82,69,10,10,9,9,102,114,97,103,95,99,111,108,111,114,32,47,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,97,117,116,111,95,101,120,112,111,115,117,114,101,44,32,105,118,101,99,50,40,48,44,32,48,41,44,32,48,41,46,114,32,47,32,98,108,117,114,46,103,108,111,119,95,97,117,116,111,95,101,120,112,111,115,117,114,101,95,115,99,97,108,101,59,10,35,101,110,100,105,102,10,9,9,102,114,97,103,95,99,111,108,111,114,32,42,61,32,98,108,117,114,46,103,108,111,119,95,101,120,112,111,115,117,114,101,59,10,10,9,9,102,108,111,97,116,32,108,117,109,105,110,97,110,99,101,32,61,32,109,97,120,40,102,114,97,103,95,99,111,108,111,114,46,114,44,32,109,97,120,40,102,114,97,103,95,99,111,108,111,114,46,103,44,32,102,114,97,103,95,99,111,108,111,114,46,98,41,41,59,10,9,9,102,108,111,97,116,32,102,101,101,100,98,97,99,107,32,61,32,109,97,120,40,115,109,111,111,116,104,115,116,101,112,40,98,108,117,114,46,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,44,32,98,108,117,114,46,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,32,43,32,98,108,117,114,46,103,108,111,119,95,104,100,114,95,115,99,97,108,101,44,32,108,117,109,105,110,97,110,99,101,41,44,32,98,108,117,114,46,103,108,111,119,95,98,108,111,111,109,41,59,10,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,109,105,110,40,102,114,97,103,95,99,111,108,111,114,32,42,32,102,101,101,100,98,97,99,107,44,32,118,101,99,52,40,98,108,117,114,46,103,108,111,119,95,108,117,109,105,110,97,110,99,101,95,99,97,112,41,41,32,47,32,98,108,117,114,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,9,125,10,10,35,101,110,100,105,102,32,10,10,35,105,102,100,101,102,32,77,79,68,69,95,67,79,80,89,10,9,118,101,99,52,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,44,32,48,46,48,41,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,35,101,110,100,105,102,10,125,10,0
		};
		setup(_vertex_code, _fragment_code, nullptr, "BlurRasterShaderRD");
	}
};

#endif