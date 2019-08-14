//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/NSProgressReporting-Protocol.h>
#import <SidecarCore/SidecarTransferDelegate-Protocol.h>

@class NSError, NSMutableArray, NSProgress, NSString, SidecarDevice, SidecarSession;
@protocol SidecarMessage;

@interface SidecarResponse : NSObject <SidecarTransferDelegate, NSProgressReporting>
{
    SidecarDevice *_device;
    NSError *_error;
    id <SidecarMessage> _message;
    NSProgress *_progress;
    SidecarSession *_session;
    NSMutableArray *_transfers;
    NSMutableArray *_thumbnailTransfers;
    long long _requestID;
    unsigned int _accepted:1;
    unsigned int _cancelled:1;
    unsigned int _finished:1;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) id <SidecarMessage> message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)sendCompletion:(id)arg1;
- (void)sidecarTransfer:(id)arg1 didComplete:(id)arg2;
- (void)sendThumbnailItems:(id)arg1;
- (void)sendItems:(id)arg1;
- (id)sendItems:(id)arg1 complete:(_Bool)arg2;
- (void)_accept;
@property(retain, nonatomic) NSError *error; // @dynamic error;
- (void)setFinished:(_Bool)arg1;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @dynamic finished;
- (void)cancel;
- (void)accept;
- (void)setCancelled:(_Bool)arg1;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @dynamic cancelled;
@property(readonly, nonatomic) NSProgress *progress;
@property(readonly, nonatomic) SidecarDevice *device;
- (id)initWithSession:(id)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
