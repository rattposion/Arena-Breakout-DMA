// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/INTLCore.INTLBaseUserWidget
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class UINTLBaseUserWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0290   (0x0008)  MISSED
};

/// Class /Script/INTLCore.INTLOutputUtility
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UINTLOutputUtility : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/INTLCore.INTLOutputUtility.FormatNoticeRet
	// void FormatNoticeRet(FINTLNoticeResult Ret, bool& IsSuccess, FText& ErrorMsg);                                           // [0x34f0e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLOutputUtility.FormatBaseRet
	// void FormatBaseRet(FINTLBaseResult Ret, bool& IsSuccess, FText& ErrorMsg);                                               // [0x34f0c00] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLOutputUtility.FormatAuthRet
	// void FormatAuthRet(FINTLAuthResult Ret, bool& IsSuccess, FText& ErrorMsg);                                               // [0x34f0a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/INTLCore.INTLPluginObserver
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UINTLPluginObserver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/INTLCore.INTLPluginObserver.OnWebViewResult
	// void OnWebViewResult(FINTLWebViewResult Ret);                                                                            // [0x3505410] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnWebSocketResult
	// void OnWebSocketResult(FINTLWebSocketResult Ret);                                                                        // [0x35052e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult
	// void OnUpdateStartRepoNewVersionInfoResult(FINTLUpdateStartRepoNewVersionInfo Ret);                                      // [0x35051e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnUpdateResult
	// void OnUpdateResult(FINTLUpdateResult Ret);                                                                              // [0x35050d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnUpdateProgressResult
	// void OnUpdateProgressResult(FINTLUpdateProgress Ret);                                                                    // [0x3504fb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnUpdateOptionalRepoInitResult
	// void OnUpdateOptionalRepoInitResult(FINTLUpdateOptionalRepoInitResult Ret);                                              // [0x3504eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnTranslatorReult
	// void OnTranslatorReult(FINTLTranslatorResult Ret);                                                                       // [0x3504da0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnStartUdpSocketResult
	// void OnStartUdpSocketResult(FINTLStartUdpSocketResult Ret);                                                              // [0x3504c30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnQRCodeResult
	// void OnQRCodeResult(FINTLQRCodeResult Ret);                                                                              // [0x3504b10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnPushResult
	// void OnPushResult(FINTLPushResult Ret);                                                                                  // [0x3504a00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnPushBaseResult
	// void OnPushBaseResult(FINTLBaseResult Ret);                                                                              // [0x3504900] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnPermissionResult
	// void OnPermissionResult(FINTLPermissionResult Ret);                                                                      // [0x35047e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnParentalGuidanceResult
	// void OnParentalGuidanceResult(FINTLParentalGuidanceResult Ret);                                                          // [0x3504710] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnNoticeRequestData
	// void OnNoticeRequestData(FINTLNoticeResult Ret);                                                                         // [0x3504600] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnMessageResult
	// void OnMessageResult(FINTLMessageResult Ret);                                                                            // [0x35044d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnLIBindRewardReult
	// void OnLIBindRewardReult(FINTLLIBindRewardResult Ret);                                                                   // [0x35043a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnIPInfoResult
	// void OnIPInfoResult(FINTLLBSIPInfoResult Ret);                                                                           // [0x3504280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnIDTokenResult
	// void OnIDTokenResult(FINTLIDTokenResult Ret);                                                                            // [0x3504160] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnGroupReqInfoResult
	// void OnGroupReqInfoResult(FINTLBaseResult Ret);                                                                          // [0x3504060] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnGetAllPassKeyResult
	// void OnGetAllPassKeyResult(FINTLAllPassKeyResult Ret);                                                                   // [0x3503f40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnFriendResult
	// void OnFriendResult(FINTLFriendResult Ret);                                                                              // [0x3503e30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnFriendBaseResult
	// void OnFriendBaseResult(FINTLBaseResult Ret);                                                                            // [0x3503d30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnExtendResult
	// void OnExtendResult(FINTLExtendResult Ret);                                                                              // [0x3503c20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDNSResult
	// void OnDNSResult(FINTLDNSResult Ret);                                                                                    // [0x3503030] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDismissLoginUI
	// void OnDismissLoginUI(bool Canceled);                                                                                    // [0x3503b70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDiscordQueryFriendRet
	// void OnDiscordQueryFriendRet(FINTLDiscordFriendResult Ret);                                                              // [0x3503a50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDiscordMessageUpdatedRet
	// void OnDiscordMessageUpdatedRet(FINTLDiscordMessageResult Ret);                                                          // [0x3503980] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDiscordGetConnectedUserRet
	// void OnDiscordGetConnectedUserRet(FINTLDiscordUserResult Ret);                                                           // [0x35038a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDiscordBaseRet
	// void OnDiscordBaseRet(FINTLBaseResult Ret);                                                                              // [0x35037a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDiscordAcceptInviteRet
	// void OnDiscordAcceptInviteRet(FINTLDiscordInviteResult Ret);                                                             // [0x35036d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDirTreeResult
	// void OnDirTreeResult(FINTLDirTreeResult Ret);                                                                            // [0x35035a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDeviceLevelResult
	// void OnDeviceLevelResult(FINTLDeviceLevelResult Ret);                                                                    // [0x3503490] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDetectNetworkResult
	// void OnDetectNetworkResult(FINTLDetectNetworkResult Ret);                                                                // [0x3503380] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDeletePassKeyResult
	// void OnDeletePassKeyResult(FINTLAllPassKeyResult Ret);                                                                   // [0x3503260] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnDeepLinkResult
	// void OnDeepLinkResult(FINTLBaseResult Ret);                                                                              // [0x3503160] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnCutoutResult
	// void OnCutoutResult(FCutoutInfoResult Ret);                                                                              // [0x3502ef0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnCustomerResult
	// void OnCustomerResult(FINTLCustomerResult Ret);                                                                          // [0x3502de0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnCreatePassKeyResult
	// void OnCreatePassKeyResult(FINTLAllPassKeyResult Ret);                                                                   // [0x3502cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnComplianceResult
	// void OnComplianceResult(FINTLComplianceResult Ret);                                                                      // [0x3502bf0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnAuthResult
	// void OnAuthResult(FINTLAuthResult Ret);                                                                                  // [0x3502b20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnAuthBaseResult
	// void OnAuthBaseResult(FINTLBaseResult Ret);                                                                              // [0x3502a20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnAdjustAttrsChangedResult
	// void OnAdjustAttrsChangedResult(FINTLAdjustAttrsChangedResult Ret);                                                      // [0x3502900] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnAchievementResult
	// void OnAchievementResult(FINTLAchievementResult Ret);                                                                    // [0x35027d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/INTLCore.INTLPluginObserver.OnAccountResult
	// void OnAccountResult(FINTLAccountResult Ret);                                                                            // [0x3502700] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/INTLCore.INTLSDKAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UINTLSDKAPI : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/INTLCore.INTLSDKAPI.UpgradeSaccToLI
	// void UpgradeSaccToLI();                                                                                                  // [0x350f260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UpdateUserInfo
	// void UpdateUserInfo(FINTLCustomerUserProfile& userProfile);                                                              // [0x350f1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UpdateStop
	// bool UpdateStop(int32_t RepoID, int32_t TaskId);                                                                         // [0x350f080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UpdateStart
	// bool UpdateStart(FINTLUpdateInitInfo Info);                                                                              // [0x350efa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UpdateLanguage
	// void UpdateLanguage(FString lan);                                                                                        // [0x350eee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UpdateContinue
	// bool UpdateContinue(int32_t RepoID);                                                                                     // [0x350ee00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UpdateConfig
	// bool UpdateConfig(TMap<FString, FString> Cfg, FString Project);                                                          // [0x350ec80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UpdateCfg
	// bool UpdateCfg(FString Key, FString DefaultVal, FString Project);                                                        // [0x350ea90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UnregisterPush
	// void UnregisterPush(FString Channel);                                                                                    // [0x350e9d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.UnlockAchievement
	// void UnlockAchievement(FString Channel, FString AchievementID, FString extraJson);                                       // [0x350e820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Unbind
	// bool Unbind(EINTLLoginChannel Channel, FString uid, FString extraJson);                                                  // [0x350e670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TranslateVoice
	// void TranslateVoice(FINTLTranslatorVoiceReq req_info);                                                                   // [0x350e510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Translate
	// void Translate(FINTLTranslatorReq req_info);                                                                             // [0x350e450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TransferAccount
	// void TransferAccount(FString TransferCode, FString password);                                                            // [0x350e310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ToggleBackgroundUpdate
	// bool ToggleBackgroundUpdate(bool enable);                                                                                // [0x350e250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TestJudgeCustomDeviceLevel
	// int32_t TestJudgeCustomDeviceLevel(FString parseJson);                                                                   // [0x350e180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TabSwitchGuid
	// void TabSwitchGuid(FString Guid);                                                                                        // [0x3505710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TabStart
	// void TabStart();                                                                                                         // [0x34f9660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TabRefresh
	// void TabRefresh();                                                                                                       // [0x34f9660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TabInit
	// void TabInit(FString Guid, FString SceneId, bool IsAutoPoll, bool IsAutoReport);                                         // [0x350df90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TabGetExpInfoByName
	// bool TabGetExpInfoByName(FINTLTabExpEntity& entity, FString ExpName, bool IsReport);                                     // [0x350de10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.TabGetExpInfoByLayerCode
	// bool TabGetExpInfoByLayerCode(FINTLTabExpEntity& entity, FString LayerCode, bool IsReport);                              // [0x350de10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.StopTraceRoute
	// FString StopTraceRoute();                                                                                                // [0x350ddc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.StopAnalytics
	// void StopAnalytics();                                                                                                    // [0x350dd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.StartUdpSocket
	// void StartUdpSocket(FString ID, int32_t Count, FString extraJson);                                                       // [0x350dbd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.StartTraceRoute
	// FString StartTraceRoute(FString ID);                                                                                     // [0x350dad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.StartDetectNetwork
	// void StartDetectNetwork(FString ID);                                                                                     // [0x350da10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShutDown
	// void ShutDown();                                                                                                         // [0x350d9f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowSingleFAQ
	// void ShowSingleFAQ(FString faqId);                                                                                       // [0x350d930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowRatingAlert
	// void ShowRatingAlert();                                                                                                  // [0x350d8f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowQRCode
	// void ShowQRCode(FString qrCodeContent);                                                                                  // [0x3505710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowPlayStationErrorDialog
	// int32_t ShowPlayStationErrorDialog(int32_t ErrorCode, FString Message);                                                  // [0x350d7e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowGroupChatRoom
	// void ShowGroupChatRoom(FINTLGroupReqInfo req_info, FString Channel);                                                     // [0x350d580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowGroupAgreementWindow
	// void ShowGroupAgreementWindow(FString Channel);                                                                          // [0x350d4c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowFaqSection
	// void ShowFaqSection(FString SectionID);                                                                                  // [0x350d400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowAllFAQSections
	// void ShowAllFAQSections();                                                                                               // [0x350d3d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowAchievementsUI
	// void ShowAchievementsUI(FString Channel, FString extraJson);                                                             // [0x350d290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ShowAccountPicker
	// bool ShowAccountPicker();                                                                                                // [0x350d240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Share
	// bool Share(FINTLFriendReqInfo Info, FString Channel);                                                                    // [0x350d010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetWebSocketHeartbeatInterval
	// void SetWebSocketHeartbeatInterval(FString URL, int32_t Interval);                                                       // [0x350cef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetTag
	// void SetTag(FString Channel, FString Tag);                                                                               // [0x350cd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetSessionExtraParam
	// void SetSessionExtraParam(FString extra_json);                                                                           // [0x350ccc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetRewardExtraJson
	// void SetRewardExtraJson(FString extraJson);                                                                              // [0x350cc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetProvision
	// bool SetProvision(FString UserAgreedGameTos, FString UserAgreedGamePP, FString UserAgreedLiPP, FString UserAgreedLiDt, FString UserAgreedLiTos, int32_t IsRecvEmail); // [0x350c880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetPositionMarkerColor
	// void SetPositionMarkerColor(FString hexCode);                                                                            // [0x3505710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetMaxDownloadSpeed
	// void SetMaxDownloadSpeed(int32_t Speed);                                                                                 // [0x350c7b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetLogPath
	// void SetLogPath(FString log_path);                                                                                       // [0x350c6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetLILoginInfo
	// void SetLILoginInfo(FString uid, FString Token, FString Account);                                                        // [0x350c500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetIcon
	// void SetIcon(FString imageURL);                                                                                          // [0x3505710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetDNSRegion
	// void SetDNSRegion(FString Region);                                                                                       // [0x350c070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetDeviceStatusCustomData
	// void SetDeviceStatusCustomData(FString CustomData);                                                                      // [0x350c440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetDeviceLevel
	// void SetDeviceLevel(int32_t Level);                                                                                      // [0x350c390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetDefaultUserStorageDirectory
	// void SetDefaultUserStorageDirectory(FString Dir);                                                                        // [0x350c260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetDefaultSharedStorageDirectory
	// void SetDefaultSharedStorageDirectory(FString Dir);                                                                      // [0x350c130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetCrashUserValue
	// void SetCrashUserValue(FString Key, FString Value);                                                                      // [0x350bf00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetCrashUserId
	// void SetCrashUserId(FString userId);                                                                                     // [0x350be40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetCrashSightAppVersion
	// void SetCrashSightAppVersion(FString AppVersion);                                                                        // [0x350bd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetConsent
	// void SetConsent(FINTLConsentStatus status, FString Types, FString SpecificChannel);                                      // [0x350bbe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetBackgroundUpdateNotificationContentTitle
	// void SetBackgroundUpdateNotificationContentTitle(FString Title);                                                         // [0x350bb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetAuthEncryptData
	// bool SetAuthEncryptData(FString auth_data, bool overwrite);                                                              // [0x350ba00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetAppVersion
	// void SetAppVersion(FString AppVersion);                                                                                  // [0x350b940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SetAccountInfo
	// void SetAccountInfo(EINTLLoginChannel Channel, int32_t ChannelID, FString LangType, int32_t AccountPlatType);            // [0x350b780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SendWebSocketMsg
	// void SendWebSocketMsg(FString URL, FString msg_content);                                                                 // [0x350b610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SendMessageMsg
	// void SendMessageMsg(FString msg_content);                                                                                // [0x350b550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SendMessage
	// bool SendMessage(FINTLFriendReqInfo Info, FString Channel);                                                              // [0x350b390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.SendBindReward
	// void SendBindReward(FString eventId, FString extraJson);                                                                 // [0x350b220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RevokeChannelToken
	// void RevokeChannelToken();                                                                                               // [0x350b1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RestartAnalytics
	// void RestartAnalytics();                                                                                                 // [0x350b190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Restart
	// void Restart();                                                                                                          // [0x350b150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ResetPasswordWithVerifyCode
	// bool ResetPasswordWithVerifyCode(FString Account, FString verifyCode, FString PhoneAreaCode, FString NewPassword, FString extraJson); // [0x350ae20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ResetPasswordWithOldPassword
	// bool ResetPasswordWithOldPassword(FString Account, FString OldPassword, FString PhoneAreaCode, FString NewPassword, FString extraJson); // [0x350aaf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ResetGuest
	// bool ResetGuest();                                                                                                       // [0x350aaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestWhatsAppSignature
	// void RequestWhatsAppSignature(FString extraJson);                                                                        // [0x350a9e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestVerifyCode
	// bool RequestVerifyCode(FString Account, EVerifyCodeType codeType, FString PhoneAreaCode, FString extraJson, int32_t OnlyLoginType); // [0x350a740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestTrackingAuthorization
	// void RequestTrackingAuthorization();                                                                                     // [0x350a700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestTracking
	// void RequestTracking();                                                                                                  // [0x34f9660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestPermission
	// void RequestPermission(TArray<EPermissionType>& permissionTypeArray);                                                    // [0x34f95d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestIPInfo
	// void RequestIPInfo();                                                                                                    // [0x350a6e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestGetRecentLoginDays
	// void RequestGetRecentLoginDays(FString RecentDay, FString extraJson);                                                    // [0x350a570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestFirstSetPassword
	// void RequestFirstSetPassword(int32_t verifyType, FString verifyCode, int32_t AccountType, FString Account, FString PhoneAreaCode, FString password, FString uid, FString Token, FString extraJson); // [0x350a040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestCheckVerifyCode
	// void RequestCheckVerifyCode(int32_t codeType, FString verifyCode, int32_t AccountType, FString Account, FString PhoneAreaCode, FString extraJson); // [0x3509d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestBindDataForAccount
	// void RequestBindDataForAccount(FString uid, FString Token, FString extraJson);                                           // [0x3509b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestAutoBindLIP
	// void RequestAutoBindLIP(FString autoBindLiCode, FString extraJson);                                                      // [0x35099b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RequestAccountInfo
	// void RequestAccountInfo(FString extraJson);                                                                              // [0x35098f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportRevenue
	// void ReportRevenue(FString EventName, FString Currency, FString RevenueValue, TMap<FString, FString> ParamsMap, FString SpecificChannel, FString extraJson); // [0x35094e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportPayStep
	// void ReportPayStep(int32_t Step, FString StepName, bool Result, int32_t ErrorCode, TMap<FString, FString> ParamsMap);    // [0x3509240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportLoginStep
	// void ReportLoginStep(int32_t Step, FString StepName, bool Result, int32_t ErrorCode, TMap<FString, FString> ParamsMap);  // [0x3508fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportFunnelWithCustomField
	// void ReportFunnelWithCustomField(TEnumAsByte<FINTLFunnelStep> step_name, int32_t error_code, TMap<FString, FString>& params_map); // [0x3508df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportFunnelCustomEventWithCustomField
	// void ReportFunnelCustomEventWithCustomField(FString l1_event_name, FString l2_event_name, int32_t error_code, TMap<FString, FString>& params_map); // [0x3508bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportFunnelCustomEvent
	// void ReportFunnelCustomEvent(FString l1_event_name, FString l2_event_name, int32_t error_code);                          // [0x3508a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportFunnel
	// void ReportFunnel(TEnumAsByte<FINTLFunnelStep> step_name, int32_t error_code);                                           // [0x3508940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportException
	// void ReportException(int32_t Type, FString ExceptionName, FString ExceptionMsg, FString ExceptionStack, TMap<FString, FString> extInfo); // [0x3508610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportEvent
	// void ReportEvent(FString EventName, TMap<FString, FString> ParamsMap, FString SpecificChannel, FString extraJson);       // [0x3508350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportCustomEventStep
	// void ReportCustomEventStep(FString EventName, int32_t Step, FString StepName, bool Result, int32_t ErrorCode, TMap<FString, FString> ParamsMap); // [0x3508010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ReportBinary
	// void ReportBinary(FString EventName, FString Data, int32_t Length, FString SpecificChannel);                             // [0x3507dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RemoveObserver
	// void RemoveObserver(TScriptInterface<Class> Observer);                                                                   // [0x3507d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RemoveHostCache
	// void RemoveHostCache(FString Host);                                                                                      // [0x3507c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RemoveCustomConfigKey
	// bool RemoveCustomConfigKey(FString Key, FString Project);                                                                // [0x3507b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RemoveAllCustomConfigKey
	// bool RemoveAllCustomConfigKey(FString Project);                                                                          // [0x3507a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.RegisterPush
	// void RegisterPush(FString Channel, FString Account);                                                                     // [0x35078d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Register
	// bool Register(FString Account, FString password, FString verifyCode, FString PhoneAreaCode, FINTLAccountProfile userProfile); // [0x3507570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryVerifyCodeStatus
	// bool QueryVerifyCodeStatus(FString Account, FString verifyCode, EVerifyCodeType codeType, FString PhoneAreaCode, FString extraJson); // [0x3507290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryUserNameStatus
	// void QueryUserNameStatus(FString userName);                                                                              // [0x35071d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryUserInfoWithOpenId
	// void QueryUserInfoWithOpenId(FString Openid, bool& is_openid, int32_t& channel_id, FString Token);                       // [0x3506fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryUserInfo
	// bool QueryUserInfo();                                                                                                    // [0x3506f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryTransferCode
	// void QueryTransferCode();                                                                                                // [0x3506f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryRewardListStatus
	// void QueryRewardListStatus(FString eventIds, FString extraJson);                                                         // [0x3506db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryRegisterStatus
	// bool QueryRegisterStatus(FString Account, FString PhoneAreaCode, FString extraJson);                                     // [0x3506bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryNeedUpgradeAndProvisionInfo
	// bool QueryNeedUpgradeAndProvisionInfo();                                                                                 // [0x3506b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryLoginRecord
	// void QueryLoginRecord();                                                                                                 // [0x3506b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryLegalDocumentsAcceptedVersion
	// bool QueryLegalDocumentsAcceptedVersion();                                                                               // [0x3506ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryIsReceiveEmail
	// bool QueryIsReceiveEmail(FString Account, FString PhoneAreaCode, FString extraJson);                                     // [0x35068e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryIsEEA
	// void QueryIsEEA(FString Region);                                                                                         // [0x3506820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryIpByHost
	// void QueryIpByHost(FString Host);                                                                                        // [0x3506760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryIDToken
	// void QueryIDToken();                                                                                                     // [0x3506710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryFriends
	// bool QueryFriends(EINTLLoginChannel Channel, int32_t page, int32_t Count, bool IsInGame, FString extraJson);             // [0x35064f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryDirTree
	// void QueryDirTree(int32_t TreeId);                                                                                       // [0x3506430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryDirNode
	// void QueryDirNode(int32_t TreeId, int32_t NodeId);                                                                       // [0x3506300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryDeviceLevel
	// void QueryDeviceLevel();                                                                                                 // [0x35062c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryDataProtectionAcceptance
	// void QueryDataProtectionAcceptance();                                                                                    // [0x3506270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryCanBind
	// bool QueryCanBind(int32_t ChannelID, int32_t AccountPlatType, FString Account, FString PhoneAreaCode, FString extraJson); // [0x3505fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryBindRewardStatus
	// void QueryBindRewardStatus(FString eventId);                                                                             // [0x3505f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryBindInfo
	// bool QueryBindInfo();                                                                                                    // [0x3505ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryActiveUser
	// bool QueryActiveUser();                                                                                                  // [0x3505e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryAccountRegistrationInfo
	// bool QueryAccountRegistrationInfo();                                                                                     // [0x3505e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.QueryAccountProfile
	// bool QueryAccountProfile();                                                                                              // [0x3505de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.PostNetworkLatencyInSession
	// void PostNetworkLatencyInSession(int32_t LatencyMs);                                                                     // [0x3505d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.PostFrameTimeInSession
	// void PostFrameTimeInSession(float DeltaSeconds);                                                                         // [0x3505c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.OpenUrl
	// void OpenUrl(FString URL, EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, FString extraJson, FString Anchor); // [0x3505910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.OpenUnreadMessage
	// void OpenUnreadMessage(FString uid, FString push_token);                                                                 // [0x35057d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.OpenQRScanner
	// void OpenQRScanner(FString qrCodeContent);                                                                               // [0x3505710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.OpenIdLinkLIChannelUid
	// void OpenIdLinkLIChannelUid();                                                                                           // [0x35056d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.OpenIdLinkChannelUid
	// void OpenIdLinkChannelUid(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                            // [0x3505520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.OnTickEvent
	// bool OnTickEvent();                                                                                                      // [0x3504d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.NoticeRequestData
	// FString NoticeRequestData(FString Region, FString LangType, FString extraJson);                                          // [0x35024e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ModifyProfile
	// bool ModifyProfile(FINTLAccountProfile userProfile);                                                                     // [0x3502410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ModifyLegalDocumentsAcceptedVersion
	// bool ModifyLegalDocumentsAcceptedVersion(FString acceptedVersionsJson);                                                  // [0x3502350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ModifyDownloadPriority
	// bool ModifyDownloadPriority(int32_t RepoID, int32_t TaskId, int32_t DownloadPriority);                                   // [0x35021d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ModifyDataProtectionAcceptance
	// void ModifyDataProtectionAcceptance(FString PPVersion, FString TOSVersion);                                              // [0x3502090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ModifyAccountWithVerifyCode
	// bool ModifyAccountWithVerifyCode(FString OldAccount, FString OldAccountVerifyCode, FString OldPhoneAreaCode, FString NewAccount, FString NewAccountVerifyCode, FString NewPhoneAreaCode, FString extraJson); // [0x3501c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ModifyAccountWithPassword
	// bool ModifyAccountWithPassword(FString OldAccount, FString OldPhoneAreaCode, FString password, FString NewAccount, FString NewAccountVerifyCode, FString NewPhoneAreaCode, FString extraJson); // [0x3501770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ModifyAccountWithLoginState
	// bool ModifyAccountWithLoginState(FString OldPhoneAreaCode, FString NewAccount, FString NewAccountVerifyCode, FString NewPhoneAreaCode, FString extraJson); // [0x3501440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.MarkSessionLoad
	// void MarkSessionLoad(FString SessionName, FString extra_json);                                                           // [0x35012d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.MarkSessionClosed
	// void MarkSessionClosed();                                                                                                // [0x3501270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Logout
	// bool Logout(EINTLLoginChannel Channel, bool ChannelOnly);                                                                // [0x3501180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginWithVerifyCode
	// bool LoginWithVerifyCode(EINTLLoginChannel Channel, FString Account, FString password, FString verifyCode, FString PhoneAreaCode, FString PermissionList, char OnlyLoginType); // [0x3500da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginWithPassword
	// bool LoginWithPassword(EINTLLoginChannel Channel, FString Account, FString password, FString PhoneAreaCode, FString PermissionList, int32_t SupportCaptcha, int32_t MachineCheckType, FString TencentResponse, FString GoogleResponse); // [0x35008b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginWithMappedChannel
	// bool LoginWithMappedChannel(EINTLLoginChannel Channel, FString LoginMode, FString Permissions);                          // [0x3500700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginWithConfirmCodeForMail
	// void LoginWithConfirmCodeForMail(FString ChannelID, FString ConfirmCode, FString extraJson);                             // [0x3500510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginWithConfirmCode
	// bool LoginWithConfirmCode(int32_t ActionType, FString ConfirmCode, FString extraJson);                                   // [0x3500360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginWithChannel
	// bool LoginWithChannel(EINTLLoginChannel Channel, FString LoginMode);                                                     // [0x3500240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginWithBoundChannel
	// bool LoginWithBoundChannel(EINTLLoginChannel Channel, FString LoginMode);                                                // [0x3500120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginUsePluginCache
	// void LoginUsePluginCache(int32_t request_mode);                                                                          // [0x3500070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginPassKey
	// void LoginPassKey();                                                                                                     // [0x3500040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginForLI
	// bool LoginForLI(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                                      // [0x34ffe90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginChannelWithLIPASS
	// void LoginChannelWithLIPASS(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                          // [0x34ffce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoginChannelOnly
	// void LoginChannelOnly(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                                // [0x34ffb30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Login
	// bool Login(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                                           // [0x34ff980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LogCrashInfo
	// void LogCrashInfo(EINTLCrashLevel Level, FString Tag, FString Log);                                                      // [0x34ff7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LoadCutoutData
	// void LoadCutoutData();                                                                                                   // [0x34f9660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LinkWithLIChannelsToken
	// void LinkWithLIChannelsToken();                                                                                          // [0x34ff790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LinkModeChannelLogin
	// void LinkModeChannelLogin(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                            // [0x34ff5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LinkModeAuthenticationLogin
	// void LinkModeAuthenticationLogin(FString extraJson);                                                                     // [0x34ff520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LaunchLoginUI
	// void LaunchLoginUI();                                                                                                    // [0x34ff4b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.LaunchAccountUI
	// bool LaunchAccountUI(int32_t Type, FString extraJson);                                                                   // [0x34ff390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.IsPerformedTrackingAuthorization
	// bool IsPerformedTrackingAuthorization();                                                                                 // [0x34ff340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.IsPassKeyAvailable
	// bool IsPassKeyAvailable();                                                                                               // [0x34ff2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.IsNetworkAvailable
	// bool IsNetworkAvailable();                                                                                               // [0x34ff2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.IsAuthorized
	// bool IsAuthorized();                                                                                                     // [0x34ff270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.IsAppInstalled
	// bool IsAppInstalled(FString Channel, FString extraJson);                                                                 // [0x34ff100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.InitFirebaseSDK
	// void InitFirebaseSDK();                                                                                                  // [0x34ff0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.InitCustomer
	// void InitCustomer(FINTLCustomerUserProfile& userProfile);                                                                // [0x34ff010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.InitAnalytics
	// void InitAnalytics();                                                                                                    // [0x34fefc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Init
	// void Init();                                                                                                             // [0x34fefa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.IncrementAchievement
	// void IncrementAchievement(FString Channel, FString AchievementID, int32_t NumSteps, FString extraJson);                  // [0x34fedb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GotoSystemSetting
	// void GotoSystemSetting(TArray<EPermissionType>& permissionTypeArray);                                                    // [0x34f95d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetXGPStatus
	// void GetXGPStatus();                                                                                                     // [0x34fed80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetUserStorage
	// FString GetUserStorage();                                                                                                // [0x34fed30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetStoreChannel
	// int32_t GetStoreChannel();                                                                                               // [0x34fecd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetSDKVersion
	// FString GetSDKVersion();                                                                                                 // [0x34fec80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetRewardExtraJson
	// FString GetRewardExtraJson();                                                                                            // [0x34fec30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetLIUidAndTokenForAdultCert
	// void GetLIUidAndTokenForAdultCert();                                                                                     // [0x34febe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetLICombineAccountInfo
	// void GetLICombineAccountInfo();                                                                                          // [0x34feb90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetLIAvatarInfo
	// void GetLIAvatarInfo();                                                                                                  // [0x34feb40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetIpByHost
	// FString GetIpByHost(FString Host);                                                                                       // [0x34fea40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetInstanceIDAsync
	// FString GetInstanceIDAsync(FString Channel);                                                                             // [0x34fe940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetInstanceID
	// FString GetInstanceID(FString Channel);                                                                                  // [0x34fe840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetIDTokenResult
	// bool GetIDTokenResult(FINTLIDTokenResult& jwtRet);                                                                       // [0x34fe750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetFINTLAuthResult
	// FINTLAuthResult GetFINTLAuthResult();                                                                                    // [0x34fe6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetEncryptUrl
	// FString GetEncryptUrl(FString URL);                                                                                      // [0x34fe5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetDeviceLevel
	// int32_t GetDeviceLevel();                                                                                                // [0x34fe5a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetDeviceInfo
	// FString GetDeviceInfo(FString extra_json);                                                                               // [0x34fe4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetCurrentResourceVersion
	// FString GetCurrentResourceVersion();                                                                                     // [0x34fe450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetCurrentAppVersion
	// FString GetCurrentAppVersion();                                                                                          // [0x34fe400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetConfig
	// FString GetConfig(FString Key, FString DefaultVal, FString Project);                                                     // [0x34fe1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetChannelVersion
	// FString GetChannelVersion(FString Channel);                                                                              // [0x34fe0e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetAuthResult
	// bool GetAuthResult(FINTLAuthResult& LoginRet);                                                                           // [0x34fe020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetAuthEncryptData
	// FString GetAuthEncryptData();                                                                                            // [0x34fdfd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetAuthDeviceInfo
	// FString GetAuthDeviceInfo();                                                                                             // [0x34fdf80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GetAllPassKey
	// void GetAllPassKey();                                                                                                    // [0x34fdf20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.GenerateTransferCode
	// void GenerateTransferCode(FString password);                                                                             // [0x34fde60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.FlushINTLEvents
	// void FlushINTLEvents();                                                                                                  // [0x34fde10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Fetch
	// FString Fetch();                                                                                                         // [0x34fddc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ExtendInvoke
	// FString ExtendInvoke(EINTLLoginChannel Channel, FString ExtendMethodName, FString ParamsJson);                           // [0x34fdbf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.EnterGameFailed
	// void EnterGameFailed(FINTLAuthResult Ret);                                                                               // [0x34fdb30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.EnterGame
	// void EnterGame();                                                                                                        // [0x34fdaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DownloadOptionalRepoFiles
	// int32_t DownloadOptionalRepoFiles(int32_t RepoID, int32_t DownloadPriority, TArray<FString>& FilesPath, bool isbig);     // [0x34fd8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DismissLoginUI
	// void DismissLoginUI(bool Canceled);                                                                                      // [0x34fd7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordSetRichPresence
	// void DiscordSetRichPresence(FINTLRichPresence presence);                                                                 // [0x34fd730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordSendMessage
	// void DiscordSendMessage(FString recipientId, FString Content);                                                           // [0x34fd5c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordSendInviteToFriend
	// void DiscordSendInviteToFriend(FString userId, FString Content);                                                         // [0x34fd450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordRemoveFriend
	// void DiscordRemoveFriend(FString userId);                                                                                // [0x34fd390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordQueryFriends
	// void DiscordQueryFriends(int32_t page, int32_t Count);                                                                   // [0x34fd2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordLeaveLobby
	// void DiscordLeaveLobby();                                                                                                // [0x34fd260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordGetConnectedUser
	// void DiscordGetConnectedUser();                                                                                          // [0x34fd240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordCreateLobby
	// void DiscordCreateLobby(FString secret);                                                                                 // [0x34fd180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordAuthorize
	// void DiscordAuthorize();                                                                                                 // [0x34fd160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordAddFriendByName
	// void DiscordAddFriendByName(FString userName);                                                                           // [0x34fd0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordAddFriendByID
	// void DiscordAddFriendByID(FString userId);                                                                               // [0x34fcfe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordAcceptInviteFromFriend
	// void DiscordAcceptInviteFromFriend(FString senderId);                                                                    // [0x34fcf20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DiscordAcceptFriendRequest
	// void DiscordAcceptFriendRequest(FString userId);                                                                         // [0x34fce60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DestroyMessage
	// void DestroyMessage();                                                                                                   // [0x34fce20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DeleteTag
	// void DeleteTag(FString Channel, FString Tag);                                                                            // [0x34fccb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DeletePassKey
	// void DeletePassKey(FString CredentialId, FString verifyCode, FString Account, int32_t codeType, int32_t AccountType);    // [0x34fc9c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.DeleteLocalNotifications
	// void DeleteLocalNotifications(FString Key);                                                                              // [0x34fc900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CreateWebSocket
	// void CreateWebSocket(FString URL, FString queryJson, FString headerJson);                                                // [0x34fc750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CreatePassKey
	// void CreatePassKey(FString Account);                                                                                     // [0x34fc660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CreateMessage
	// void CreateMessage(FString queryJson, FString headerJson);                                                               // [0x34fc520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceVerifyRealName
	// void ComplianceVerifyRealName();                                                                                         // [0x34fc4d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceVerifyParentAndCertificate
	// void ComplianceVerifyParentAndCertificate();                                                                             // [0x34fc480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceVerifyCreditCard
	// void ComplianceVerifyCreditCard();                                                                                       // [0x34fc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceVerifyAdult
	// void ComplianceVerifyAdult();                                                                                            // [0x34fc3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetUserProfile
	// bool ComplianceSetUserProfile(FString GameId, FString Openid, FString Token, int32_t ChannelID, FString Region);         // [0x34fc100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetUserInfoWithBirthday
	// void ComplianceSetUserInfoWithBirthday(FString Region, int32_t BirthdayYear, int32_t BirthdayMonth, int32_t BirthdayDay); // [0x34fbf40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetUserInfoWithBirthAge
	// void ComplianceSetUserInfoWithBirthAge(FString Region, int32_t BirthAge);                                                // [0x34fbe20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetUserInfoWithAgeStatus
	// void ComplianceSetUserInfoWithAgeStatus(FString Region, EComplianceAgeStatus status);                                    // [0x34fbd00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetParentCertificateStatus
	// void ComplianceSetParentCertificateStatus(EComplianceParentCertificateStatus status);                                    // [0x34fbc70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetLIUidAndLIUidToken
	// void ComplianceSetLIUidAndLIUidToken(FString LiUid, FString LIUidToken);                                                 // [0x34fbb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetEUAgreeStatus
	// void ComplianceSetEUAgreeStatus(EComplianceAgreeStatus status);                                                          // [0x34fba40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSetAdulthood
	// void ComplianceSetAdulthood(EComplianceAgeStatus status);                                                                // [0x34fb970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSendEmailWithScene
	// void ComplianceSendEmailWithScene(FString Region, FString Email, int32_t Scene, FString userName);                       // [0x34fb730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSendEmail
	// void ComplianceSendEmail(FString Region, FString Email, FString userName);                                               // [0x34fb540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceSendConsoleEmail
	// void ComplianceSendConsoleEmail(FString Region, FString Email, int32_t Scene, FString URL, FString userName);            // [0x34fb260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceQueryUserStatus
	// void ComplianceQueryUserStatus();                                                                                        // [0x34fb210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceQueryUserInfo
	// void ComplianceQueryUserInfo();                                                                                          // [0x34fb1c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceQueryStrategy
	// void ComplianceQueryStrategy(FString Region);                                                                            // [0x34fb100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceQueryCountryConfig
	// void ComplianceQueryCountryConfig(FString Region, int32_t ChannelID);                                                    // [0x34fafe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceMultiSetStatusWithBirthday
	// void ComplianceMultiSetStatusWithBirthday(FString Openid, FString otoken, FString Region, FString Birthday, int32_t CertificateType, FString extraJson, int32_t ChannelID, bool isUid, int32_t UiType); // [0x34fab50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceMultiSetStatusWithAge
	// void ComplianceMultiSetStatusWithAge(FString Openid, FString otoken, FString Region, int32_t Age, int32_t CertificateType, FString extraJson, int32_t ChannelID, bool isUid, int32_t UiType); // [0x34fa720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceMultiSetStatusWithAdultCheckStatus
	// void ComplianceMultiSetStatusWithAdultCheckStatus(FString Openid, FString otoken, FString Region, int32_t adultCheckStatus, int32_t compareAge, int32_t CertificateType, FString extraJson, int32_t ChannelID, bool isUid, int32_t UiType); // [0x34fa2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceInitWithParams
	// bool ComplianceInitWithParams(FString GameId, FString Openid, FString Token, int32_t ChannelID, FString LangType, FString extraJson, bool is_NoPB); // [0x34f9ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceInit
	// bool ComplianceInit();                                                                                                   // [0x34f9e60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceGetSocialFeatureVerifyUrl
	// FString ComplianceGetSocialFeatureVerifyUrl();                                                                           // [0x34f9e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceGetConsoleRealNameVerifyUrl
	// FString ComplianceGetConsoleRealNameVerifyUrl(FString Region);                                                           // [0x34f9d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceGetConsoleCreditCardVerifyUrl
	// FString ComplianceGetConsoleCreditCardVerifyUrl();                                                                       // [0x34f9cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ComplianceCommitBirthday
	// void ComplianceCommitBirthday(int32_t BirthdayYear, int32_t BirthdayMonth, int32_t BirthdayDay);                         // [0x34f9b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CollectionStop
	// void CollectionStop();                                                                                                   // [0x34f9b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CollectionResume
	// void CollectionResume();                                                                                                 // [0x34f9ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CloseWebSocket
	// void CloseWebSocket(FString URL);                                                                                        // [0x34f9a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ClosePlayStationErrorDialog
	// int32_t ClosePlayStationErrorDialog();                                                                                   // [0x34f9a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ClearUserStorage
	// bool ClearUserStorage(FString sub_dir);                                                                                  // [0x34f9930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ClearLocalNotifications
	// void ClearLocalNotifications(FString Channel);                                                                           // [0x34f9870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CheckTwoFALoginForLI
	// void CheckTwoFALoginForLI(FString two_fa_confirm_code, FString two_fa_verify_code, FString two_fa_li_email);             // [0x34f9680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CheckTracking
	// void CheckTracking();                                                                                                    // [0x34f9660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CheckPermissionStatus
	// void CheckPermissionStatus(TArray<EPermissionType>& permissionTypeArray);                                                // [0x34f95d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CheckOptionalRepoFiles
	// TArray<FINTLUpdateOptionalRepoFilesStatus> CheckOptionalRepoFiles(int32_t RepoID, TArray<FString>& FilesPath);           // [0x34f9460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CheckActiveUser
	// bool CheckActiveUser();                                                                                                  // [0x34f9410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ChangeIsReceiveEmail
	// bool ChangeIsReceiveEmail(int32_t recv_email);                                                                           // [0x34f9330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CancelLogin
	// void CancelLogin(FString Channel, FString extra_json);                                                                   // [0x34f91f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CancelLIAccountDeletion
	// void CancelLIAccountDeletion();                                                                                          // [0x34f91a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CancelAccountDeletion
	// void CancelAccountDeletion();                                                                                            // [0x34f9150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.CallJS
	// void CallJS(FString JsonJsParam);                                                                                        // [0x34f9090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.BuildMapWithLoggedinChannel
	// bool BuildMapWithLoggedinChannel();                                                                                      // [0x34f9030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.BindWithThirdChannel
	// void BindWithThirdChannel();                                                                                             // [0x34f8ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.BindWithLoggedinChannel
	// bool BindWithLoggedinChannel();                                                                                          // [0x34f8f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.BindUsePluginCache
	// void BindUsePluginCache();                                                                                               // [0x34f8f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.Bind
	// bool Bind(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                                            // [0x34f8d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.AutoLoginForLI
	// bool AutoLoginForLI();                                                                                                   // [0x34f8d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.AutoLogin
	// bool AutoLogin();                                                                                                        // [0x34f8d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.AuthLoginWithThirdChannel
	// void AuthLoginWithThirdChannel();                                                                                        // [0x34f8cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.AddObserver
	// void AddObserver(TScriptInterface<Class> Observer);                                                                      // [0x34f8c40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.AddLocalNotificationIOS
	// void AddLocalNotificationIOS(FString Channel, FINTLLocalNotificationIOS LocalNotification);                              // [0x34f8a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.AddLocalNotification
	// void AddLocalNotification(FString Channel, FINTLLocalNotification LocalNotification);                                    // [0x34f87f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.ActivatePGSService
	// void ActivatePGSService();                                                                                               // [0x34f87c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLSDKAPI.AccountLoginWithLIPASS
	// void AccountLoginWithLIPASS(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                          // [0x34f8610] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/INTLCore.INTLUtility
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UINTLUtility : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/INTLCore.INTLUtility.Regular
	// bool Regular(FString Str, FString Reg);                                                                                  // [0x350f830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLUtility.RefreshCurToastCnt
	// int32_t RefreshCurToastCnt(int32_t ChangeCnt);                                                                           // [0x350f770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLUtility.GetNewToastOrder
	// int32_t GetNewToastOrder();                                                                                              // [0x350f750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLUtility.ForceCrash
	// void ForceCrash();                                                                                                       // [0x350f6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/INTLCore.INTLUtility.AddSystemBrowserFireWallRule
	// void AddSystemBrowserFireWallRule(int32_t Port, FString RuleName);                                                       // [0x350f5d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/INTLCore.INTLBaseResult
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FINTLBaseResult
{ 
	int32_t                                            methodId;                                                   // 0x0000   (0x0004)  
	int32_t                                            RetCode;                                                    // 0x0004   (0x0004)  
	int32_t                                            SubRetCode;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            RetMsg;                                                     // 0x0010   (0x0010)  
	int32_t                                            ThirdCode;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            ThirdMsg;                                                   // 0x0028   (0x0010)  
	FString                                            extraJson;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/INTLCore.INTLAchievementInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FINTLAchievementInfo
{ 
	FString                                            AchievementID;                                              // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	int32_t                                            CurrentSteps;                                               // 0x0030   (0x0004)  
	int32_t                                            TotalSteps;                                                 // 0x0034   (0x0004)  
	int32_t                                            status;                                                     // 0x0038   (0x0004)  
	int32_t                                            UnlockTime;                                                 // 0x003C   (0x0004)  
	FString                                            PlatformData;                                               // 0x0040   (0x0010)  
	FString                                            ExtraData;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/INTLCore.INTLAchievementResult
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
struct FINTLAchievementResult : FINTLBaseResult
{ 
	FString                                            SeqId;                                                      // 0x0048   (0x0010)  
	FString                                            Platform;                                                   // 0x0058   (0x0010)  
	TArray<FINTLAchievementInfo>                       AchievementList;                                            // 0x0068   (0x0010)  
};

/// Struct /Script/INTLCore.INTLParentalGuidanceResult
/// Size: 0x0098 (152 bytes) (0x000048 - 0x000098) align 8 MaxSize: 0x0098
struct FINTLParentalGuidanceResult : FINTLBaseResult
{ 
	FString                                            TimeLimitStart;                                             // 0x0048   (0x0010)  
	FString                                            TimeLimitEnd;                                               // 0x0058   (0x0010)  
	int32_t                                            DurationLimit;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            TimeZone;                                                   // 0x0070   (0x0010)  
	FString                                            Time;                                                       // 0x0080   (0x0010)  
	int32_t                                            Duration;                                                   // 0x0090   (0x0004)  
	float                                              LeftMins;                                                   // 0x0094   (0x0004)  
};

/// Struct /Script/INTLCore.INTLQRCodeResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLQRCodeResult : FINTLBaseResult
{ 
	FString                                            QRCodeJson;                                                 // 0x0048   (0x0010)  
};

/// Struct /Script/INTLCore.INTLRichPresence
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FINTLRichPresence
{ 
	FString                                            gameName;                                                   // 0x0000   (0x0010)  
	FString                                            State;                                                      // 0x0010   (0x0010)  
	FString                                            details;                                                    // 0x0020   (0x0010)  
	FString                                            largeText;                                                  // 0x0030   (0x0010)  
	FString                                            largeImage;                                                 // 0x0040   (0x0010)  
	FString                                            SmallText;                                                  // 0x0050   (0x0010)  
	FString                                            smallImage;                                                 // 0x0060   (0x0010)  
	int32_t                                            StartTime;                                                  // 0x0070   (0x0004)  
	int32_t                                            EndTime;                                                    // 0x0074   (0x0004)  
	int32_t                                            partyMaxSize;                                               // 0x0078   (0x0004)  
	int32_t                                            supportedPlatforms;                                         // 0x007C   (0x0004)  
	FString                                            extraJson;                                                  // 0x0080   (0x0010)  
	FString                                            inviteCoverImage;                                           // 0x0090   (0x0010)  
};

/// Struct /Script/INTLCore.INTLDiscordUserInfo
/// Size: 0x0118 (280 bytes) (0x000000 - 0x000118) align 8 MaxSize: 0x0118
struct FINTLDiscordUserInfo
{ 
	FString                                            uid;                                                        // 0x0000   (0x0010)  
	FString                                            avatarUrl;                                                  // 0x0010   (0x0010)  
	FString                                            userName;                                                   // 0x0020   (0x0010)  
	FString                                            DisplayName;                                                // 0x0030   (0x0010)  
	int32_t                                            status;                                                     // 0x0040   (0x0004)  
	int32_t                                            relationshipType;                                           // 0x0044   (0x0004)  
	int32_t                                            IsInGame;                                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            gid;                                                        // 0x0050   (0x0010)  
	int32_t                                            lastLoginTimestamp;                                         // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FINTLRichPresence                                  presence;                                                   // 0x0068   (0x00A0)  
	FString                                            extraJson;                                                  // 0x0108   (0x0010)  
};

/// Struct /Script/INTLCore.INTLDiscordUserResult
/// Size: 0x0160 (352 bytes) (0x000048 - 0x000160) align 8 MaxSize: 0x0160
struct FINTLDiscordUserResult : FINTLBaseResult
{ 
	FINTLDiscordUserInfo                               User;                                                       // 0x0048   (0x0118)  
};

/// Struct /Script/INTLCore.INTLDiscordMessageResult
/// Size: 0x02B0 (688 bytes) (0x000048 - 0x0002B0) align 8 MaxSize: 0x02B0
struct FINTLDiscordMessageResult : FINTLBaseResult
{ 
	int32_t                                            Type;                                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FINTLDiscordUserInfo                               author;                                                     // 0x0050   (0x0118)  
	FINTLDiscordUserInfo                               receiver;                                                   // 0x0168   (0x0118)  
	FString                                            Content;                                                    // 0x0280   (0x0010)  
	FString                                            Messageid;                                                  // 0x0290   (0x0010)  
	int32_t                                            editedTimestamp;                                            // 0x02A0   (0x0004)  
	int32_t                                            sentTimestamp;                                              // 0x02A4   (0x0004)  
	bool                                               isSentFromGame;                                             // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x02A9   (0x0007)  MISSED
};

/// Struct /Script/INTLCore.INTLDiscordInviteResult
/// Size: 0x0178 (376 bytes) (0x000048 - 0x000178) align 8 MaxSize: 0x0178
struct FINTLDiscordInviteResult : FINTLBaseResult
{ 
	FINTLDiscordUserInfo                               sender;                                                     // 0x0048   (0x0118)  
	bool                                               IsValid;                                                    // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	int32_t                                            inviteType;                                                 // 0x0164   (0x0004)  
	FString                                            Messageid;                                                  // 0x0168   (0x0010)  
};

/// Struct /Script/INTLCore.INTLDiscordFriendResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLDiscordFriendResult : FINTLBaseResult
{ 
	TArray<FINTLDiscordUserInfo>                       friendInfoList;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/INTLCore.INTLTranslatorLang
/// Size: 0x08E0 (2272 bytes) (0x000000 - 0x0008E0) align 8 MaxSize: 0x08E0
struct FINTLTranslatorLang
{ 
	FString                                            auto_lang;                                                  // 0x0000   (0x0010)  
	FString                                            zh;                                                         // 0x0010   (0x0010)  
	FString                                            en;                                                         // 0x0020   (0x0010)  
	FString                                            fr;                                                         // 0x0030   (0x0010)  
	FString                                            ja;                                                         // 0x0040   (0x0010)  
	FString                                            ko;                                                         // 0x0050   (0x0010)  
	FString                                            zh_tw;                                                      // 0x0060   (0x0010)  
	FString                                            zh_hk;                                                      // 0x0070   (0x0010)  
	FString                                            de;                                                         // 0x0080   (0x0010)  
	FString                                            es;                                                         // 0x0090   (0x0010)  
	FString                                            ID;                                                         // 0x00A0   (0x0010)  
	FString                                            pt;                                                         // 0x00B0   (0x0010)  
	FString                                            th;                                                         // 0x00C0   (0x0010)  
	FString                                            tr;                                                         // 0x00D0   (0x0010)  
	FString                                            it;                                                         // 0x00E0   (0x0010)  
	FString                                            ar;                                                         // 0x00F0   (0x0010)  
	FString                                            ru;                                                         // 0x0100   (0x0010)  
	FString                                            ms;                                                         // 0x0110   (0x0010)  
	FString                                            vi;                                                         // 0x0120   (0x0010)  
	FString                                            pl;                                                         // 0x0130   (0x0010)  
	FString                                            no;                                                         // 0x0140   (0x0010)  
	FString                                            se;                                                         // 0x0150   (0x0010)  
	FString                                            my;                                                         // 0x0160   (0x0010)  
	FString                                            bn;                                                         // 0x0170   (0x0010)  
	FString                                            lo;                                                         // 0x0180   (0x0010)  
	FString                                            km;                                                         // 0x0190   (0x0010)  
	FString                                            nl;                                                         // 0x01A0   (0x0010)  
	FString                                            tl;                                                         // 0x01B0   (0x0010)  
	FString                                            cz;                                                         // 0x01C0   (0x0010)  
	FString                                            da;                                                         // 0x01D0   (0x0010)  
	FString                                            fi;                                                         // 0x01E0   (0x0010)  
	FString                                            fr_ca;                                                      // 0x01F0   (0x0010)  
	FString                                            es_mx;                                                      // 0x0200   (0x0010)  
	FString                                            ukr;                                                        // 0x0210   (0x0010)  
	FString                                            bg;                                                         // 0x0220   (0x0010)  
	FString                                            el;                                                         // 0x0230   (0x0010)  
	FString                                            hu;                                                         // 0x0240   (0x0010)  
	FString                                            ro;                                                         // 0x0250   (0x0010)  
	FString                                            af;                                                         // 0x0260   (0x0010)  
	FString                                            AM;                                                         // 0x0270   (0x0010)  
	FString                                            an;                                                         // 0x0280   (0x0010)  
	FString                                            as_lang;                                                    // 0x0290   (0x0010)  
	FString                                            az;                                                         // 0x02A0   (0x0010)  
	FString                                            be;                                                         // 0x02B0   (0x0010)  
	FString                                            bh;                                                         // 0x02C0   (0x0010)  
	FString                                            br;                                                         // 0x02D0   (0x0010)  
	FString                                            bs;                                                         // 0x02E0   (0x0010)  
	FString                                            ca;                                                         // 0x02F0   (0x0010)  
	FString                                            ceb;                                                        // 0x0300   (0x0010)  
	FString                                            cy;                                                         // 0x0310   (0x0010)  
	FString                                            dv;                                                         // 0x0320   (0x0010)  
	FString                                            dz;                                                         // 0x0330   (0x0010)  
	FString                                            eo;                                                         // 0x0340   (0x0010)  
	FString                                            et;                                                         // 0x0350   (0x0010)  
	FString                                            eu;                                                         // 0x0360   (0x0010)  
	FString                                            fa;                                                         // 0x0370   (0x0010)  
	FString                                            fo;                                                         // 0x0380   (0x0010)  
	FString                                            fy;                                                         // 0x0390   (0x0010)  
	FString                                            ga;                                                         // 0x03A0   (0x0010)  
	FString                                            gd;                                                         // 0x03B0   (0x0010)  
	FString                                            gl;                                                         // 0x03C0   (0x0010)  
	FString                                            gn;                                                         // 0x03D0   (0x0010)  
	FString                                            gom;                                                        // 0x03E0   (0x0010)  
	FString                                            gu;                                                         // 0x03F0   (0x0010)  
	FString                                            gv;                                                         // 0x0400   (0x0010)  
	FString                                            he;                                                         // 0x0410   (0x0010)  
	FString                                            hi;                                                         // 0x0420   (0x0010)  
	FString                                            hr;                                                         // 0x0430   (0x0010)  
	FString                                            ht;                                                         // 0x0440   (0x0010)  
	FString                                            hy;                                                         // 0x0450   (0x0010)  
	FString                                            ia;                                                         // 0x0460   (0x0010)  
	FString                                            ie;                                                         // 0x0470   (0x0010)  
	FString                                            ilo;                                                        // 0x0480   (0x0010)  
	FString                                            IO;                                                         // 0x0490   (0x0010)  
	FString                                            is_lang;                                                    // 0x04A0   (0x0010)  
	FString                                            jv;                                                         // 0x04B0   (0x0010)  
	FString                                            ka;                                                         // 0x04C0   (0x0010)  
	FString                                            kk;                                                         // 0x04D0   (0x0010)  
	FString                                            kn;                                                         // 0x04E0   (0x0010)  
	FString                                            ku;                                                         // 0x04F0   (0x0010)  
	FString                                            kv;                                                         // 0x0500   (0x0010)  
	FString                                            kw;                                                         // 0x0510   (0x0010)  
	FString                                            ky;                                                         // 0x0520   (0x0010)  
	FString                                            la;                                                         // 0x0530   (0x0010)  
	FString                                            lb;                                                         // 0x0540   (0x0010)  
	FString                                            li;                                                         // 0x0550   (0x0010)  
	FString                                            lt;                                                         // 0x0560   (0x0010)  
	FString                                            lv;                                                         // 0x0570   (0x0010)  
	FString                                            mai;                                                        // 0x0580   (0x0010)  
	FString                                            mg;                                                         // 0x0590   (0x0010)  
	FString                                            mk;                                                         // 0x05A0   (0x0010)  
	FString                                            ml;                                                         // 0x05B0   (0x0010)  
	FString                                            mn;                                                         // 0x05C0   (0x0010)  
	FString                                            mr;                                                         // 0x05D0   (0x0010)  
	FString                                            mt;                                                         // 0x05E0   (0x0010)  
	FString                                            nb;                                                         // 0x05F0   (0x0010)  
	FString                                            ne;                                                         // 0x0600   (0x0010)  
	FString                                            nn;                                                         // 0x0610   (0x0010)  
	FString                                            oc;                                                         // 0x0620   (0x0010)  
	FString                                            or_lang;                                                    // 0x0630   (0x0010)  
	FString                                            Os;                                                         // 0x0640   (0x0010)  
	FString                                            pa;                                                         // 0x0650   (0x0010)  
	FString                                            PS;                                                         // 0x0660   (0x0010)  
	FString                                            qu;                                                         // 0x0670   (0x0010)  
	FString                                            rm;                                                         // 0x0680   (0x0010)  
	FString                                            rw;                                                         // 0x0690   (0x0010)  
	FString                                            sc;                                                         // 0x06A0   (0x0010)  
	FString                                            sd;                                                         // 0x06B0   (0x0010)  
	FString                                            sh;                                                         // 0x06C0   (0x0010)  
	FString                                            si;                                                         // 0x06D0   (0x0010)  
	FString                                            sk;                                                         // 0x06E0   (0x0010)  
	FString                                            sl;                                                         // 0x06F0   (0x0010)  
	FString                                            so;                                                         // 0x0700   (0x0010)  
	FString                                            sq;                                                         // 0x0710   (0x0010)  
	FString                                            sr;                                                         // 0x0720   (0x0010)  
	FString                                            su;                                                         // 0x0730   (0x0010)  
	FString                                            sw;                                                         // 0x0740   (0x0010)  
	FString                                            ta;                                                         // 0x0750   (0x0010)  
	FString                                            te;                                                         // 0x0760   (0x0010)  
	FString                                            tg;                                                         // 0x0770   (0x0010)  
	FString                                            tk;                                                         // 0x0780   (0x0010)  
	FString                                            tt;                                                         // 0x0790   (0x0010)  
	FString                                            ug;                                                         // 0x07A0   (0x0010)  
	FString                                            wa;                                                         // 0x07B0   (0x0010)  
	FString                                            xh;                                                         // 0x07C0   (0x0010)  
	FString                                            yi;                                                         // 0x07D0   (0x0010)  
	FString                                            yo;                                                         // 0x07E0   (0x0010)  
	FString                                            zu;                                                         // 0x07F0   (0x0010)  
	FString                                            ar_Latn;                                                    // 0x0800   (0x0010)  
	FString                                            zh_Latn;                                                    // 0x0810   (0x0010)  
	FString                                            mi;                                                         // 0x0820   (0x0010)  
	FString                                            ig;                                                         // 0x0830   (0x0010)  
	FString                                            ja_Latn;                                                    // 0x0840   (0x0010)  
	FString                                            hi_Latn;                                                    // 0x0850   (0x0010)  
	FString                                            bg_Latn;                                                    // 0x0860   (0x0010)  
	FString                                            ru_Latn;                                                    // 0x0870   (0x0010)  
	FString                                            nap;                                                        // 0x0880   (0x0010)  
	FString                                            ha;                                                         // 0x0890   (0x0010)  
	FString                                            haw;                                                        // 0x08A0   (0x0010)  
	FString                                            hmn;                                                        // 0x08B0   (0x0010)  
	FString                                            el_Latn;                                                    // 0x08C0   (0x0010)  
	FString                                            co;                                                         // 0x08D0   (0x0010)  
};

/// Struct /Script/INTLCore.INTLTranslatorResult
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
struct FINTLTranslatorResult : FINTLBaseResult
{ 
	FString                                            translatorResp;                                             // 0x0048   (0x0010)  
	FString                                            asrRsp;                                                     // 0x0058   (0x0010)  
};

/// Struct /Script/INTLCore.INTLTranslatorVoiceReq
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
struct FINTLTranslatorVoiceReq : FINTLBaseResult
{ 
	FString                                            voicePath;                                                  // 0x0048   (0x0010)  
	FString                                            gameCode;                                                   // 0x0058   (0x0010)  
	FString                                            gameLanguage;                                               // 0x0068   (0x0010)  
	FString                                            extInfo;                                                    // 0x0078   (0x0010)  
};

/// Struct /Script/INTLCore.INTLTranslatorReq
/// Size: 0x00D0 (208 bytes) (0x000048 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FINTLTranslatorReq : FINTLBaseResult
{ 
	FString                                            srcLang;                                                    // 0x0048   (0x0010)  
	FString                                            targetLang;                                                 // 0x0058   (0x0010)  
	FString                                            translateTexts;                                             // 0x0068   (0x0010)  
	FString                                            topic;                                                      // 0x0078   (0x0010)  
	FString                                            pastConversation;                                           // 0x0088   (0x0010)  
	FString                                            remark;                                                     // 0x0098   (0x0010)  
	bool                                               noCache;                                                    // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FString                                            gameCode;                                                   // 0x00B0   (0x0010)  
	FString                                            extInfo;                                                    // 0x00C0   (0x0010)  
};

/// Struct /Script/INTLCore.INTLAdjustAttrsChangedResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLAdjustAttrsChangedResult : FINTLBaseResult
{ 
	FString                                            AdjustAttribution;                                          // 0x0048   (0x0010)  
};

/// Struct /Script/INTLCore.INTLTabExpEntity
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 8 MaxSize: 0x0120
struct FINTLTabExpEntity
{ 
	FString                                            ExpName;                                                    // 0x0000   (0x0010)  
	FString                                            Assignment;                                                 // 0x0010   (0x0010)  
	FString                                            ExpGrayId;                                                  // 0x0020   (0x0010)  
	FString                                            LayerName;                                                  // 0x0030   (0x0010)  
	TMap<FString, FString>                             ExpParams;                                                  // 0x0040   (0x0050)  
	int32_t                                            ExpId;                                                      // 0x0090   (0x0004)  
	int32_t                                            Bucket;                                                     // 0x0094   (0x0004)  
	int32_t                                            ModuleBucketNum;                                            // 0x0098   (0x0004)  
	float                                              Percentage;                                                 // 0x009C   (0x0004)  
	FString                                            ExpKey;                                                     // 0x00A0   (0x0010)  
	FString                                            ExpGroupKey;                                                // 0x00B0   (0x0010)  
	FString                                            ModuleCode;                                                 // 0x00C0   (0x0010)  
	TMap<FString, FString>                             Params;                                                     // 0x00D0   (0x0050)  
};

/// Struct /Script/INTLCore.INTLRewardItem
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FINTLRewardItem
{ 
	FString                                            desc;                                                       // 0x0000   (0x0010)  
	FString                                            icon;                                                       // 0x0010   (0x0010)  
	int32_t                                            ID;                                                         // 0x0020   (0x0004)  
	int32_t                                            Num;                                                        // 0x0024   (0x0004)  
};

/// Struct /Script/INTLCore.INTLEventsInfoItem
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FINTLEventsInfoItem
{ 
	char                                               CanSend;                                                    // 0x0000   (0x0001)  
	char                                               IsSent;                                                     // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            Image;                                                      // 0x0008   (0x0010)  
	FString                                            Content;                                                    // 0x0018   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FINTLRewardItem>                            rewards;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/INTLCore.INTLLIBindRewardResult
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
struct FINTLLIBindRewardResult : FINTLBaseResult
{ 
	FString                                            Image;                                                      // 0x0048   (0x0010)  
	FString                                            Content;                                                    // 0x0058   (0x0010)  
	int32_t                                            CanSend;                                                    // 0x0068   (0x0004)  
	int32_t                                            IsSent;                                                     // 0x006C   (0x0004)  
	bool                                               FromNetwork;                                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            eventId;                                                    // 0x0074   (0x0004)  
	TArray<FINTLEventsInfoItem>                        Events;                                                     // 0x0078   (0x0010)  
};

/// Struct /Script/INTLCore.INTLPermissionResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLPermissionResult : FINTLBaseResult
{ 
	FString                                            permission_json_;                                           // 0x0048   (0x0010)  
};

/// Struct /Script/INTLCore.CutoutRect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FCutoutRect
{ 
	int32_t                                            Top;                                                        // 0x0000   (0x0004)  
	int32_t                                            Bottom;                                                     // 0x0004   (0x0004)  
	int32_t                                            Left;                                                       // 0x0008   (0x0004)  
	int32_t                                            Right;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/INTLCore.CutoutInfoResult
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
struct FCutoutInfoResult : FINTLBaseResult
{ 
	bool                                               HasCutout;                                                  // 0x0048   (0x0001)  
	bool                                               IsCutoutHidden;                                             // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            ScreenHeight;                                               // 0x004C   (0x0004)  
	int32_t                                            ScreenWidth;                                                // 0x0050   (0x0004)  
	int32_t                                            StatusBarHeight;                                            // 0x0054   (0x0004)  
	TArray<FCutoutRect>                                CutoutRects;                                                // 0x0058   (0x0010)  
	FCutoutRect                                        SafeArea;                                                   // 0x0068   (0x0010)  
};

/// Struct /Script/INTLCore.INTLExtendResult
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
struct FINTLExtendResult : FINTLBaseResult
{ 
	SDK_UNDEFINED(1,4982) /* EINTLLoginChannel */      __um(Channel);                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FString                                            ExtendMethodName;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/INTLCore.INTLDNSResult
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
struct FINTLDNSResult : FINTLBaseResult
{ 
	FString                                            V4;                                                         // 0x0048   (0x0010)  
	FString                                            V6;                                                         // 0x0058   (0x0010)  
	FString                                            Host;                                                       // 0x0068   (0x0010)  
};

/// Struct /Script/INTLCore.INTLToolsResult
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
struct FINTLToolsResult : FINTLBaseResult
{ 
	FString                                            DeepLinkUrl;                                                // 0x0048   (0x0010)  
	FString                                            ShortLinkUrl;                                               // 0x0058   (0x0010)  
};

/// Struct /Script/INTLCore.INTLStartUdpSocketResult
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
struct FINTLStartUdpSocketResult : FINTLBaseResult
{ 
	FString                                            Ip;                                                         // 0x0048   (0x0010)  
	int32_t                                            Net_delay;                                                  // 0x0058   (0x0004)  
	int32_t                                            Port;                                                       // 0x005C   (0x0004)  
};

/// Struct /Script/INTLCore.INTLDetectNetworkResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLDetectNetworkResult : FINTLBaseResult
{ 
	float                                              LocalRouterTime;                                            // 0x0048   (0x0004)  
	float                                              InternetRouterTime;                                         // 0x004C   (0x0004)  
	int32_t                                            InternetDelay;                                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLLBSIPInfoResult
/// Size: 0x0070 (112 bytes) (0x000048 - 0x000070) align 8 MaxSize: 0x0070
struct FINTLLBSIPInfoResult : FINTLBaseResult
{ 
	FString                                            Region;                                                     // 0x0048   (0x0010)  
	FString                                            Alpha2;                                                     // 0x0058   (0x0010)  
	int32_t                                            Timestamp;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLDirTreeNode
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FINTLDirTreeNode
{ 
	int32_t                                            NodeId;                                                     // 0x0000   (0x0004)  
	int32_t                                            ParentID;                                                   // 0x0004   (0x0004)  
	bool                                               IsLeaf;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            URL;                                                        // 0x0020   (0x0010)  
	int32_t                                            status;                                                     // 0x0030   (0x0004)  
	int32_t                                            Tag;                                                        // 0x0034   (0x0004)  
	int32_t                                            CustomInt1;                                                 // 0x0038   (0x0004)  
	int32_t                                            CustomInt2;                                                 // 0x003C   (0x0004)  
	FString                                            CustomStr;                                                  // 0x0040   (0x0010)  
	TArray<int32_t>                                    ChildrenIdSet;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/INTLCore.INTLDirTreeResult
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
struct FINTLDirTreeResult : FINTLBaseResult
{ 
	int32_t                                            TreeId;                                                     // 0x0048   (0x0004)  
	int32_t                                            NodeId;                                                     // 0x004C   (0x0004)  
	FString                                            TreeInfo;                                                   // 0x0050   (0x0010)  
	FString                                            RoleInfo;                                                   // 0x0060   (0x0010)  
	int32_t                                            ExpireTime;                                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLUpdateOptionalRepoFilesStatus
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FINTLUpdateOptionalRepoFilesStatus
{ 
	FString                                            FilePath;                                                   // 0x0000   (0x0010)  
	int32_t                                            TotalFileNum;                                               // 0x0010   (0x0004)  
	int32_t                                            ValidFileNum;                                               // 0x0014   (0x0004)  
	FString                                            NeedDownloadSize;                                           // 0x0018   (0x0010)  
};

/// Struct /Script/INTLCore.INTLUpdateInitInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FINTLUpdateInitInfo
{ 
	SDK_UNDEFINED(1,4983) /* EINTLUpdateActionType */  __um(ActionType);                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            RepoID;                                                     // 0x0004   (0x0004)  
	int32_t                                            ResourceCopyType;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ResourceSavePath;                                           // 0x0010   (0x0010)  
	FString                                            FirstResourceDirPath;                                       // 0x0020   (0x0010)  
};

/// Struct /Script/INTLCore.INTLUpdateOptionalRepoInitResult
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
struct FINTLUpdateOptionalRepoInitResult : FINTLBaseResult
{ 
	SDK_UNDEFINED(1,4984) /* EINTLUpdateActionType */  __um(ActionType);                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            RepoID;                                                     // 0x004C   (0x0004)  
};

/// Struct /Script/INTLCore.INTLUpdateResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLUpdateResult : FINTLBaseResult
{ 
	SDK_UNDEFINED(1,4985) /* EINTLUpdateActionType */  __um(ActionType);                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            RepoID;                                                     // 0x004C   (0x0004)  
	int32_t                                            TaskId;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLUpdateProgress
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FINTLUpdateProgress
{ 
	int32_t                                            methodId;                                                   // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,4986) /* EINTLUpdateActionType */  __um(ActionType);                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            UpdateStep;                                                 // 0x0008   (0x0004)  
	int32_t                                            RepoID;                                                     // 0x000C   (0x0004)  
	int32_t                                            TaskId;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            FinishedSize;                                               // 0x0018   (0x0010)  
	FString                                            TotalSize;                                                  // 0x0028   (0x0010)  
	FString                                            Speed;                                                      // 0x0038   (0x0010)  
	int32_t                                            RemainTime;                                                 // 0x0048   (0x0004)  
	float                                              StepProgress;                                               // 0x004C   (0x0004)  
	float                                              TotalProgress;                                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            ErrorMsg;                                                   // 0x0058   (0x0010)  
};

/// Struct /Script/INTLCore.INTLUpdateStartRepoNewVersionInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FINTLUpdateStartRepoNewVersionInfo
{ 
	int32_t                                            methodId;                                                   // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,4987) /* EINTLUpdateActionType */  __um(ActionType);                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            NewVersionType;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Version;                                                    // 0x0010   (0x0010)  
	FString                                            NeedDownloadSize;                                           // 0x0020   (0x0010)  
	FString                                            GameDefinedStr;                                             // 0x0030   (0x0010)  
};

/// Struct /Script/INTLCore.INTLCustomerUserProfile
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 8 MaxSize: 0x0100
struct FINTLCustomerUserProfile
{ 
	FString                                            LangType;                                                   // 0x0000   (0x0010)  
	FString                                            Sign;                                                       // 0x0010   (0x0010)  
	FString                                            Openid;                                                     // 0x0020   (0x0010)  
	FString                                            GameLevel;                                                  // 0x0030   (0x0010)  
	FString                                            NickName;                                                   // 0x0040   (0x0010)  
	FString                                            RoleId;                                                     // 0x0050   (0x0010)  
	FString                                            AreaID;                                                     // 0x0060   (0x0010)  
	FString                                            ZoneId;                                                     // 0x0070   (0x0010)  
	FString                                            GameSvrId;                                                  // 0x0080   (0x0010)  
	FString                                            Region;                                                     // 0x0090   (0x0010)  
	FString                                            PictureUrl;                                                 // 0x00A0   (0x0010)  
	FString                                            CustomParam1;                                               // 0x00B0   (0x0010)  
	FString                                            CustomParam2;                                               // 0x00C0   (0x0010)  
	FString                                            CustomParam3;                                               // 0x00D0   (0x0010)  
	FString                                            CustomParam4;                                               // 0x00E0   (0x0010)  
	FString                                            CustomParam5;                                               // 0x00F0   (0x0010)  
};

/// Struct /Script/INTLCore.INTLCustomerResult
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
struct FINTLCustomerResult : FINTLBaseResult
{ 
	int32_t                                            MsgType;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLComplianceResult
/// Size: 0x0218 (536 bytes) (0x000048 - 0x000218) align 8 MaxSize: 0x0218
struct FINTLComplianceResult : FINTLBaseResult
{ 
	int32_t                                            AdultStatus;                                                // 0x0048   (0x0004)  
	int32_t                                            ParentCertificateStatus;                                    // 0x004C   (0x0004)  
	FString                                            ParentCertificateStatusExpiration;                          // 0x0050   (0x0010)  
	int32_t                                            EUUserAgreeStatus;                                          // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FString                                            CountryCode;                                                // 0x0068   (0x0010)  
	int32_t                                            AdultAge;                                                   // 0x0078   (0x0004)  
	int32_t                                            GameGrade;                                                  // 0x007C   (0x0004)  
	int32_t                                            CertificateType;                                            // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FString                                            AdultStatusExpiration;                                      // 0x0088   (0x0010)  
	FString                                            TS;                                                         // 0x0098   (0x0010)  
	bool                                               IsEEA;                                                      // 0x00A8   (0x0001)  
	bool                                               IsDMA;                                                      // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FString                                            Region;                                                     // 0x00B0   (0x0010)  
	FString                                            Email;                                                      // 0x00C0   (0x0010)  
	int32_t                                            RealNameAuthStatus;                                         // 0x00D0   (0x0004)  
	int32_t                                            NeedRealNameAuth;                                           // 0x00D4   (0x0004)  
	bool                                               NeedLICertification;                                        // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FString                                            AdultAgeMap;                                                // 0x00E0   (0x0010)  
	FString                                            GameGradeMap;                                               // 0x00F0   (0x0010)  
	int32_t                                            NeedVoiceControl;                                           // 0x0100   (0x0004)  
	int32_t                                            VoiceControlStatus;                                         // 0x0104   (0x0004)  
	int32_t                                            NeedVoiceControlIngame;                                     // 0x0108   (0x0004)  
	int32_t                                            NeedVoiceControlParentCert;                                 // 0x010C   (0x0004)  
	int32_t                                            UiType;                                                     // 0x0110   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<int32_t>                                    AgeRange;                                                   // 0x0118   (0x0010)  
	int32_t                                            AgeMin;                                                     // 0x0128   (0x0004)  
	int32_t                                            AgeMax;                                                     // 0x012C   (0x0004)  
	int32_t                                            NeedRealNameVerification;                                   // 0x0130   (0x0004)  
	int32_t                                            RealNameAuthType;                                           // 0x0134   (0x0004)  
	int32_t                                            NeedAdultVerification;                                      // 0x0138   (0x0004)  
	int32_t                                            AdultVerificationStatus;                                    // 0x013C   (0x0004)  
	int32_t                                            AdultVerificationType;                                      // 0x0140   (0x0004)  
	int32_t                                            NeedParentAdultVerification;                                // 0x0144   (0x0004)  
	int32_t                                            ParentAdultVerificationStatus;                              // 0x0148   (0x0004)  
	int32_t                                            ParentAdultVerificationType;                                // 0x014C   (0x0004)  
	int32_t                                            NeedLbsControl;                                             // 0x0150   (0x0004)  
	int32_t                                            NeedLbsControlIngame;                                       // 0x0154   (0x0004)  
	int32_t                                            NeedLbsControlParentCert;                                   // 0x0158   (0x0004)  
	int32_t                                            LbsControlStatus;                                           // 0x015C   (0x0004)  
	int32_t                                            NeedUserPayment;                                            // 0x0160   (0x0004)  
	int32_t                                            NeedPersonalReco;                                           // 0x0164   (0x0004)  
	int32_t                                            ShareUserDataStatus;                                        // 0x0168   (0x0004)  
	int32_t                                            UseSocialFunctionStatus;                                    // 0x016C   (0x0004)  
	int32_t                                            ParticipateSurveyStatus;                                    // 0x0170   (0x0004)  
	int32_t                                            UserDataUsedForAiStatus;                                    // 0x0174   (0x0004)  
	int32_t                                            ReceiveMarketingEmailStatus;                                // 0x0178   (0x0004)  
	int32_t                                            UserPaymentStatus;                                          // 0x017C   (0x0004)  
	int32_t                                            PersonalRecoStatus;                                         // 0x0180   (0x0004)  
	int32_t                                            NeedTimeLimit;                                              // 0x0184   (0x0004)  
	int32_t                                            WeekendTimeLimit;                                           // 0x0188   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	FString                                            WeekendTimeStart;                                           // 0x0190   (0x0010)  
	FString                                            WeekendTimeEnd;                                             // 0x01A0   (0x0010)  
	int32_t                                            WeekdayTimeLimit;                                           // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	FString                                            WeekdayTimeStart;                                           // 0x01B8   (0x0010)  
	FString                                            WeekdayTimeEnd;                                             // 0x01C8   (0x0010)  
	FString                                            TimeLimitTimeZone;                                          // 0x01D8   (0x0010)  
	bool                                               TimeLimitEnable;                                            // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x01E9   (0x0007)  MISSED
	FString                                            UidStatus;                                                  // 0x01F0   (0x0010)  
	FString                                            UidStatusMsg;                                               // 0x0200   (0x0010)  
	int32_t                                            UidStatusRet;                                               // 0x0210   (0x0004)  
	unsigned char                                      UnknownData08_7[0x4];                                       // 0x0214   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLWebViewResult
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
struct FINTLWebViewResult : FINTLBaseResult
{ 
	int32_t                                            MsgType;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            MsgJsonData;                                                // 0x0050   (0x0010)  
};

/// Struct /Script/INTLCore.INTLPushResult
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
struct FINTLPushResult : FINTLBaseResult
{ 
	int32_t                                            Type;                                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            Notification;                                               // 0x0050   (0x0010)  
};

/// Struct /Script/INTLCore.INTLLocalNotificationIOS
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FINTLLocalNotificationIOS
{ 
	int32_t                                            RepeatType;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AlertTitle;                                                 // 0x0008   (0x0010)  
	int32_t                                            FireTime;                                                   // 0x0018   (0x0004)  
	int32_t                                            Badge;                                                      // 0x001C   (0x0004)  
	FString                                            AlertBody;                                                  // 0x0020   (0x0010)  
	FString                                            AlertAction;                                                // 0x0030   (0x0010)  
	FString                                            NotificationID;                                             // 0x0040   (0x0010)  
	TMap<FString, FString>                             UserInfo;                                                   // 0x0050   (0x0050)  
};

/// Struct /Script/INTLCore.INTLLocalNotification
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FINTLLocalNotification
{ 
	int32_t                                            NotificationID;                                             // 0x0000   (0x0004)  
	int32_t                                            ActionType;                                                 // 0x0004   (0x0004)  
	int32_t                                            SoundEnabled;                                               // 0x0008   (0x0004)  
	int32_t                                            Lights;                                                     // 0x000C   (0x0004)  
	int32_t                                            Vibrate;                                                    // 0x0010   (0x0004)  
	int32_t                                            FireTime;                                                   // 0x0014   (0x0004)  
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Content;                                                    // 0x0028   (0x0010)  
	FString                                            TickerText;                                                 // 0x0038   (0x0010)  
	FString                                            ActionParameter;                                            // 0x0048   (0x0010)  
	FString                                            RingUri;                                                    // 0x0058   (0x0010)  
	FString                                            SmallIcon;                                                  // 0x0068   (0x0010)  
};

/// Struct /Script/INTLCore.INTLFriendReqInfo
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FINTLFriendReqInfo
{ 
	int32_t                                            Type;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            User;                                                       // 0x0008   (0x0010)  
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Description;                                                // 0x0028   (0x0010)  
	FString                                            ImagePath;                                                  // 0x0038   (0x0010)  
	FString                                            ThumbPath;                                                  // 0x0048   (0x0010)  
	FString                                            MediaPath;                                                  // 0x0058   (0x0010)  
	FString                                            Link;                                                       // 0x0068   (0x0010)  
	FString                                            extraJson;                                                  // 0x0078   (0x0010)  
};

/// Struct /Script/INTLCore.INTLPersonInfo
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FINTLPersonInfo
{ 
	FString                                            Openid;                                                     // 0x0000   (0x0010)  
	FString                                            userName;                                                   // 0x0010   (0x0010)  
	int32_t                                            Gender;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            PictureUrl;                                                 // 0x0028   (0x0010)  
	FString                                            Country;                                                    // 0x0038   (0x0010)  
	FString                                            Province;                                                   // 0x0048   (0x0010)  
	FString                                            City;                                                       // 0x0058   (0x0010)  
	FString                                            Language;                                                   // 0x0068   (0x0010)  
	FString                                            extraJson;                                                  // 0x0078   (0x0010)  
};

/// Struct /Script/INTLCore.INTLFriendResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLFriendResult : FINTLBaseResult
{ 
	TArray<FINTLPersonInfo>                            friendInfoList;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/INTLCore.INTLNoticePicture
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FINTLNoticePicture
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
	FString                                            Hash;                                                       // 0x0010   (0x0010)  
	FString                                            RedirectURL;                                                // 0x0020   (0x0010)  
	FString                                            ExtraData;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/INTLCore.INTLNoticeContent
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FINTLNoticeContent
{ 
	int32_t                                            ContentId;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AppContentId;                                               // 0x0008   (0x0010)  
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Content;                                                    // 0x0028   (0x0010)  
	FString                                            LangType;                                                   // 0x0038   (0x0010)  
	int32_t                                            UpdateTime;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            ExtraData;                                                  // 0x0050   (0x0010)  
	TArray<FINTLNoticePicture>                         PictureList;                                                // 0x0060   (0x0010)  
};

/// Struct /Script/INTLCore.INTLNoticeInfo
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FINTLNoticeInfo
{ 
	int32_t                                            NoticeID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AppID;                                                      // 0x0008   (0x0010)  
	FString                                            AppNoticeId;                                                // 0x0018   (0x0010)  
	int32_t                                            status;                                                     // 0x0028   (0x0004)  
	int32_t                                            StartTime;                                                  // 0x002C   (0x0004)  
	int32_t                                            EndTime;                                                    // 0x0030   (0x0004)  
	int32_t                                            UpdateTime;                                                 // 0x0034   (0x0004)  
	FString                                            AreaList;                                                   // 0x0038   (0x0010)  
	TArray<FINTLNoticePicture>                         PictureList;                                                // 0x0048   (0x0010)  
	FString                                            ExtraData;                                                  // 0x0058   (0x0010)  
	TArray<FINTLNoticeContent>                         ContentList;                                                // 0x0068   (0x0010)  
};

/// Struct /Script/INTLCore.INTLNoticeResult
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
struct FINTLNoticeResult : FINTLBaseResult
{ 
	FString                                            SeqId;                                                      // 0x0048   (0x0010)  
	TArray<FINTLNoticeInfo>                            NoticeInfoList;                                             // 0x0058   (0x0010)  
};

/// Struct /Script/INTLCore.INTLAccountProfile
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FINTLAccountProfile
{ 
	FString                                            userName;                                                   // 0x0000   (0x0010)  
	FString                                            Birthday;                                                   // 0x0010   (0x0010)  
	int32_t                                            BirthdayYear;                                               // 0x0020   (0x0004)  
	int32_t                                            BirthdayMonth;                                              // 0x0024   (0x0004)  
	int32_t                                            BirthdayDay;                                                // 0x0028   (0x0004)  
	int32_t                                            isReceiveEmail;                                             // 0x002C   (0x0004)  
	FString                                            Region;                                                     // 0x0030   (0x0010)  
	FString                                            LangType;                                                   // 0x0040   (0x0010)  
	FString                                            AvatarName;                                                 // 0x0050   (0x0010)  
	FString                                            extraJson;                                                  // 0x0060   (0x0010)  
	FString                                            Email;                                                      // 0x0070   (0x0010)  
	FString                                            Phone;                                                      // 0x0080   (0x0010)  
	FString                                            PhoneAreaCode;                                              // 0x0090   (0x0010)  
	int32_t                                            AccountType;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FString                                            NickName;                                                   // 0x00A8   (0x0010)  
	FString                                            PrivacyPolicy;                                              // 0x00B8   (0x0010)  
	FString                                            TermsOfService;                                             // 0x00C8   (0x0010)  
	int32_t                                            PrivacyUpdateTime;                                          // 0x00D8   (0x0004)  
	int32_t                                            TermsUpdateTime;                                            // 0x00DC   (0x0004)  
	int32_t                                            UsernamePassVerify;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLAccountResult
/// Size: 0x0300 (768 bytes) (0x000048 - 0x000300) align 8 MaxSize: 0x0300
struct FINTLAccountResult : FINTLBaseResult
{ 
	int32_t                                            ChannelID;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            Channel;                                                    // 0x0050   (0x0010)  
	FString                                            SeqId;                                                      // 0x0060   (0x0010)  
	FString                                            userName;                                                   // 0x0070   (0x0010)  
	FString                                            uid;                                                        // 0x0080   (0x0010)  
	FString                                            Token;                                                      // 0x0090   (0x0010)  
	int32_t                                            ExpireTime;                                                 // 0x00A0   (0x0004)  
	int32_t                                            isRegister;                                                 // 0x00A4   (0x0004)  
	int32_t                                            isSetPassword;                                              // 0x00A8   (0x0004)  
	int32_t                                            isReceiveEmail;                                             // 0x00AC   (0x0004)  
	int32_t                                            VerifyCodeExpireTime;                                       // 0x00B0   (0x0004)  
	bool                                               RequestIsLogin;                                             // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	int32_t                                            CanBind;                                                    // 0x00B8   (0x0004)  
	int32_t                                            LoginDays;                                                  // 0x00BC   (0x0004)  
	FString                                            PpAcceptanceVersion;                                        // 0x00C0   (0x0010)  
	FString                                            TosAcceptanceVersion;                                       // 0x00D0   (0x0010)  
	FDateTime                                          PpAcceptanceTime;                                           // 0x00E0   (0x0008)  
	FDateTime                                          TosAcceptanceTime;                                          // 0x00E8   (0x0008)  
	FINTLAccountProfile                                Profile;                                                    // 0x00F0   (0x00E8)  
	int32_t                                            IsUserNameAvailable;                                        // 0x01D8   (0x0004)  
	bool                                               HasGameSaccUid;                                             // 0x01DC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x01DD   (0x0003)  MISSED
	FString                                            GameSaccUid;                                                // 0x01E0   (0x0010)  
	bool                                               HasGameSaccOpenId;                                          // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FString                                            GameSaccOpenId;                                             // 0x01F8   (0x0010)  
	bool                                               HasLiUid;                                                   // 0x0208   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0209   (0x0007)  MISSED
	FString                                            LiUid;                                                      // 0x0210   (0x0010)  
	bool                                               HasLiOpenId;                                                // 0x0220   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	FString                                            LiOpenId;                                                   // 0x0228   (0x0010)  
	bool                                               NeedNotify;                                                 // 0x0238   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0239   (0x0007)  MISSED
	FString                                            UserAgreedGameTos;                                          // 0x0240   (0x0010)  
	FString                                            UserAgreedGamePP;                                           // 0x0250   (0x0010)  
	FString                                            UserAgreedLiPP;                                             // 0x0260   (0x0010)  
	FString                                            UserAgreedLiDt;                                             // 0x0270   (0x0010)  
	FString                                            UserAgreedLiTos;                                            // 0x0280   (0x0010)  
	FString                                            UserAgreedGameDMA;                                          // 0x0290   (0x0010)  
	FString                                            UserAgreedReceiveEmailNight;                                // 0x02A0   (0x0010)  
	FString                                            AvatarInfo;                                                 // 0x02B0   (0x0010)  
	FString                                            avatarUrl;                                                  // 0x02C0   (0x0010)  
	FString                                            AvatarName;                                                 // 0x02D0   (0x0010)  
	FString                                            ComplianceStatusInfo;                                       // 0x02E0   (0x0010)  
	FString                                            PointsInfo;                                                 // 0x02F0   (0x0010)  
};

/// Struct /Script/INTLCore.INTLDeviceLevelResult
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
struct FINTLDeviceLevelResult : FINTLBaseResult
{ 
	int32_t                                            DeviceLevel;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLIDTokenResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLIDTokenResult : FINTLBaseResult
{ 
	FString                                            IdToken;                                                    // 0x0048   (0x0010)  
};

/// Struct /Script/INTLCore.INTLAuthResult
/// Size: 0x01B8 (440 bytes) (0x000048 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FINTLAuthResult : FINTLBaseResult
{ 
	FString                                            Openid;                                                     // 0x0048   (0x0010)  
	FString                                            Token;                                                      // 0x0058   (0x0010)  
	FString                                            LinkLIUid;                                                  // 0x0068   (0x0010)  
	FString                                            LinkLIToken;                                                // 0x0078   (0x0010)  
	int32_t                                            TokenExpireTime;                                            // 0x0088   (0x0004)  
	int32_t                                            FirstLogin;                                                 // 0x008C   (0x0004)  
	FString                                            RegChannelDis;                                              // 0x0090   (0x0010)  
	FString                                            userName;                                                   // 0x00A0   (0x0010)  
	int32_t                                            Gender;                                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FString                                            Birthday;                                                   // 0x00B8   (0x0010)  
	FString                                            PicUrl;                                                     // 0x00C8   (0x0010)  
	FString                                            Pf;                                                         // 0x00D8   (0x0010)  
	FString                                            PfKey;                                                      // 0x00E8   (0x0010)  
	bool                                               NeedRealNameAuth;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	int32_t                                            ChannelID;                                                  // 0x00FC   (0x0004)  
	SDK_UNDEFINED(1,4988) /* EINTLLoginChannel */      __um(ChannelName);                                          // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0101   (0x0007)  MISSED
	FString                                            ChannelInfo;                                                // 0x0108   (0x0010)  
	FString                                            ConfirmCode;                                                // 0x0118   (0x0010)  
	int32_t                                            ConfirmCodeExpireTime;                                      // 0x0128   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FString                                            BindList;                                                   // 0x0130   (0x0010)  
	FString                                            LegalDocumentsAcceptedVersion;                              // 0x0140   (0x0010)  
	int32_t                                            DeleteAccountStatus;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FString                                            DeleteAccountInfo;                                          // 0x0158   (0x0010)  
	int32_t                                            DeleteLIAccountStatus;                                      // 0x0168   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x016C   (0x0004)  MISSED
	FString                                            TransferCode;                                               // 0x0170   (0x0010)  
	int32_t                                            TransferCodeExpireTime;                                     // 0x0180   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x0184   (0x0004)  MISSED
	FString                                            Email;                                                      // 0x0188   (0x0010)  
	FString                                            OauthCode;                                                  // 0x0198   (0x0010)  
	int32_t                                            UserStatus;                                                 // 0x01A8   (0x0004)  
	int32_t                                            HealthScore;                                                // 0x01AC   (0x0004)  
	int32_t                                            HealthScoreRet;                                             // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData07_7[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLPassKeyResultItem
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FINTLPassKeyResultItem
{ 
	FString                                            Brand;                                                      // 0x0000   (0x0010)  
	FString                                            Model;                                                      // 0x0010   (0x0010)  
	FString                                            CreateTime;                                                 // 0x0020   (0x0010)  
	FString                                            CredentialId;                                               // 0x0030   (0x0010)  
	FString                                            LastUseTime;                                                // 0x0040   (0x0010)  
};

/// Struct /Script/INTLCore.INTLAllPassKeyResult
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
struct FINTLAllPassKeyResult : FINTLBaseResult
{ 
	TArray<FINTLPassKeyResultItem>                     PassKeys;                                                   // 0x0048   (0x0010)  
};

/// Struct /Script/INTLCore.INTLMessageResult
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
struct FINTLMessageResult : FINTLBaseResult
{ 
	FString                                            URL;                                                        // 0x0048   (0x0010)  
	int32_t                                            status;                                                     // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            Msg;                                                        // 0x0060   (0x0010)  
	int32_t                                            code;                                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLWebSocketResult
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
struct FINTLWebSocketResult : FINTLBaseResult
{ 
	FString                                            URL;                                                        // 0x0048   (0x0010)  
	int32_t                                            status;                                                     // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            headers;                                                    // 0x0060   (0x0010)  
	FString                                            Payload;                                                    // 0x0070   (0x0010)  
	int32_t                                            code;                                                       // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/INTLCore.INTLGroupReqInfo
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
struct FINTLGroupReqInfo : FINTLBaseResult
{ 
	FString                                            worldId;                                                    // 0x0048   (0x0010)  
	FString                                            guildId;                                                    // 0x0058   (0x0010)  
};

/// Struct /Script/INTLCore.INTLDeleteAccountParams
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FINTLDeleteAccountParams
{ 
	int32_t                                            AreaID;                                                     // 0x0000   (0x0004)  
	int32_t                                            ZoneId;                                                     // 0x0004   (0x0004)  
	bool                                               AllowDeletion;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UINTLBaseUserWidget) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UINTLOutputUtility) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UINTLPluginObserver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UINTLSDKAPI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UINTLUtility) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FINTLBaseResult) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FINTLAchievementInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FINTLAchievementResult) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(FINTLParentalGuidanceResult) == 0x0098); // 152 bytes (0x000048 - 0x000098)
static_assert(sizeof(FINTLQRCodeResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLRichPresence) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FINTLDiscordUserInfo) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(FINTLDiscordUserResult) == 0x0160); // 352 bytes (0x000048 - 0x000160)
static_assert(sizeof(FINTLDiscordMessageResult) == 0x02B0); // 688 bytes (0x000048 - 0x0002B0)
static_assert(sizeof(FINTLDiscordInviteResult) == 0x0178); // 376 bytes (0x000048 - 0x000178)
static_assert(sizeof(FINTLDiscordFriendResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLTranslatorLang) == 0x08E0); // 2272 bytes (0x000000 - 0x0008E0)
static_assert(sizeof(FINTLTranslatorResult) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(FINTLTranslatorVoiceReq) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(FINTLTranslatorReq) == 0x00D0); // 208 bytes (0x000048 - 0x0000D0)
static_assert(sizeof(FINTLAdjustAttrsChangedResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLTabExpEntity) == 0x0120); // 288 bytes (0x000000 - 0x000120)
static_assert(sizeof(FINTLRewardItem) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FINTLEventsInfoItem) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FINTLLIBindRewardResult) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(FINTLPermissionResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FCutoutRect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCutoutInfoResult) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(FINTLExtendResult) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(FINTLDNSResult) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(FINTLToolsResult) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(FINTLStartUdpSocketResult) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(FINTLDetectNetworkResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLLBSIPInfoResult) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(FINTLDirTreeNode) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FINTLDirTreeResult) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(FINTLUpdateOptionalRepoFilesStatus) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FINTLUpdateInitInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FINTLUpdateOptionalRepoInitResult) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FINTLUpdateResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLUpdateProgress) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FINTLUpdateStartRepoNewVersionInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FINTLCustomerUserProfile) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FINTLCustomerResult) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FINTLComplianceResult) == 0x0218); // 536 bytes (0x000048 - 0x000218)
static_assert(sizeof(FINTLWebViewResult) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(FINTLPushResult) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(FINTLLocalNotificationIOS) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FINTLLocalNotification) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FINTLFriendReqInfo) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FINTLPersonInfo) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FINTLFriendResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLNoticePicture) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FINTLNoticeContent) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FINTLNoticeInfo) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FINTLNoticeResult) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(FINTLAccountProfile) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(FINTLAccountResult) == 0x0300); // 768 bytes (0x000048 - 0x000300)
static_assert(sizeof(FINTLDeviceLevelResult) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FINTLIDTokenResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLAuthResult) == 0x01B8); // 440 bytes (0x000048 - 0x0001B8)
static_assert(sizeof(FINTLPassKeyResultItem) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FINTLAllPassKeyResult) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FINTLMessageResult) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(FINTLWebSocketResult) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(FINTLGroupReqInfo) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(FINTLDeleteAccountParams) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(FINTLBaseResult, RetMsg) == 0x0010);
static_assert(offsetof(FINTLBaseResult, ThirdMsg) == 0x0028);
static_assert(offsetof(FINTLBaseResult, extraJson) == 0x0038);
static_assert(offsetof(FINTLAchievementInfo, AchievementID) == 0x0000);
static_assert(offsetof(FINTLAchievementInfo, Name) == 0x0010);
static_assert(offsetof(FINTLAchievementInfo, Description) == 0x0020);
static_assert(offsetof(FINTLAchievementInfo, PlatformData) == 0x0040);
static_assert(offsetof(FINTLAchievementInfo, ExtraData) == 0x0050);
static_assert(offsetof(FINTLAchievementResult, SeqId) == 0x0048);
static_assert(offsetof(FINTLAchievementResult, Platform) == 0x0058);
static_assert(offsetof(FINTLAchievementResult, AchievementList) == 0x0068);
static_assert(offsetof(FINTLParentalGuidanceResult, TimeLimitStart) == 0x0048);
static_assert(offsetof(FINTLParentalGuidanceResult, TimeLimitEnd) == 0x0058);
static_assert(offsetof(FINTLParentalGuidanceResult, TimeZone) == 0x0070);
static_assert(offsetof(FINTLParentalGuidanceResult, Time) == 0x0080);
static_assert(offsetof(FINTLQRCodeResult, QRCodeJson) == 0x0048);
static_assert(offsetof(FINTLRichPresence, gameName) == 0x0000);
static_assert(offsetof(FINTLRichPresence, State) == 0x0010);
static_assert(offsetof(FINTLRichPresence, details) == 0x0020);
static_assert(offsetof(FINTLRichPresence, largeText) == 0x0030);
static_assert(offsetof(FINTLRichPresence, largeImage) == 0x0040);
static_assert(offsetof(FINTLRichPresence, SmallText) == 0x0050);
static_assert(offsetof(FINTLRichPresence, smallImage) == 0x0060);
static_assert(offsetof(FINTLRichPresence, extraJson) == 0x0080);
static_assert(offsetof(FINTLRichPresence, inviteCoverImage) == 0x0090);
static_assert(offsetof(FINTLDiscordUserInfo, uid) == 0x0000);
static_assert(offsetof(FINTLDiscordUserInfo, avatarUrl) == 0x0010);
static_assert(offsetof(FINTLDiscordUserInfo, userName) == 0x0020);
static_assert(offsetof(FINTLDiscordUserInfo, DisplayName) == 0x0030);
static_assert(offsetof(FINTLDiscordUserInfo, gid) == 0x0050);
static_assert(offsetof(FINTLDiscordUserInfo, presence) == 0x0068);
static_assert(offsetof(FINTLDiscordUserInfo, extraJson) == 0x0108);
static_assert(offsetof(FINTLDiscordUserResult, User) == 0x0048);
static_assert(offsetof(FINTLDiscordMessageResult, author) == 0x0050);
static_assert(offsetof(FINTLDiscordMessageResult, receiver) == 0x0168);
static_assert(offsetof(FINTLDiscordMessageResult, Content) == 0x0280);
static_assert(offsetof(FINTLDiscordMessageResult, Messageid) == 0x0290);
static_assert(offsetof(FINTLDiscordInviteResult, sender) == 0x0048);
static_assert(offsetof(FINTLDiscordInviteResult, Messageid) == 0x0168);
static_assert(offsetof(FINTLDiscordFriendResult, friendInfoList) == 0x0048);
static_assert(offsetof(FINTLTranslatorLang, auto_lang) == 0x0000);
static_assert(offsetof(FINTLTranslatorLang, zh) == 0x0010);
static_assert(offsetof(FINTLTranslatorLang, en) == 0x0020);
static_assert(offsetof(FINTLTranslatorLang, fr) == 0x0030);
static_assert(offsetof(FINTLTranslatorLang, ja) == 0x0040);
static_assert(offsetof(FINTLTranslatorLang, ko) == 0x0050);
static_assert(offsetof(FINTLTranslatorLang, zh_tw) == 0x0060);
static_assert(offsetof(FINTLTranslatorLang, zh_hk) == 0x0070);
static_assert(offsetof(FINTLTranslatorLang, de) == 0x0080);
static_assert(offsetof(FINTLTranslatorLang, es) == 0x0090);
static_assert(offsetof(FINTLTranslatorLang, ID) == 0x00A0);
static_assert(offsetof(FINTLTranslatorLang, pt) == 0x00B0);
static_assert(offsetof(FINTLTranslatorLang, th) == 0x00C0);
static_assert(offsetof(FINTLTranslatorLang, tr) == 0x00D0);
static_assert(offsetof(FINTLTranslatorLang, it) == 0x00E0);
static_assert(offsetof(FINTLTranslatorLang, ar) == 0x00F0);
static_assert(offsetof(FINTLTranslatorLang, ru) == 0x0100);
static_assert(offsetof(FINTLTranslatorLang, ms) == 0x0110);
static_assert(offsetof(FINTLTranslatorLang, vi) == 0x0120);
static_assert(offsetof(FINTLTranslatorLang, pl) == 0x0130);
static_assert(offsetof(FINTLTranslatorLang, no) == 0x0140);
static_assert(offsetof(FINTLTranslatorLang, se) == 0x0150);
static_assert(offsetof(FINTLTranslatorLang, my) == 0x0160);
static_assert(offsetof(FINTLTranslatorLang, bn) == 0x0170);
static_assert(offsetof(FINTLTranslatorLang, lo) == 0x0180);
static_assert(offsetof(FINTLTranslatorLang, km) == 0x0190);
static_assert(offsetof(FINTLTranslatorLang, nl) == 0x01A0);
static_assert(offsetof(FINTLTranslatorLang, tl) == 0x01B0);
static_assert(offsetof(FINTLTranslatorLang, cz) == 0x01C0);
static_assert(offsetof(FINTLTranslatorLang, da) == 0x01D0);
static_assert(offsetof(FINTLTranslatorLang, fi) == 0x01E0);
static_assert(offsetof(FINTLTranslatorLang, fr_ca) == 0x01F0);
static_assert(offsetof(FINTLTranslatorLang, es_mx) == 0x0200);
static_assert(offsetof(FINTLTranslatorLang, ukr) == 0x0210);
static_assert(offsetof(FINTLTranslatorLang, bg) == 0x0220);
static_assert(offsetof(FINTLTranslatorLang, el) == 0x0230);
static_assert(offsetof(FINTLTranslatorLang, hu) == 0x0240);
static_assert(offsetof(FINTLTranslatorLang, ro) == 0x0250);
static_assert(offsetof(FINTLTranslatorLang, af) == 0x0260);
static_assert(offsetof(FINTLTranslatorLang, AM) == 0x0270);
static_assert(offsetof(FINTLTranslatorLang, an) == 0x0280);
static_assert(offsetof(FINTLTranslatorLang, as_lang) == 0x0290);
static_assert(offsetof(FINTLTranslatorLang, az) == 0x02A0);
static_assert(offsetof(FINTLTranslatorLang, be) == 0x02B0);
static_assert(offsetof(FINTLTranslatorLang, bh) == 0x02C0);
static_assert(offsetof(FINTLTranslatorLang, br) == 0x02D0);
static_assert(offsetof(FINTLTranslatorLang, bs) == 0x02E0);
static_assert(offsetof(FINTLTranslatorLang, ca) == 0x02F0);
static_assert(offsetof(FINTLTranslatorLang, ceb) == 0x0300);
static_assert(offsetof(FINTLTranslatorLang, cy) == 0x0310);
static_assert(offsetof(FINTLTranslatorLang, dv) == 0x0320);
static_assert(offsetof(FINTLTranslatorLang, dz) == 0x0330);
static_assert(offsetof(FINTLTranslatorLang, eo) == 0x0340);
static_assert(offsetof(FINTLTranslatorLang, et) == 0x0350);
static_assert(offsetof(FINTLTranslatorLang, eu) == 0x0360);
static_assert(offsetof(FINTLTranslatorLang, fa) == 0x0370);
static_assert(offsetof(FINTLTranslatorLang, fo) == 0x0380);
static_assert(offsetof(FINTLTranslatorLang, fy) == 0x0390);
static_assert(offsetof(FINTLTranslatorLang, ga) == 0x03A0);
static_assert(offsetof(FINTLTranslatorLang, gd) == 0x03B0);
static_assert(offsetof(FINTLTranslatorLang, gl) == 0x03C0);
static_assert(offsetof(FINTLTranslatorLang, gn) == 0x03D0);
static_assert(offsetof(FINTLTranslatorLang, gom) == 0x03E0);
static_assert(offsetof(FINTLTranslatorLang, gu) == 0x03F0);
static_assert(offsetof(FINTLTranslatorLang, gv) == 0x0400);
static_assert(offsetof(FINTLTranslatorLang, he) == 0x0410);
static_assert(offsetof(FINTLTranslatorLang, hi) == 0x0420);
static_assert(offsetof(FINTLTranslatorLang, hr) == 0x0430);
static_assert(offsetof(FINTLTranslatorLang, ht) == 0x0440);
static_assert(offsetof(FINTLTranslatorLang, hy) == 0x0450);
static_assert(offsetof(FINTLTranslatorLang, ia) == 0x0460);
static_assert(offsetof(FINTLTranslatorLang, ie) == 0x0470);
static_assert(offsetof(FINTLTranslatorLang, ilo) == 0x0480);
static_assert(offsetof(FINTLTranslatorLang, IO) == 0x0490);
static_assert(offsetof(FINTLTranslatorLang, is_lang) == 0x04A0);
static_assert(offsetof(FINTLTranslatorLang, jv) == 0x04B0);
static_assert(offsetof(FINTLTranslatorLang, ka) == 0x04C0);
static_assert(offsetof(FINTLTranslatorLang, kk) == 0x04D0);
static_assert(offsetof(FINTLTranslatorLang, kn) == 0x04E0);
static_assert(offsetof(FINTLTranslatorLang, ku) == 0x04F0);
static_assert(offsetof(FINTLTranslatorLang, kv) == 0x0500);
static_assert(offsetof(FINTLTranslatorLang, kw) == 0x0510);
static_assert(offsetof(FINTLTranslatorLang, ky) == 0x0520);
static_assert(offsetof(FINTLTranslatorLang, la) == 0x0530);
static_assert(offsetof(FINTLTranslatorLang, lb) == 0x0540);
static_assert(offsetof(FINTLTranslatorLang, li) == 0x0550);
static_assert(offsetof(FINTLTranslatorLang, lt) == 0x0560);
static_assert(offsetof(FINTLTranslatorLang, lv) == 0x0570);
static_assert(offsetof(FINTLTranslatorLang, mai) == 0x0580);
static_assert(offsetof(FINTLTranslatorLang, mg) == 0x0590);
static_assert(offsetof(FINTLTranslatorLang, mk) == 0x05A0);
static_assert(offsetof(FINTLTranslatorLang, ml) == 0x05B0);
static_assert(offsetof(FINTLTranslatorLang, mn) == 0x05C0);
static_assert(offsetof(FINTLTranslatorLang, mr) == 0x05D0);
static_assert(offsetof(FINTLTranslatorLang, mt) == 0x05E0);
static_assert(offsetof(FINTLTranslatorLang, nb) == 0x05F0);
static_assert(offsetof(FINTLTranslatorLang, ne) == 0x0600);
static_assert(offsetof(FINTLTranslatorLang, nn) == 0x0610);
static_assert(offsetof(FINTLTranslatorLang, oc) == 0x0620);
static_assert(offsetof(FINTLTranslatorLang, or_lang) == 0x0630);
static_assert(offsetof(FINTLTranslatorLang, Os) == 0x0640);
static_assert(offsetof(FINTLTranslatorLang, pa) == 0x0650);
static_assert(offsetof(FINTLTranslatorLang, PS) == 0x0660);
static_assert(offsetof(FINTLTranslatorLang, qu) == 0x0670);
static_assert(offsetof(FINTLTranslatorLang, rm) == 0x0680);
static_assert(offsetof(FINTLTranslatorLang, rw) == 0x0690);
static_assert(offsetof(FINTLTranslatorLang, sc) == 0x06A0);
static_assert(offsetof(FINTLTranslatorLang, sd) == 0x06B0);
static_assert(offsetof(FINTLTranslatorLang, sh) == 0x06C0);
static_assert(offsetof(FINTLTranslatorLang, si) == 0x06D0);
static_assert(offsetof(FINTLTranslatorLang, sk) == 0x06E0);
static_assert(offsetof(FINTLTranslatorLang, sl) == 0x06F0);
static_assert(offsetof(FINTLTranslatorLang, so) == 0x0700);
static_assert(offsetof(FINTLTranslatorLang, sq) == 0x0710);
static_assert(offsetof(FINTLTranslatorLang, sr) == 0x0720);
static_assert(offsetof(FINTLTranslatorLang, su) == 0x0730);
static_assert(offsetof(FINTLTranslatorLang, sw) == 0x0740);
static_assert(offsetof(FINTLTranslatorLang, ta) == 0x0750);
static_assert(offsetof(FINTLTranslatorLang, te) == 0x0760);
static_assert(offsetof(FINTLTranslatorLang, tg) == 0x0770);
static_assert(offsetof(FINTLTranslatorLang, tk) == 0x0780);
static_assert(offsetof(FINTLTranslatorLang, tt) == 0x0790);
static_assert(offsetof(FINTLTranslatorLang, ug) == 0x07A0);
static_assert(offsetof(FINTLTranslatorLang, wa) == 0x07B0);
static_assert(offsetof(FINTLTranslatorLang, xh) == 0x07C0);
static_assert(offsetof(FINTLTranslatorLang, yi) == 0x07D0);
static_assert(offsetof(FINTLTranslatorLang, yo) == 0x07E0);
static_assert(offsetof(FINTLTranslatorLang, zu) == 0x07F0);
static_assert(offsetof(FINTLTranslatorLang, ar_Latn) == 0x0800);
static_assert(offsetof(FINTLTranslatorLang, zh_Latn) == 0x0810);
static_assert(offsetof(FINTLTranslatorLang, mi) == 0x0820);
static_assert(offsetof(FINTLTranslatorLang, ig) == 0x0830);
static_assert(offsetof(FINTLTranslatorLang, ja_Latn) == 0x0840);
static_assert(offsetof(FINTLTranslatorLang, hi_Latn) == 0x0850);
static_assert(offsetof(FINTLTranslatorLang, bg_Latn) == 0x0860);
static_assert(offsetof(FINTLTranslatorLang, ru_Latn) == 0x0870);
static_assert(offsetof(FINTLTranslatorLang, nap) == 0x0880);
static_assert(offsetof(FINTLTranslatorLang, ha) == 0x0890);
static_assert(offsetof(FINTLTranslatorLang, haw) == 0x08A0);
static_assert(offsetof(FINTLTranslatorLang, hmn) == 0x08B0);
static_assert(offsetof(FINTLTranslatorLang, el_Latn) == 0x08C0);
static_assert(offsetof(FINTLTranslatorLang, co) == 0x08D0);
static_assert(offsetof(FINTLTranslatorResult, translatorResp) == 0x0048);
static_assert(offsetof(FINTLTranslatorResult, asrRsp) == 0x0058);
static_assert(offsetof(FINTLTranslatorVoiceReq, voicePath) == 0x0048);
static_assert(offsetof(FINTLTranslatorVoiceReq, gameCode) == 0x0058);
static_assert(offsetof(FINTLTranslatorVoiceReq, gameLanguage) == 0x0068);
static_assert(offsetof(FINTLTranslatorVoiceReq, extInfo) == 0x0078);
static_assert(offsetof(FINTLTranslatorReq, srcLang) == 0x0048);
static_assert(offsetof(FINTLTranslatorReq, targetLang) == 0x0058);
static_assert(offsetof(FINTLTranslatorReq, translateTexts) == 0x0068);
static_assert(offsetof(FINTLTranslatorReq, topic) == 0x0078);
static_assert(offsetof(FINTLTranslatorReq, pastConversation) == 0x0088);
static_assert(offsetof(FINTLTranslatorReq, remark) == 0x0098);
static_assert(offsetof(FINTLTranslatorReq, gameCode) == 0x00B0);
static_assert(offsetof(FINTLTranslatorReq, extInfo) == 0x00C0);
static_assert(offsetof(FINTLAdjustAttrsChangedResult, AdjustAttribution) == 0x0048);
static_assert(offsetof(FINTLTabExpEntity, ExpName) == 0x0000);
static_assert(offsetof(FINTLTabExpEntity, Assignment) == 0x0010);
static_assert(offsetof(FINTLTabExpEntity, ExpGrayId) == 0x0020);
static_assert(offsetof(FINTLTabExpEntity, LayerName) == 0x0030);
static_assert(offsetof(FINTLTabExpEntity, ExpParams) == 0x0040);
static_assert(offsetof(FINTLTabExpEntity, ExpKey) == 0x00A0);
static_assert(offsetof(FINTLTabExpEntity, ExpGroupKey) == 0x00B0);
static_assert(offsetof(FINTLTabExpEntity, ModuleCode) == 0x00C0);
static_assert(offsetof(FINTLTabExpEntity, Params) == 0x00D0);
static_assert(offsetof(FINTLRewardItem, desc) == 0x0000);
static_assert(offsetof(FINTLRewardItem, icon) == 0x0010);
static_assert(offsetof(FINTLEventsInfoItem, Image) == 0x0008);
static_assert(offsetof(FINTLEventsInfoItem, Content) == 0x0018);
static_assert(offsetof(FINTLEventsInfoItem, rewards) == 0x0030);
static_assert(offsetof(FINTLLIBindRewardResult, Image) == 0x0048);
static_assert(offsetof(FINTLLIBindRewardResult, Content) == 0x0058);
static_assert(offsetof(FINTLLIBindRewardResult, Events) == 0x0078);
static_assert(offsetof(FINTLPermissionResult, permission_json_) == 0x0048);
static_assert(offsetof(FCutoutInfoResult, CutoutRects) == 0x0058);
static_assert(offsetof(FCutoutInfoResult, SafeArea) == 0x0068);
static_assert(offsetof(FINTLExtendResult, ExtendMethodName) == 0x0050);
static_assert(offsetof(FINTLDNSResult, V4) == 0x0048);
static_assert(offsetof(FINTLDNSResult, V6) == 0x0058);
static_assert(offsetof(FINTLDNSResult, Host) == 0x0068);
static_assert(offsetof(FINTLToolsResult, DeepLinkUrl) == 0x0048);
static_assert(offsetof(FINTLToolsResult, ShortLinkUrl) == 0x0058);
static_assert(offsetof(FINTLStartUdpSocketResult, Ip) == 0x0048);
static_assert(offsetof(FINTLLBSIPInfoResult, Region) == 0x0048);
static_assert(offsetof(FINTLLBSIPInfoResult, Alpha2) == 0x0058);
static_assert(offsetof(FINTLDirTreeNode, Name) == 0x0010);
static_assert(offsetof(FINTLDirTreeNode, URL) == 0x0020);
static_assert(offsetof(FINTLDirTreeNode, CustomStr) == 0x0040);
static_assert(offsetof(FINTLDirTreeNode, ChildrenIdSet) == 0x0050);
static_assert(offsetof(FINTLDirTreeResult, TreeInfo) == 0x0050);
static_assert(offsetof(FINTLDirTreeResult, RoleInfo) == 0x0060);
static_assert(offsetof(FINTLUpdateOptionalRepoFilesStatus, FilePath) == 0x0000);
static_assert(offsetof(FINTLUpdateOptionalRepoFilesStatus, NeedDownloadSize) == 0x0018);
static_assert(offsetof(FINTLUpdateInitInfo, ResourceSavePath) == 0x0010);
static_assert(offsetof(FINTLUpdateInitInfo, FirstResourceDirPath) == 0x0020);
static_assert(offsetof(FINTLUpdateProgress, FinishedSize) == 0x0018);
static_assert(offsetof(FINTLUpdateProgress, TotalSize) == 0x0028);
static_assert(offsetof(FINTLUpdateProgress, Speed) == 0x0038);
static_assert(offsetof(FINTLUpdateProgress, ErrorMsg) == 0x0058);
static_assert(offsetof(FINTLUpdateStartRepoNewVersionInfo, Version) == 0x0010);
static_assert(offsetof(FINTLUpdateStartRepoNewVersionInfo, NeedDownloadSize) == 0x0020);
static_assert(offsetof(FINTLUpdateStartRepoNewVersionInfo, GameDefinedStr) == 0x0030);
static_assert(offsetof(FINTLCustomerUserProfile, LangType) == 0x0000);
static_assert(offsetof(FINTLCustomerUserProfile, Sign) == 0x0010);
static_assert(offsetof(FINTLCustomerUserProfile, Openid) == 0x0020);
static_assert(offsetof(FINTLCustomerUserProfile, GameLevel) == 0x0030);
static_assert(offsetof(FINTLCustomerUserProfile, NickName) == 0x0040);
static_assert(offsetof(FINTLCustomerUserProfile, RoleId) == 0x0050);
static_assert(offsetof(FINTLCustomerUserProfile, AreaID) == 0x0060);
static_assert(offsetof(FINTLCustomerUserProfile, ZoneId) == 0x0070);
static_assert(offsetof(FINTLCustomerUserProfile, GameSvrId) == 0x0080);
static_assert(offsetof(FINTLCustomerUserProfile, Region) == 0x0090);
static_assert(offsetof(FINTLCustomerUserProfile, PictureUrl) == 0x00A0);
static_assert(offsetof(FINTLCustomerUserProfile, CustomParam1) == 0x00B0);
static_assert(offsetof(FINTLCustomerUserProfile, CustomParam2) == 0x00C0);
static_assert(offsetof(FINTLCustomerUserProfile, CustomParam3) == 0x00D0);
static_assert(offsetof(FINTLCustomerUserProfile, CustomParam4) == 0x00E0);
static_assert(offsetof(FINTLCustomerUserProfile, CustomParam5) == 0x00F0);
static_assert(offsetof(FINTLComplianceResult, ParentCertificateStatusExpiration) == 0x0050);
static_assert(offsetof(FINTLComplianceResult, CountryCode) == 0x0068);
static_assert(offsetof(FINTLComplianceResult, AdultStatusExpiration) == 0x0088);
static_assert(offsetof(FINTLComplianceResult, TS) == 0x0098);
static_assert(offsetof(FINTLComplianceResult, Region) == 0x00B0);
static_assert(offsetof(FINTLComplianceResult, Email) == 0x00C0);
static_assert(offsetof(FINTLComplianceResult, AdultAgeMap) == 0x00E0);
static_assert(offsetof(FINTLComplianceResult, GameGradeMap) == 0x00F0);
static_assert(offsetof(FINTLComplianceResult, AgeRange) == 0x0118);
static_assert(offsetof(FINTLComplianceResult, WeekendTimeStart) == 0x0190);
static_assert(offsetof(FINTLComplianceResult, WeekendTimeEnd) == 0x01A0);
static_assert(offsetof(FINTLComplianceResult, WeekdayTimeStart) == 0x01B8);
static_assert(offsetof(FINTLComplianceResult, WeekdayTimeEnd) == 0x01C8);
static_assert(offsetof(FINTLComplianceResult, TimeLimitTimeZone) == 0x01D8);
static_assert(offsetof(FINTLComplianceResult, UidStatus) == 0x01F0);
static_assert(offsetof(FINTLComplianceResult, UidStatusMsg) == 0x0200);
static_assert(offsetof(FINTLWebViewResult, MsgJsonData) == 0x0050);
static_assert(offsetof(FINTLPushResult, Notification) == 0x0050);
static_assert(offsetof(FINTLLocalNotificationIOS, AlertTitle) == 0x0008);
static_assert(offsetof(FINTLLocalNotificationIOS, AlertBody) == 0x0020);
static_assert(offsetof(FINTLLocalNotificationIOS, AlertAction) == 0x0030);
static_assert(offsetof(FINTLLocalNotificationIOS, NotificationID) == 0x0040);
static_assert(offsetof(FINTLLocalNotificationIOS, UserInfo) == 0x0050);
static_assert(offsetof(FINTLLocalNotification, Title) == 0x0018);
static_assert(offsetof(FINTLLocalNotification, Content) == 0x0028);
static_assert(offsetof(FINTLLocalNotification, TickerText) == 0x0038);
static_assert(offsetof(FINTLLocalNotification, ActionParameter) == 0x0048);
static_assert(offsetof(FINTLLocalNotification, RingUri) == 0x0058);
static_assert(offsetof(FINTLLocalNotification, SmallIcon) == 0x0068);
static_assert(offsetof(FINTLFriendReqInfo, User) == 0x0008);
static_assert(offsetof(FINTLFriendReqInfo, Title) == 0x0018);
static_assert(offsetof(FINTLFriendReqInfo, Description) == 0x0028);
static_assert(offsetof(FINTLFriendReqInfo, ImagePath) == 0x0038);
static_assert(offsetof(FINTLFriendReqInfo, ThumbPath) == 0x0048);
static_assert(offsetof(FINTLFriendReqInfo, MediaPath) == 0x0058);
static_assert(offsetof(FINTLFriendReqInfo, Link) == 0x0068);
static_assert(offsetof(FINTLFriendReqInfo, extraJson) == 0x0078);
static_assert(offsetof(FINTLPersonInfo, Openid) == 0x0000);
static_assert(offsetof(FINTLPersonInfo, userName) == 0x0010);
static_assert(offsetof(FINTLPersonInfo, PictureUrl) == 0x0028);
static_assert(offsetof(FINTLPersonInfo, Country) == 0x0038);
static_assert(offsetof(FINTLPersonInfo, Province) == 0x0048);
static_assert(offsetof(FINTLPersonInfo, City) == 0x0058);
static_assert(offsetof(FINTLPersonInfo, Language) == 0x0068);
static_assert(offsetof(FINTLPersonInfo, extraJson) == 0x0078);
static_assert(offsetof(FINTLFriendResult, friendInfoList) == 0x0048);
static_assert(offsetof(FINTLNoticePicture, URL) == 0x0000);
static_assert(offsetof(FINTLNoticePicture, Hash) == 0x0010);
static_assert(offsetof(FINTLNoticePicture, RedirectURL) == 0x0020);
static_assert(offsetof(FINTLNoticePicture, ExtraData) == 0x0030);
static_assert(offsetof(FINTLNoticeContent, AppContentId) == 0x0008);
static_assert(offsetof(FINTLNoticeContent, Title) == 0x0018);
static_assert(offsetof(FINTLNoticeContent, Content) == 0x0028);
static_assert(offsetof(FINTLNoticeContent, LangType) == 0x0038);
static_assert(offsetof(FINTLNoticeContent, ExtraData) == 0x0050);
static_assert(offsetof(FINTLNoticeContent, PictureList) == 0x0060);
static_assert(offsetof(FINTLNoticeInfo, AppID) == 0x0008);
static_assert(offsetof(FINTLNoticeInfo, AppNoticeId) == 0x0018);
static_assert(offsetof(FINTLNoticeInfo, AreaList) == 0x0038);
static_assert(offsetof(FINTLNoticeInfo, PictureList) == 0x0048);
static_assert(offsetof(FINTLNoticeInfo, ExtraData) == 0x0058);
static_assert(offsetof(FINTLNoticeInfo, ContentList) == 0x0068);
static_assert(offsetof(FINTLNoticeResult, SeqId) == 0x0048);
static_assert(offsetof(FINTLNoticeResult, NoticeInfoList) == 0x0058);
static_assert(offsetof(FINTLAccountProfile, userName) == 0x0000);
static_assert(offsetof(FINTLAccountProfile, Birthday) == 0x0010);
static_assert(offsetof(FINTLAccountProfile, Region) == 0x0030);
static_assert(offsetof(FINTLAccountProfile, LangType) == 0x0040);
static_assert(offsetof(FINTLAccountProfile, AvatarName) == 0x0050);
static_assert(offsetof(FINTLAccountProfile, extraJson) == 0x0060);
static_assert(offsetof(FINTLAccountProfile, Email) == 0x0070);
static_assert(offsetof(FINTLAccountProfile, Phone) == 0x0080);
static_assert(offsetof(FINTLAccountProfile, PhoneAreaCode) == 0x0090);
static_assert(offsetof(FINTLAccountProfile, NickName) == 0x00A8);
static_assert(offsetof(FINTLAccountProfile, PrivacyPolicy) == 0x00B8);
static_assert(offsetof(FINTLAccountProfile, TermsOfService) == 0x00C8);
static_assert(offsetof(FINTLAccountResult, Channel) == 0x0050);
static_assert(offsetof(FINTLAccountResult, SeqId) == 0x0060);
static_assert(offsetof(FINTLAccountResult, userName) == 0x0070);
static_assert(offsetof(FINTLAccountResult, uid) == 0x0080);
static_assert(offsetof(FINTLAccountResult, Token) == 0x0090);
static_assert(offsetof(FINTLAccountResult, PpAcceptanceVersion) == 0x00C0);
static_assert(offsetof(FINTLAccountResult, TosAcceptanceVersion) == 0x00D0);
static_assert(offsetof(FINTLAccountResult, PpAcceptanceTime) == 0x00E0);
static_assert(offsetof(FINTLAccountResult, TosAcceptanceTime) == 0x00E8);
static_assert(offsetof(FINTLAccountResult, Profile) == 0x00F0);
static_assert(offsetof(FINTLAccountResult, GameSaccUid) == 0x01E0);
static_assert(offsetof(FINTLAccountResult, GameSaccOpenId) == 0x01F8);
static_assert(offsetof(FINTLAccountResult, LiUid) == 0x0210);
static_assert(offsetof(FINTLAccountResult, LiOpenId) == 0x0228);
static_assert(offsetof(FINTLAccountResult, UserAgreedGameTos) == 0x0240);
static_assert(offsetof(FINTLAccountResult, UserAgreedGamePP) == 0x0250);
static_assert(offsetof(FINTLAccountResult, UserAgreedLiPP) == 0x0260);
static_assert(offsetof(FINTLAccountResult, UserAgreedLiDt) == 0x0270);
static_assert(offsetof(FINTLAccountResult, UserAgreedLiTos) == 0x0280);
static_assert(offsetof(FINTLAccountResult, UserAgreedGameDMA) == 0x0290);
static_assert(offsetof(FINTLAccountResult, UserAgreedReceiveEmailNight) == 0x02A0);
static_assert(offsetof(FINTLAccountResult, AvatarInfo) == 0x02B0);
static_assert(offsetof(FINTLAccountResult, avatarUrl) == 0x02C0);
static_assert(offsetof(FINTLAccountResult, AvatarName) == 0x02D0);
static_assert(offsetof(FINTLAccountResult, ComplianceStatusInfo) == 0x02E0);
static_assert(offsetof(FINTLAccountResult, PointsInfo) == 0x02F0);
static_assert(offsetof(FINTLIDTokenResult, IdToken) == 0x0048);
static_assert(offsetof(FINTLAuthResult, Openid) == 0x0048);
static_assert(offsetof(FINTLAuthResult, Token) == 0x0058);
static_assert(offsetof(FINTLAuthResult, LinkLIUid) == 0x0068);
static_assert(offsetof(FINTLAuthResult, LinkLIToken) == 0x0078);
static_assert(offsetof(FINTLAuthResult, RegChannelDis) == 0x0090);
static_assert(offsetof(FINTLAuthResult, userName) == 0x00A0);
static_assert(offsetof(FINTLAuthResult, Birthday) == 0x00B8);
static_assert(offsetof(FINTLAuthResult, PicUrl) == 0x00C8);
static_assert(offsetof(FINTLAuthResult, Pf) == 0x00D8);
static_assert(offsetof(FINTLAuthResult, PfKey) == 0x00E8);
static_assert(offsetof(FINTLAuthResult, ChannelInfo) == 0x0108);
static_assert(offsetof(FINTLAuthResult, ConfirmCode) == 0x0118);
static_assert(offsetof(FINTLAuthResult, BindList) == 0x0130);
static_assert(offsetof(FINTLAuthResult, LegalDocumentsAcceptedVersion) == 0x0140);
static_assert(offsetof(FINTLAuthResult, DeleteAccountInfo) == 0x0158);
static_assert(offsetof(FINTLAuthResult, TransferCode) == 0x0170);
static_assert(offsetof(FINTLAuthResult, Email) == 0x0188);
static_assert(offsetof(FINTLAuthResult, OauthCode) == 0x0198);
static_assert(offsetof(FINTLPassKeyResultItem, Brand) == 0x0000);
static_assert(offsetof(FINTLPassKeyResultItem, Model) == 0x0010);
static_assert(offsetof(FINTLPassKeyResultItem, CreateTime) == 0x0020);
static_assert(offsetof(FINTLPassKeyResultItem, CredentialId) == 0x0030);
static_assert(offsetof(FINTLPassKeyResultItem, LastUseTime) == 0x0040);
static_assert(offsetof(FINTLAllPassKeyResult, PassKeys) == 0x0048);
static_assert(offsetof(FINTLMessageResult, URL) == 0x0048);
static_assert(offsetof(FINTLMessageResult, Msg) == 0x0060);
static_assert(offsetof(FINTLWebSocketResult, URL) == 0x0048);
static_assert(offsetof(FINTLWebSocketResult, headers) == 0x0060);
static_assert(offsetof(FINTLWebSocketResult, Payload) == 0x0070);
static_assert(offsetof(FINTLGroupReqInfo, worldId) == 0x0048);
static_assert(offsetof(FINTLGroupReqInfo, guildId) == 0x0058);
