//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Social/SLRequest.h>

@class NSMutableArray;

@interface SLBatchRequest : SLRequest
{
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (id)preparedURLRequest;
- (void)addRequest:(id)arg1;
- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;

@end

