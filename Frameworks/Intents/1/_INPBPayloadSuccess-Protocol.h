//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@protocol _INPBPayloadSuccess <NSObject>
@property(readonly, nonatomic) BOOL hasResolvedValue;
@property(retain, nonatomic) _INPBIntentSlotValue *resolvedValue;
@property(readonly, nonatomic) BOOL hasResolvedKeyPath;
@property(copy, nonatomic) NSString *resolvedKeyPath;
@end

