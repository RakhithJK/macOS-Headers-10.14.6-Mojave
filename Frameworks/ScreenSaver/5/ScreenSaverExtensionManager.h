//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, ScreenSaverViewController;

@interface ScreenSaverExtensionManager : NSObject
{
    BOOL _isAnimating;
    ScreenSaverViewController *_viewController;
    NSXPCConnection *_connection;
    NSString *_bundleIdentifier;
}

+ (id)sharedManager;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak ScreenSaverViewController *viewController; // @synthesize viewController=_viewController;
@property BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)serviceViewControllerDidAwake:(id)arg1;
- (void)resumeConnectionWithEndpoint:(id)arg1;
- (void)dealloc;

@end

