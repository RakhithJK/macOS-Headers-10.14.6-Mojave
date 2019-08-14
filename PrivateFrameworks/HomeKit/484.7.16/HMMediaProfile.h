//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMAccessoryProfile.h>

#import <HomeKit/HMAccessorySettingsContainer-Protocol.h>
#import <HomeKit/HMMediaObject-Protocol.h>
#import <HomeKit/_HMMediaProfileDelegate-Protocol.h>

@class HMAccessorySettings, HMHome, HMMediaSession, NSString;
@protocol HMMediaProfileDelegate;

@interface HMMediaProfile : HMAccessoryProfile <_HMMediaProfileDelegate, HMMediaObject, HMAccessorySettingsContainer>
{
    NSString *_routeUID;
    id <HMMediaProfileDelegate> _delegate;
}

@property __weak id <HMMediaProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2;
@property(readonly) __weak HMHome *containerHome;
@property(readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property(readonly, copy) HMMediaSession *mediaSession;
@property(readonly) HMAccessorySettings *settings;
- (id)initWithAccessoryProfile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

