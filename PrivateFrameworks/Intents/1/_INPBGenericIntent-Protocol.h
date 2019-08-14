//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBProperty;

@protocol _INPBGenericIntent <NSObject>
+ (Class)parametersType;
@property(readonly, nonatomic) BOOL hasVerb;
@property(copy, nonatomic) NSString *verb;
@property(readonly, nonatomic) unsigned long long parametersCount;
@property(copy, nonatomic) NSArray *parameters;
@property(readonly, nonatomic) BOOL hasMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *metadata;
@property(readonly, nonatomic) BOOL hasDomain;
@property(copy, nonatomic) NSString *domain;
- (_INPBProperty *)parametersAtIndex:(unsigned long long)arg1;
- (void)addParameters:(_INPBProperty *)arg1;
- (void)clearParameters;
@end

