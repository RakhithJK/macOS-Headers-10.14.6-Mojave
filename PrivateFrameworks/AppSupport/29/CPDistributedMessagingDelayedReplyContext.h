//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPDistributedMessagingDelayedReplyContext : NSObject
{
    unsigned int _replyPort;
    BOOL _portPassing;
}

@property(nonatomic) BOOL portPassing; // @synthesize portPassing=_portPassing;
@property(nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(BOOL)arg2;

@end

