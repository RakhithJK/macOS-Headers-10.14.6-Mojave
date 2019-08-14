//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSImage, NSString;

@interface NSProgress (NSSharingAdditions)
+ (id)keyPathsForValuesAffectingHasSomethingToReveal;
+ (id)keyPathsForValuesAffectingHasSomethingToCancel;
+ (id)keyPathsForValuesAffectingIsInProgress;
@property double progressValue;
@property(copy) CDUnknownBlockType revealBlock;
@property(retain) NSString *subtitle;
@property(retain) NSString *title;
@property(retain) NSImage *icon;
- (BOOL)hasSomethingToReveal;
- (BOOL)hasSomethingToCancel;
- (BOOL)isInProgress;
@end

