//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreFollowUpUI/NSObject-Protocol.h>

@class FLFollowUpAction, FLFollowUpItem, NSImage;

@protocol FLExtensionRemoteInterface <NSObject>
- (void)processFollowUpItem:(FLFollowUpItem *)arg1 selectedAction:(FLFollowUpAction *)arg2 completion:(void (^)(BOOL))arg3;

@optional
- (void)setDisplayImage:(NSImage *)arg1;
- (void)followUpPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
@end

