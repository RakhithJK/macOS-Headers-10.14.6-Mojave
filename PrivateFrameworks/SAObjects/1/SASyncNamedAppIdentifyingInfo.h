//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SASyncAppIdentifyingInfo.h>

@class NSString;

@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo
{
}

+ (id)namedAppIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)namedAppIdentifyingInfo;
@property(copy, nonatomic) NSString *localizedBundleDisplayName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

