//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationNoneSurfacedBy : NSObject <FCFeedTransforming>
{
    NSSet *_tagIDs;
    NSDictionary *_feedContextByFeedID;
}

+ (id)transformationWithTagIDs:(id)arg1 feedContextByFeedID:(id)arg2;
@property(copy, nonatomic) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(copy, nonatomic) NSSet *tagIDs; // @synthesize tagIDs=_tagIDs;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

