//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXCPLServiceStatus;
@protocol PXCPLService, PXCPLServiceUIDelegate, PXCPLServiceUIStatus;

@interface PXCPLServiceUI : NSObject
{
    id <PXCPLService> _cplService;
    struct {
        char progressDidChange;
        char performAction;
    } _delegateRespondsTo;
    PXCPLServiceStatus *_serviceStatus;
    id <PXCPLServiceUIStatus> _serviceUIStatus;
    id <PXCPLServiceUIDelegate> _delegate;
}

@property(nonatomic) __weak id <PXCPLServiceUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <PXCPLServiceUIStatus> serviceUIStatus; // @synthesize serviceUIStatus=_serviceUIStatus;
@property(readonly, nonatomic) PXCPLServiceStatus *serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (void).cxx_destruct;
- (void)_handleUpdatedServiceStatus:(id)arg1;
- (void)_serviceUIStatusDidChange:(id)arg1 onlyProgressDidChange:(BOOL)arg2;
- (void)_performAction:(long long)arg1;
- (id)initWithCPLService:(id)arg1;
- (id)init;

@end
