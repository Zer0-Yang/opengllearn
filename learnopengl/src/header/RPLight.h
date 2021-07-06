#pragma once
#include "RenderPass.h"
class RPLight :
    public RenderPass
{
public:
    RPLight(GLRenderCore& renderCoreIn, std::string shaderName, std::string VBOName);
    void init();
private:
    void initVAO();
    void initShader();
    void setDrawMode();
};

