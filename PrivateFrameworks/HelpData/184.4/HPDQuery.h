//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpData/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface HPDQuery : NSObject <NSSecureCoding>
{
    NSString *_queryString;
    NSArray *_scope;
    NSArray *_resultTypes;
    NSArray *_preferredLanguages;
    NSDictionary *_userInfo;
    NSString *_queryID;
    NSNumber *_pid;
    unsigned long long _limit;
    BOOL _cancelled;
    NSDictionary *_options;
}

+ (BOOL)supportsSecureCoding;
+ (id)queryWithScope:(id)arg1 andString:(id)arg2;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain) NSNumber *pid; // @synthesize pid=_pid;
@property(retain) NSString *queryID; // @synthesize queryID=_queryID;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned long long limit; // @synthesize limit=_limit;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain) NSArray *resultTypes; // @synthesize resultTypes=_resultTypes;
@property(readonly) NSArray *scope; // @synthesize scope=_scope;
@property(readonly) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_initWithScope:(id)arg1 string:(id)arg2 preferredLanguages:(id)arg3;

@end

