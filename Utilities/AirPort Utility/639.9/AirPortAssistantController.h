//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSDictionary, NSWindow;
@protocol AirPortAssistantControllerDelegate;

@interface AirPortAssistantController : NSWindowController
{
    id _delegate;
    id _viewController;
    NSDictionary *_removedBaseStation;
    NSWindow *_hostWindow;
}

+ (BOOL)launchAUForDevice:(id)arg1 getAUFromAppStore:(BOOL)arg2;
+ (id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2;
+ (id)unconfiguredDeviceName:(id)arg1;
+ (BOOL)isUnconfiguredDevice:(id)arg1;
+ (id)unconfiguredBaseStationName:(unsigned char)arg1;
+ (BOOL)isUnconfiguredBaseStation:(id)arg1 productID:(char *)arg2;
+ (id)controllerWithParameters:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) NSDictionary *removedBaseStation; // @synthesize removedBaseStation=_removedBaseStation;
@property(retain) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain) id viewController; // @synthesize viewController=_viewController;
@property(nonatomic) id <AirPortAssistantControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)assistantCompleteWithResult:(int)arg1;

@end

