// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/MFQCloud.MFQCloudWrapper
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UMFQCloudWrapper : public UObject
{ 
public:
	SDK_UNDEFINED(16,5116) /* FMulticastInlineDelegate */ __um(OnUploadProgress);                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,5117) /* FMulticastInlineDelegate */ __um(OnUploadCompleted);                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/MFQCloud.MFQCloudWrapper.UploadFileV2
	// bool UploadFileV2(FString InFilePath, FString InCosPath);                                                                // [0x60df650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFQCloud.MFQCloudWrapper.UploadFileExternal
	// bool UploadFileExternal(FString InFilePath, FString InCosPath);                                                          // [0x60df514] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFQCloud.MFQCloudWrapper.UploadFile
	// bool UploadFile(FString InFilePath, FString InCosPath);                                                                  // [0x60df3ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFQCloud.MFQCloudWrapper.OnUploadProgress__DelegateSignature
	// void OnUploadProgress__DelegateSignature(uint64_t TransferredSize, uint64_t TotalSize, FString Path);                    // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFQCloud.MFQCloudWrapper.OnUploadCompleted__DelegateSignature
	// void OnUploadCompleted__DelegateSignature(bool IsSuccess, FString Msg, FString Path);                                    // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFQCloud.MFQCloudWrapper.OnCosUploadProgress
	// void OnCosUploadProgress(uint64_t TransferredSize, uint64_t TotalSize, FString Path);                                    // [0x60df240] Final|Native|Public  
	// Function /Script/MFQCloud.MFQCloudWrapper.OnCosUploadComplete
	// void OnCosUploadComplete(bool bIsSucc, FString Msg, FString Path);                                                       // [0x60def98] Final|Native|Public  
	// Function /Script/MFQCloud.MFQCloudWrapper.GetExternalCosUrl
	// FString GetExternalCosUrl();                                                                                             // [0x60dee78] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFQCloud.MFQCloudWrapper.GetDefault
	// class UMFQCloudWrapper* GetDefault();                                                                                    // [0x60dee54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFQCloud.MFQCloudWrapper.AsyncUploadFileExternal
	// bool AsyncUploadFileExternal(FString InFilePath, FString InCosPath);                                                     // [0x60ded14] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFQCloud.MFQCloudWrapper.AsyncUploadFileCancel
	// void AsyncUploadFileCancel(FString InCosPath);                                                                           // [0x60dec38] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UMFQCloudWrapper) == 0x0058); // 88 bytes (0x000028 - 0x000058)
