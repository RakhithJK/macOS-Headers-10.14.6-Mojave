//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSString;

@interface NPUNowPlayingClient : NSObject
{
    NSImage *_appIconImage;
    BOOL _attemptedAppIconLoad;
    void *_mediaRemoteClient;
}

@property(readonly, nonatomic) void *mediaRemoteClient; // @synthesize mediaRemoteClient=_mediaRemoteClient;
- (void).cxx_destruct;
- (BOOL)_isQuickLookHelperClient;
@property(readonly, nonatomic) NSColor *tintColor;
@property(readonly, nonatomic) unsigned int nowPlayingVisibility;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL appIconImageIsTemplated;
@property(readonly, nonatomic) NSImage *appIconImage;
@property(readonly, nonatomic) NSString *displayBundleIdentifier;
@property(readonly, nonatomic) NSString *parentAppBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) unsigned int userIdentifier;
@property(readonly, nonatomic) int processIdentifier;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMediaRemoteClient:(void *)arg1;

@end
