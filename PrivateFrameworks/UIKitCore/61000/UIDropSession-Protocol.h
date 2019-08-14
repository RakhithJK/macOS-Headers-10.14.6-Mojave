//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSProgressReporting-Protocol.h>
#import <UIKitCore/UIDragDropSession-Protocol.h>

@class NSProgress;
@protocol UIDragSession;

@protocol UIDropSession <UIDragDropSession, NSProgressReporting>
@property(nonatomic) unsigned long long progressIndicatorStyle;
@property(readonly, nonatomic) id <UIDragSession> localDragSession;
- (NSProgress *)loadObjectsOfClass:(Class)arg1 completion:(void (^)(NSArray *))arg2;
@end

