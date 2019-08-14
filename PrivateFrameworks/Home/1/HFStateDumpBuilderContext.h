//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFStateDumpBuilderContext : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _excludePrimaryID;
    unsigned long long _detailLevel;
    unsigned long long _outputStyle;
    NSSet *_objectsToExclude;
    NSDictionary *_userInfo;
    NSString *_multilinePrefix;
}

+ (id)contextWithDetailLevel:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *multilinePrefix; // @synthesize multilinePrefix=_multilinePrefix;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSSet *objectsToExclude; // @synthesize objectsToExclude=_objectsToExclude;
@property(nonatomic) BOOL excludePrimaryID; // @synthesize excludePrimaryID=_excludePrimaryID;
@property(nonatomic) unsigned long long outputStyle; // @synthesize outputStyle=_outputStyle;
@property(nonatomic) unsigned long long detailLevel; // @synthesize detailLevel=_detailLevel;
- (void).cxx_destruct;
- (unsigned long long)derivedOutputStyle;
- (id)copyWithOutputStyle:(unsigned long long)arg1;
- (id)copyWithDetailLevel:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithDetailLevel:(unsigned long long)arg1;
- (id)init;

@end

