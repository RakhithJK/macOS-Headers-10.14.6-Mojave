//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSAppChannelsMapping : NSObject
{
    NSString *_appAdamID;
    NSArray *_channelIDs;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *channelIDs; // @synthesize channelIDs=_channelIDs;
@property(copy, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

