//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNClassifyImageAestheticsRequest : VNImageBasedRequest
{
}

+ (Class)configurationClass;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)_smartCamCombinedModelImageAestheticsClassificationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id *)arg3;

@end

