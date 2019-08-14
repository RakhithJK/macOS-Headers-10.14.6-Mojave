//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriTaskDelivering-Protocol.h>

@class AFSiriTaskService, NSString;
@protocol AFSiriTaskServiceDelegate, OS_dispatch_queue;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering>
{
    AFSiriTaskService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    id <AFSiriTaskServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <AFSiriTaskServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak AFSiriTaskService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

