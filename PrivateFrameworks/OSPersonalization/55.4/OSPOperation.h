//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, OSPRequest;

@interface OSPOperation : NSOperation
{
    BOOL _isFinished;
    OSPRequest *_request;
    NSError *_error;
}

@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) OSPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)start;
- (id)initWithRequest:(id)arg1;

@end

