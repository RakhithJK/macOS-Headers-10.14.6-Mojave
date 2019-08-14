//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBString;

@protocol _INPBCopyFileIntentResponse <NSObject>
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL success;
@property(nonatomic) BOOL hasOverwrite;
@property(nonatomic) BOOL overwrite;
@property(nonatomic) BOOL hasEntityType;
@property(nonatomic) int entityType;
@property(readonly, nonatomic) BOOL hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
@property(readonly, nonatomic) BOOL hasDestinationName;
@property(retain, nonatomic) _INPBString *destinationName;
- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
@end

