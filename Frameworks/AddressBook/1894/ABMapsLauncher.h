//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABMapsLaunchRequest;

@interface ABMapsLauncher : NSObject
{
    ABMapsLaunchRequest *_launchRequest;
    ABMapsLauncher *_nextLauncher;
}

+ (id)mapsLauncherWithRequest:(id)arg1;
@property(readonly, nonatomic) ABMapsLauncher *nextLauncher; // @synthesize nextLauncher=_nextLauncher;
@property(readonly, nonatomic) ABMapsLaunchRequest *launchRequest; // @synthesize launchRequest=_launchRequest;
- (void).cxx_destruct;
- (void)launchMaps;
- (id)initWithLaunchRequest:(id)arg1 nextLauncher:(id)arg2;
- (id)initWithLaunchRequest:(id)arg1;
- (id)init;

@end

