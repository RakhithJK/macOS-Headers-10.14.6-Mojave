//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSArray, NSSet, NSString;

@interface FCJSONRecordSourceSchema : NSObject <NSCopying>
{
    NSString *_recordType;
    NSString *_recordIDPrefix;
    NSArray *_keys;
    NSArray *_localizableKeys;
    NSArray *_allKeys;
    NSSet *_localizableKeysSet;
}

@property(copy, nonatomic) NSSet *localizableKeysSet; // @synthesize localizableKeysSet=_localizableKeysSet;
@property(readonly, copy, nonatomic) NSArray *allKeys; // @synthesize allKeys=_allKeys;
@property(readonly, copy, nonatomic) NSArray *localizableKeys; // @synthesize localizableKeys=_localizableKeys;
@property(readonly, copy, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(readonly, copy, nonatomic) NSString *recordIDPrefix; // @synthesize recordIDPrefix=_recordIDPrefix;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isLocalizableKey:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4;

@end

