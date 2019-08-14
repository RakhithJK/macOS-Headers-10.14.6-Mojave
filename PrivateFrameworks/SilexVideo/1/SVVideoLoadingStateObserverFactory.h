//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoLoadingStateObserverFactory-Protocol.h>

@class NSString;
@protocol SVPlayerItemLoaderProviding;

@interface SVVideoLoadingStateObserverFactory : NSObject <SVVideoLoadingStateObserverFactory>
{
    id <SVPlayerItemLoaderProviding> _playerItemLoaderProvider;
}

@property(readonly, nonatomic) id <SVPlayerItemLoaderProviding> playerItemLoaderProvider; // @synthesize playerItemLoaderProvider=_playerItemLoaderProvider;
- (void).cxx_destruct;
- (id)createLoadingStateObserverForVideo:(id)arg1;
- (id)initWithPlayeryItemLoaderProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

