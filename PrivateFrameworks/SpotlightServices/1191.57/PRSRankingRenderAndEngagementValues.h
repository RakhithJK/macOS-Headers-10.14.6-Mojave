//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSCopying-Protocol.h>
#import <SpotlightServices/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableArray *_renderValues;
    NSMutableArray *_engagementValues;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSMutableArray *engagementValues; // @synthesize engagementValues=_engagementValues;
@property(retain) NSMutableArray *renderValues; // @synthesize renderValues=_renderValues;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

