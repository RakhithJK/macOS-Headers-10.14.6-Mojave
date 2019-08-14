//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPUNowPlayingClient, NSArray, NSColor, NSImage, NSString;
@protocol NPUNowPlayingTargetDelegate;

@interface NPUNowPlayingTarget : NSObject
{
    NPUNowPlayingClient *_activeClient;
    id <NPUNowPlayingTargetDelegate> _delegate;
    NSArray *_clients;
}

@property(copy, nonatomic) NSArray *clients; // @synthesize clients=_clients;
@property(nonatomic) __weak id <NPUNowPlayingTargetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyActiveClientDidChange;
@property(retain, nonatomic) NPUNowPlayingClient *activeClient;
@property(readonly, nonatomic) NSColor *tintColor;
@property(readonly, nonatomic) NSImage *appIconImage;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *parentAppBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithClients:(id)arg1;

@end

