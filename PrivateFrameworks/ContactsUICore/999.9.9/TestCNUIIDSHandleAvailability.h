//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSHandleAvailability-Protocol.h>

@class NSString;
@protocol CNUIIDSHandle;

@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>
{
    BOOL _available;
    id <CNUIIDSHandle> _handle;
}

@property(nonatomic) BOOL available; // @synthesize available=_available;
@property(retain, nonatomic) id <CNUIIDSHandle> handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL isAvailable;
- (id)initWithHandle:(id)arg1 availability:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
