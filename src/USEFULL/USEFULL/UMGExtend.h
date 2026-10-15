// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/UMGExtend.GradientScrollBox
/// Size: 0x0968 (2408 bytes) (0x000920 - 0x000968) align 8 MaxSize: 0x0968
class UGradientScrollBox : public UScrollBox
{ 
public:
	bool                                               bRetainRender;                                              // 0x0920   (0x0001)  
	bool                                               RenderOnInvalidation;                                       // 0x0921   (0x0001)  
	bool                                               RenderOnPhase;                                              // 0x0922   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0923   (0x0001)  MISSED
	int32_t                                            Phase;                                                      // 0x0924   (0x0004)  
	int32_t                                            PhaseCount;                                                 // 0x0928   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x092C   (0x0004)  MISSED
	class UMaterialInterface*                          EffectMaterial;                                             // 0x0930   (0x0008)  
	FName                                              TextureParameter;                                           // 0x0938   (0x0008)  
	float                                              DownFadeRange;                                              // 0x0940   (0x0004)  
	float                                              DownFadeIntensity;                                          // 0x0944   (0x0004)  
	float                                              UpFadeRange;                                                // 0x0948   (0x0004)  
	float                                              UpFadeIntensity;                                            // 0x094C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0950   (0x0010)  MISSED
	class UMaterialInstanceDynamic*                    DefaultGradientMaterialDynamic;                             // 0x0960   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UGradientScrollBox) == 0x0968); // 2408 bytes (0x000920 - 0x000968)
static_assert(offsetof(UGradientScrollBox, EffectMaterial) == 0x0930);
static_assert(offsetof(UGradientScrollBox, TextureParameter) == 0x0938);
static_assert(offsetof(UGradientScrollBox, DefaultGradientMaterialDynamic) == 0x0960);
