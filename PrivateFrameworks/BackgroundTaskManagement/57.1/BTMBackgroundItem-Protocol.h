//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BackgroundTaskManagement/NSObject-Protocol.h>

@class NSData, NSString, NSUUID;

@protocol BTMBackgroundItem <NSObject>
@property(readonly) long long userElection;
@property(readonly) unsigned long long type;
@property(readonly) NSData *bookmark;
@property(readonly) NSString *name;
@property(readonly) NSUUID *identifier;
@end

