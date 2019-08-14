//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class NSNetService, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport
{
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    BOOL _requiresCustomPairing;
    NSNetService *_netService;
}

+ (id)createDeviceInfoFromTXTRecord:(id)arg1;
+ (id)createDeviceInfoFromNetService:(id)arg1;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void).cxx_destruct;
@property(nonatomic) BOOL requiresCustomPairing;
- (void)reset;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)error;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (long long)connectionType;
- (long long)port;
- (id)hostname;
- (id)name;
- (id)deviceInfo;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;
- (id)description;
- (id)initWithNetService:(id)arg1;

@end

