// generated header

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/PixUIRHI.PxRHIImage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPxRHIImage : public UObject
{ 
public:


	/// Functions
	// Function /Script/PixUIRHI.PxRHIImage.GetHandleObject
	// class UObject* GetHandleObject();                                                                                        // [0x528f7c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PixUIRHI.PxRHIMgr
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPxRHIMgr : public UObject
{ 
public:


	/// Functions
	// Function /Script/PixUIRHI.PxRHIMgr.RHIImageUpdate
	// bool RHIImageUpdate(class UPxRHIMgr* pPxRHIImage);                                                                       // [0x528f7d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUIRHI.PxRHIMgr.RHIImageFindByObject
	// class UPxRHIMgr* RHIImageFindByObject(class UObject* pCoreObject);                                                       // [0x528f85c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUIRHI.PxRHIMgr.RHIImageDestroy
	// bool RHIImageDestroy(class UPxRHIMgr* pPxRHIImage);                                                                      // [0x528f7d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUIRHI.PxRHIMgr.RHIImageCreate
	// class UPxRHIImage* RHIImageCreate();                                                                                     // [0x490e9a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUIRHI.PxRHIMgr.Get
	// class UPxRHIMgr* Get();                                                                                                  // [0x490e9a4] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UPxRHIImage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPxRHIMgr) == 0x0028); // 40 bytes (0x000028 - 0x000028)
