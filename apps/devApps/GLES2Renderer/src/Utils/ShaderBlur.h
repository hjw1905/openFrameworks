/*
 *  ShaderBlur.h
 *  openFrameworks
 *
 *  Created by theo on 17/10/2009.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

/*
 *
 * Adapted for GL ES 2.0 by Andreas Müller
 *
 */

#include "ofMain.h"

class ShaderBlur
{
	public:
	
		ShaderBlur();
		~ShaderBlur();
	
		void setup(int fboW, int fboH);
		
		void beginRender();
		void endRender();
		
		void setBlurParams(int numPasses, float blurDist);
	
		void performBlur();
	
		void draw(float x, float y );
		void draw(float x, float y, float w, float h);
				
		ofShader shaderH;
		ofShader shaderV;	

		ofFbo fbo1, fbo2;	
	
		float pixelSizeX;
		float pixelSizeY;	
		
		float blurDistance;
		int noPasses;
	
		ofColor clearColor;
};