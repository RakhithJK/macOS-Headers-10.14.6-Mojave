//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class NSArray, NSWindow;

@protocol MMServicePreflightProtocol <NSObject>
- (BOOL)hasPreflightAction;

@optional
- (BOOL)preflightForSignout:(id *)arg1 withWindow:(NSWindow *)arg2 andDataclassActions:(NSArray *)arg3;
@end

