//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ACUAssistantPaneProtocol <NSObject>
- (NSString *)panelTitle;

@optional
- (BOOL)paneAllowsQuit;
- (void)didCancelPanel;
- (void)willCancelPanel;
- (BOOL)shouldExitPane:(int)arg1;
- (void)didExitPane:(int)arg1;
- (void)willExitPane:(int)arg1;
- (void)didEnterPane:(int)arg1;
- (void)willEnterPane:(int)arg1;
- (NSString *)retreatButtonTitle;
- (NSString *)advanceButtonTitle;
@end

