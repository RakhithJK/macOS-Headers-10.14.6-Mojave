//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CVML/CVMLRequest.h>

@class NSError;

@interface CVMLClusterObservationsRequest : CVMLRequest
{
    NSError *_initializationError;
}

- (void).cxx_destruct;
- (BOOL)internalCancelRequestWithHandler:(id)arg1 error:(id *)arg2;
- (BOOL)internalProcessWithHandler:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

