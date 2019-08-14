//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRAVModifyOutputContextRequestProtobuf, _MRClientUpdatesConfigurationProtobuf, _MRCryptoPairingMessageProtobuf, _MRDeviceInfoMessageProtobuf, _MRGameControllerMessageProtobuf, _MRGameControllerPropertiesMessageProtobuf, _MRGenericMessageProtobuf, _MRGetKeyboardSessionProtobuf, _MRGetRemoteTextInputSessionProtobuf, _MRGetStateMessageProtobuf, _MRGetVoiceInputDevicesMessageProtobuf, _MRGetVoiceInputDevicesResponseMessageProtobuf, _MRGetVolumeControlCapabilitiesMessageProtobuf, _MRGetVolumeControlCapabilitiesResultMessageProtobuf, _MRGetVolumeMessageProtobuf, _MRGetVolumeResultMessageProtobuf, _MRKeyboardMessageProtobuf, _MRNotificationMessageProtobuf, _MRPlaybackQueueProtobuf, _MRPlaybackQueueRequestProtobuf, _MRPresentRouteAuthorizationStatusMessageProtobuf, _MRPromptForRouteAuthorizationMessageProtobuf, _MRPromptForRouteAuthorizationResponseMessageProtobuf, _MRRegisterForGameControllerEventsMessageProtobuf, _MRRegisterGameControllerMessageProtobuf, _MRRegisterGameControllerResponseMessageProtobuf, _MRRegisterHIDDeviceMessageProtobuf, _MRRegisterHIDDeviceResultMessageProtobuf, _MRRegisterVoiceInputDeviceMessageProtobuf, _MRRegisterVoiceInputDeviceResponseMessageProtobuf, _MRRemoteTextInputMessageProtobuf, _MRRemoveClientMessageProtobuf, _MRRemoveOutputDevicesMessageProtobuf, _MRRemovePlayerMessageProtobuf, _MRSendButtonEventMessageProtobuf, _MRSendCommandMessageProtobuf, _MRSendCommandResultMessageProtobuf, _MRSendHIDEventMessageProtobuf, _MRSendHIDReportMessageProtobuf, _MRSendLyricsEventMessageProtobuf, _MRSendPackedVirtualTouchEventMessageProtobuf, _MRSendVirtualTouchEventMessageProtobuf, _MRSendVoiceInputMessageProtobuf, _MRSetArtworkMessageProtobuf, _MRSetConnectionStateMessageProtobuf, _MRSetHiliteModeMessageProtobuf, _MRSetNowPlayingClientMessageProtobuf, _MRSetNowPlayingPlayerMessageProtobuf, _MRSetReadyStateMessageProtobuf, _MRSetRecordingStateMessageProtobuf, _MRSetStateMessageProtobuf, _MRSetVolumeMessageProtobuf, _MRTextInputMessageProtobuf, _MRTransactionMessageProtobuf, _MRUnregisterGameControllerMessageProtobuf, _MRUpdateClientMessageProtobuf, _MRUpdateContentItemArtworkMessageProtobuf, _MRUpdateContentItemMessageProtobuf, _MRUpdateOutputDevicesMessageProtobuf, _MRUpdatePlayerMessageProtobuf, _MRVolumeControlAvailabilityProtobuf, _MRVolumeControlCapabilitiesDidChangeMessageProtobuf, _MRVolumeDidChangeMessageProtobuf, _MRWakeDeviceMessageProtobuf;

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_authenticationToken;
    _MRClientUpdatesConfigurationProtobuf *_clientUpdatesConfigMessage;
    _MRSetConnectionStateMessageProtobuf *_connectionState;
    _MRPlaybackQueueProtobuf *_contentItemsChangedNotificationMessage;
    _MRCryptoPairingMessageProtobuf *_cryptoPairingMessage;
    _MRDeviceInfoMessageProtobuf *_deviceInfoMessage;
    unsigned int _errorCode;
    _MRGameControllerMessageProtobuf *_gameController;
    _MRGameControllerPropertiesMessageProtobuf *_gameControllerProperties;
    _MRGenericMessageProtobuf *_genericMessage;
    _MRGetKeyboardSessionProtobuf *_getKeyboardMessage;
    _MRGetRemoteTextInputSessionProtobuf *_getRemoteTextInputSessionMessage;
    _MRGetStateMessageProtobuf *_getStateMessage;
    _MRGetVoiceInputDevicesMessageProtobuf *_getVoiceInputDevicesMessage;
    _MRGetVoiceInputDevicesResponseMessageProtobuf *_getVoiceInputDevicesResponseMessage;
    _MRGetVolumeControlCapabilitiesMessageProtobuf *_getVolumeControlCapabilitiesMessage;
    _MRGetVolumeControlCapabilitiesResultMessageProtobuf *_getVolumeControlCapabilitiesResultMessage;
    _MRGetVolumeMessageProtobuf *_getVolumeMessage;
    _MRGetVolumeResultMessageProtobuf *_getVolumeResultMessage;
    NSString *_identifier;
    _MRKeyboardMessageProtobuf *_keyboardMessage;
    _MRVolumeControlAvailabilityProtobuf *_masterVolumeControlCapabilitiesDidChangeMessage;
    _MRAVModifyOutputContextRequestProtobuf *_modifyOutputContextRequestMessage;
    _MRNotificationMessageProtobuf *_notificationMessage;
    _MRPlaybackQueueRequestProtobuf *_playbackQueueRequest;
    _MRPresentRouteAuthorizationStatusMessageProtobuf *_presentRouteAuthorizationStatusMessage;
    _MRPromptForRouteAuthorizationMessageProtobuf *_promptForRouteAuthorizationMessage;
    _MRPromptForRouteAuthorizationResponseMessageProtobuf *_promptForRouteAuthorizationResponseMessage;
    _MRSetReadyStateMessageProtobuf *_readyStateMessage;
    _MRRegisterForGameControllerEventsMessageProtobuf *_registerForGameControllerEvents;
    _MRRegisterGameControllerMessageProtobuf *_registerGameController;
    _MRRegisterGameControllerResponseMessageProtobuf *_registerGameControllerResponse;
    _MRRegisterHIDDeviceMessageProtobuf *_registerHIDDeviceMessage;
    _MRRegisterHIDDeviceResultMessageProtobuf *_registerHIDDeviceResultMessage;
    _MRRegisterVoiceInputDeviceMessageProtobuf *_registerVoiceInputDeviceMessage;
    _MRRegisterVoiceInputDeviceResponseMessageProtobuf *_registerVoiceInputDeviceResponseMessage;
    _MRRemoteTextInputMessageProtobuf *_remoteTextInputMessage;
    _MRRemoveClientMessageProtobuf *_removeClientMessage;
    _MRRemoveOutputDevicesMessageProtobuf *_removeOutputDevicesMessage;
    _MRRemovePlayerMessageProtobuf *_removePlayerMessage;
    _MRSendButtonEventMessageProtobuf *_sendButtonEventMessage;
    _MRSendCommandMessageProtobuf *_sendCommandMessage;
    _MRSendCommandResultMessageProtobuf *_sendCommandResultMessage;
    _MRSendHIDEventMessageProtobuf *_sendHIDEventMessage;
    _MRSendHIDReportMessageProtobuf *_sendHIDReportMessage;
    _MRSendLyricsEventMessageProtobuf *_sendLyricsEventMessage;
    _MRSendPackedVirtualTouchEventMessageProtobuf *_sendPackedVirtualTouchEventMessage;
    _MRSendVirtualTouchEventMessageProtobuf *_sendVirtualTouchEventMessage;
    _MRSendVoiceInputMessageProtobuf *_sendVoiceInputMessage;
    _MRSetArtworkMessageProtobuf *_setArtworkMessage;
    _MRSetHiliteModeMessageProtobuf *_setHiliteModeMessage;
    _MRSetNowPlayingClientMessageProtobuf *_setNowPlayingClientMessage;
    _MRSetNowPlayingPlayerMessageProtobuf *_setNowPlayingPlayerMessage;
    _MRSetRecordingStateMessageProtobuf *_setRecordingStateMessage;
    _MRSetStateMessageProtobuf *_setStateMessage;
    _MRSetVolumeMessageProtobuf *_setVolumeMessage;
    _MRTextInputMessageProtobuf *_textInputMessage;
    _MRTransactionMessageProtobuf *_transactionPackets;
    int _type;
    _MRUnregisterGameControllerMessageProtobuf *_unregisterGameController;
    _MRUpdateClientMessageProtobuf *_updateClientMessage;
    _MRUpdateContentItemArtworkMessageProtobuf *_updateContentItemArtworkMessage;
    _MRUpdateContentItemMessageProtobuf *_updateContentItemMessage;
    _MRUpdateOutputDevicesMessageProtobuf *_updateOutputDevicesMessage;
    _MRUpdatePlayerMessageProtobuf *_updatePlayerMessage;
    _MRVolumeControlCapabilitiesDidChangeMessageProtobuf *_volumeControlCapabilitiesDidChangeMessage;
    _MRVolumeDidChangeMessageProtobuf *_volumeDidChangeMessage;
    _MRWakeDeviceMessageProtobuf *_wakeDeviceMessage;
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) _MRGetRemoteTextInputSessionProtobuf *getRemoteTextInputSessionMessage; // @synthesize getRemoteTextInputSessionMessage=_getRemoteTextInputSessionMessage;
@property(retain, nonatomic) _MRRemoteTextInputMessageProtobuf *remoteTextInputMessage; // @synthesize remoteTextInputMessage=_remoteTextInputMessage;
@property(retain, nonatomic) _MRRemoveOutputDevicesMessageProtobuf *removeOutputDevicesMessage; // @synthesize removeOutputDevicesMessage=_removeOutputDevicesMessage;
@property(retain, nonatomic) _MRUpdateOutputDevicesMessageProtobuf *updateOutputDevicesMessage; // @synthesize updateOutputDevicesMessage=_updateOutputDevicesMessage;
@property(retain, nonatomic) _MRVolumeControlCapabilitiesDidChangeMessageProtobuf *volumeControlCapabilitiesDidChangeMessage; // @synthesize volumeControlCapabilitiesDidChangeMessage=_volumeControlCapabilitiesDidChangeMessage;
@property(retain, nonatomic) _MRGetVolumeControlCapabilitiesResultMessageProtobuf *getVolumeControlCapabilitiesResultMessage; // @synthesize getVolumeControlCapabilitiesResultMessage=_getVolumeControlCapabilitiesResultMessage;
@property(retain, nonatomic) _MRGetVolumeControlCapabilitiesMessageProtobuf *getVolumeControlCapabilitiesMessage; // @synthesize getVolumeControlCapabilitiesMessage=_getVolumeControlCapabilitiesMessage;
@property(retain, nonatomic) _MRPresentRouteAuthorizationStatusMessageProtobuf *presentRouteAuthorizationStatusMessage; // @synthesize presentRouteAuthorizationStatusMessage=_presentRouteAuthorizationStatusMessage;
@property(retain, nonatomic) _MRPromptForRouteAuthorizationResponseMessageProtobuf *promptForRouteAuthorizationResponseMessage; // @synthesize promptForRouteAuthorizationResponseMessage=_promptForRouteAuthorizationResponseMessage;
@property(retain, nonatomic) _MRPromptForRouteAuthorizationMessageProtobuf *promptForRouteAuthorizationMessage; // @synthesize promptForRouteAuthorizationMessage=_promptForRouteAuthorizationMessage;
@property(retain, nonatomic) _MRUpdatePlayerMessageProtobuf *updatePlayerMessage; // @synthesize updatePlayerMessage=_updatePlayerMessage;
@property(retain, nonatomic) _MRUpdateContentItemArtworkMessageProtobuf *updateContentItemArtworkMessage; // @synthesize updateContentItemArtworkMessage=_updateContentItemArtworkMessage;
@property(retain, nonatomic) _MRUpdateContentItemMessageProtobuf *updateContentItemMessage; // @synthesize updateContentItemMessage=_updateContentItemMessage;
@property(retain, nonatomic) _MRUpdateClientMessageProtobuf *updateClientMessage; // @synthesize updateClientMessage=_updateClientMessage;
@property(retain, nonatomic) _MRRemovePlayerMessageProtobuf *removePlayerMessage; // @synthesize removePlayerMessage=_removePlayerMessage;
@property(retain, nonatomic) _MRRemoveClientMessageProtobuf *removeClientMessage; // @synthesize removeClientMessage=_removeClientMessage;
@property(retain, nonatomic) _MRVolumeDidChangeMessageProtobuf *volumeDidChangeMessage; // @synthesize volumeDidChangeMessage=_volumeDidChangeMessage;
@property(retain, nonatomic) _MRSetVolumeMessageProtobuf *setVolumeMessage; // @synthesize setVolumeMessage=_setVolumeMessage;
@property(retain, nonatomic) _MRGetVolumeResultMessageProtobuf *getVolumeResultMessage; // @synthesize getVolumeResultMessage=_getVolumeResultMessage;
@property(retain, nonatomic) _MRGetVolumeMessageProtobuf *getVolumeMessage; // @synthesize getVolumeMessage=_getVolumeMessage;
@property(retain, nonatomic) _MRAVModifyOutputContextRequestProtobuf *modifyOutputContextRequestMessage; // @synthesize modifyOutputContextRequestMessage=_modifyOutputContextRequestMessage;
@property(retain, nonatomic) _MRSetNowPlayingPlayerMessageProtobuf *setNowPlayingPlayerMessage; // @synthesize setNowPlayingPlayerMessage=_setNowPlayingPlayerMessage;
@property(retain, nonatomic) _MRSetNowPlayingClientMessageProtobuf *setNowPlayingClientMessage; // @synthesize setNowPlayingClientMessage=_setNowPlayingClientMessage;
@property(retain, nonatomic) _MRSendLyricsEventMessageProtobuf *sendLyricsEventMessage; // @synthesize sendLyricsEventMessage=_sendLyricsEventMessage;
@property(retain, nonatomic) _MRSendPackedVirtualTouchEventMessageProtobuf *sendPackedVirtualTouchEventMessage; // @synthesize sendPackedVirtualTouchEventMessage=_sendPackedVirtualTouchEventMessage;
@property(retain, nonatomic) _MRGenericMessageProtobuf *genericMessage; // @synthesize genericMessage=_genericMessage;
@property(retain, nonatomic) _MRWakeDeviceMessageProtobuf *wakeDeviceMessage; // @synthesize wakeDeviceMessage=_wakeDeviceMessage;
@property(retain, nonatomic) _MRSetHiliteModeMessageProtobuf *setHiliteModeMessage; // @synthesize setHiliteModeMessage=_setHiliteModeMessage;
@property(retain, nonatomic) _MRSendButtonEventMessageProtobuf *sendButtonEventMessage; // @synthesize sendButtonEventMessage=_sendButtonEventMessage;
@property(retain, nonatomic) _MRSetConnectionStateMessageProtobuf *connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) _MRSetReadyStateMessageProtobuf *readyStateMessage; // @synthesize readyStateMessage=_readyStateMessage;
@property(retain, nonatomic) _MRGameControllerPropertiesMessageProtobuf *gameControllerProperties; // @synthesize gameControllerProperties=_gameControllerProperties;
@property(retain, nonatomic) _MRCryptoPairingMessageProtobuf *cryptoPairingMessage; // @synthesize cryptoPairingMessage=_cryptoPairingMessage;
@property(retain, nonatomic) _MRTransactionMessageProtobuf *transactionPackets; // @synthesize transactionPackets=_transactionPackets;
@property(retain, nonatomic) _MRPlaybackQueueRequestProtobuf *playbackQueueRequest; // @synthesize playbackQueueRequest=_playbackQueueRequest;
@property(retain, nonatomic) _MRSendVoiceInputMessageProtobuf *sendVoiceInputMessage; // @synthesize sendVoiceInputMessage=_sendVoiceInputMessage;
@property(retain, nonatomic) _MRSetRecordingStateMessageProtobuf *setRecordingStateMessage; // @synthesize setRecordingStateMessage=_setRecordingStateMessage;
@property(retain, nonatomic) _MRRegisterVoiceInputDeviceResponseMessageProtobuf *registerVoiceInputDeviceResponseMessage; // @synthesize registerVoiceInputDeviceResponseMessage=_registerVoiceInputDeviceResponseMessage;
@property(retain, nonatomic) _MRRegisterVoiceInputDeviceMessageProtobuf *registerVoiceInputDeviceMessage; // @synthesize registerVoiceInputDeviceMessage=_registerVoiceInputDeviceMessage;
@property(retain, nonatomic) _MRGetVoiceInputDevicesResponseMessageProtobuf *getVoiceInputDevicesResponseMessage; // @synthesize getVoiceInputDevicesResponseMessage=_getVoiceInputDevicesResponseMessage;
@property(retain, nonatomic) _MRGetVoiceInputDevicesMessageProtobuf *getVoiceInputDevicesMessage; // @synthesize getVoiceInputDevicesMessage=_getVoiceInputDevicesMessage;
@property(retain, nonatomic) _MRTextInputMessageProtobuf *textInputMessage; // @synthesize textInputMessage=_textInputMessage;
@property(retain, nonatomic) _MRGetKeyboardSessionProtobuf *getKeyboardMessage; // @synthesize getKeyboardMessage=_getKeyboardMessage;
@property(retain, nonatomic) _MRKeyboardMessageProtobuf *keyboardMessage; // @synthesize keyboardMessage=_keyboardMessage;
@property(retain, nonatomic) _MRRegisterForGameControllerEventsMessageProtobuf *registerForGameControllerEvents; // @synthesize registerForGameControllerEvents=_registerForGameControllerEvents;
@property(retain, nonatomic) _MRUnregisterGameControllerMessageProtobuf *unregisterGameController; // @synthesize unregisterGameController=_unregisterGameController;
@property(retain, nonatomic) _MRRegisterGameControllerResponseMessageProtobuf *registerGameControllerResponse; // @synthesize registerGameControllerResponse=_registerGameControllerResponse;
@property(retain, nonatomic) _MRRegisterGameControllerMessageProtobuf *registerGameController; // @synthesize registerGameController=_registerGameController;
@property(retain, nonatomic) _MRGameControllerMessageProtobuf *gameController; // @synthesize gameController=_gameController;
@property(retain, nonatomic) _MRVolumeControlAvailabilityProtobuf *masterVolumeControlCapabilitiesDidChangeMessage; // @synthesize masterVolumeControlCapabilitiesDidChangeMessage=_masterVolumeControlCapabilitiesDidChangeMessage;
@property(retain, nonatomic) _MRClientUpdatesConfigurationProtobuf *clientUpdatesConfigMessage; // @synthesize clientUpdatesConfigMessage=_clientUpdatesConfigMessage;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoMessage; // @synthesize deviceInfoMessage=_deviceInfoMessage;
@property(retain, nonatomic) _MRPlaybackQueueProtobuf *contentItemsChangedNotificationMessage; // @synthesize contentItemsChangedNotificationMessage=_contentItemsChangedNotificationMessage;
@property(retain, nonatomic) _MRNotificationMessageProtobuf *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(retain, nonatomic) _MRSendVirtualTouchEventMessageProtobuf *sendVirtualTouchEventMessage; // @synthesize sendVirtualTouchEventMessage=_sendVirtualTouchEventMessage;
@property(retain, nonatomic) _MRSendHIDReportMessageProtobuf *sendHIDReportMessage; // @synthesize sendHIDReportMessage=_sendHIDReportMessage;
@property(retain, nonatomic) _MRSendHIDEventMessageProtobuf *sendHIDEventMessage; // @synthesize sendHIDEventMessage=_sendHIDEventMessage;
@property(retain, nonatomic) _MRRegisterHIDDeviceResultMessageProtobuf *registerHIDDeviceResultMessage; // @synthesize registerHIDDeviceResultMessage=_registerHIDDeviceResultMessage;
@property(retain, nonatomic) _MRRegisterHIDDeviceMessageProtobuf *registerHIDDeviceMessage; // @synthesize registerHIDDeviceMessage=_registerHIDDeviceMessage;
@property(retain, nonatomic) _MRSetArtworkMessageProtobuf *setArtworkMessage; // @synthesize setArtworkMessage=_setArtworkMessage;
@property(retain, nonatomic) _MRSetStateMessageProtobuf *setStateMessage; // @synthesize setStateMessage=_setStateMessage;
@property(retain, nonatomic) _MRGetStateMessageProtobuf *getStateMessage; // @synthesize getStateMessage=_getStateMessage;
@property(retain, nonatomic) _MRSendCommandResultMessageProtobuf *sendCommandResultMessage; // @synthesize sendCommandResultMessage=_sendCommandResultMessage;
@property(retain, nonatomic) _MRSendCommandMessageProtobuf *sendCommandMessage; // @synthesize sendCommandMessage=_sendCommandMessage;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasGetRemoteTextInputSessionMessage;
@property(readonly, nonatomic) BOOL hasRemoteTextInputMessage;
@property(readonly, nonatomic) BOOL hasRemoveOutputDevicesMessage;
@property(readonly, nonatomic) BOOL hasUpdateOutputDevicesMessage;
@property(readonly, nonatomic) BOOL hasVolumeControlCapabilitiesDidChangeMessage;
@property(readonly, nonatomic) BOOL hasGetVolumeControlCapabilitiesResultMessage;
@property(readonly, nonatomic) BOOL hasGetVolumeControlCapabilitiesMessage;
@property(readonly, nonatomic) BOOL hasPresentRouteAuthorizationStatusMessage;
@property(readonly, nonatomic) BOOL hasPromptForRouteAuthorizationResponseMessage;
@property(readonly, nonatomic) BOOL hasPromptForRouteAuthorizationMessage;
@property(readonly, nonatomic) BOOL hasUpdatePlayerMessage;
@property(readonly, nonatomic) BOOL hasUpdateContentItemArtworkMessage;
@property(readonly, nonatomic) BOOL hasUpdateContentItemMessage;
@property(readonly, nonatomic) BOOL hasUpdateClientMessage;
@property(readonly, nonatomic) BOOL hasRemovePlayerMessage;
@property(readonly, nonatomic) BOOL hasRemoveClientMessage;
@property(readonly, nonatomic) BOOL hasVolumeDidChangeMessage;
@property(readonly, nonatomic) BOOL hasSetVolumeMessage;
@property(readonly, nonatomic) BOOL hasGetVolumeResultMessage;
@property(readonly, nonatomic) BOOL hasGetVolumeMessage;
@property(readonly, nonatomic) BOOL hasModifyOutputContextRequestMessage;
@property(readonly, nonatomic) BOOL hasSetNowPlayingPlayerMessage;
@property(readonly, nonatomic) BOOL hasSetNowPlayingClientMessage;
@property(readonly, nonatomic) BOOL hasSendLyricsEventMessage;
@property(readonly, nonatomic) BOOL hasSendPackedVirtualTouchEventMessage;
@property(readonly, nonatomic) BOOL hasGenericMessage;
@property(readonly, nonatomic) BOOL hasWakeDeviceMessage;
@property(readonly, nonatomic) BOOL hasSetHiliteModeMessage;
@property(readonly, nonatomic) BOOL hasSendButtonEventMessage;
@property(readonly, nonatomic) BOOL hasConnectionState;
@property(readonly, nonatomic) BOOL hasReadyStateMessage;
@property(readonly, nonatomic) BOOL hasGameControllerProperties;
@property(readonly, nonatomic) BOOL hasCryptoPairingMessage;
@property(readonly, nonatomic) BOOL hasTransactionPackets;
@property(readonly, nonatomic) BOOL hasPlaybackQueueRequest;
@property(readonly, nonatomic) BOOL hasSendVoiceInputMessage;
@property(readonly, nonatomic) BOOL hasSetRecordingStateMessage;
@property(readonly, nonatomic) BOOL hasRegisterVoiceInputDeviceResponseMessage;
@property(readonly, nonatomic) BOOL hasRegisterVoiceInputDeviceMessage;
@property(readonly, nonatomic) BOOL hasGetVoiceInputDevicesResponseMessage;
@property(readonly, nonatomic) BOOL hasGetVoiceInputDevicesMessage;
@property(readonly, nonatomic) BOOL hasTextInputMessage;
@property(readonly, nonatomic) BOOL hasGetKeyboardMessage;
@property(readonly, nonatomic) BOOL hasKeyboardMessage;
@property(readonly, nonatomic) BOOL hasRegisterForGameControllerEvents;
@property(readonly, nonatomic) BOOL hasUnregisterGameController;
@property(readonly, nonatomic) BOOL hasRegisterGameControllerResponse;
@property(readonly, nonatomic) BOOL hasRegisterGameController;
@property(readonly, nonatomic) BOOL hasGameController;
@property(readonly, nonatomic) BOOL hasMasterVolumeControlCapabilitiesDidChangeMessage;
@property(readonly, nonatomic) BOOL hasClientUpdatesConfigMessage;
@property(readonly, nonatomic) BOOL hasDeviceInfoMessage;
@property(readonly, nonatomic) BOOL hasContentItemsChangedNotificationMessage;
@property(readonly, nonatomic) BOOL hasNotificationMessage;
@property(readonly, nonatomic) BOOL hasSendVirtualTouchEventMessage;
@property(readonly, nonatomic) BOOL hasSendHIDReportMessage;
@property(readonly, nonatomic) BOOL hasSendHIDEventMessage;
@property(readonly, nonatomic) BOOL hasRegisterHIDDeviceResultMessage;
@property(readonly, nonatomic) BOOL hasRegisterHIDDeviceMessage;
@property(readonly, nonatomic) BOOL hasSetArtworkMessage;
@property(readonly, nonatomic) BOOL hasSetStateMessage;
@property(readonly, nonatomic) BOOL hasGetStateMessage;
@property(readonly, nonatomic) BOOL hasSendCommandResultMessage;
@property(readonly, nonatomic) BOOL hasSendCommandMessage;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasAuthenticationToken;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

