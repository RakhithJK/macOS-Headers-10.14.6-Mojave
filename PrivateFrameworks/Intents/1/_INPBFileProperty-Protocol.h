//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBFilePropertyValue;

@protocol _INPBFileProperty <NSObject>
@property(readonly, nonatomic) BOOL hasValue;
@property(retain, nonatomic) _INPBFilePropertyValue *value;
@property(nonatomic) BOOL hasQualifier;
@property(nonatomic) int qualifier;
@property(nonatomic) BOOL hasName;
@property(nonatomic) int name;
- (int)StringAsQualifier:(NSString *)arg1;
- (NSString *)qualifierAsString:(int)arg1;
- (int)StringAsName:(NSString *)arg1;
- (NSString *)nameAsString:(int)arg1;
@end

