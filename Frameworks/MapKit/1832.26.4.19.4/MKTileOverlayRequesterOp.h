//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKTileOverlayRequester, NSData;
@protocol OS_dispatch_queue;

@interface MKTileOverlayRequesterOp : NSObject
{
    struct _GEOTileKey _key;
    MKTileOverlayRequester *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSData *_data;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) __weak MKTileOverlayRequester *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;

@end

