//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVB17221ACMPMessage;

@interface AVB17221ACMPPendingResponse : NSObject
{
    BOOL responseReceived;
    AVB17221ACMPMessage *message;
    CDUnknownBlockType completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(copy) AVB17221ACMPMessage *message; // @synthesize message;
@property BOOL responseReceived; // @synthesize responseReceived;
- (void)dealloc;

@end

