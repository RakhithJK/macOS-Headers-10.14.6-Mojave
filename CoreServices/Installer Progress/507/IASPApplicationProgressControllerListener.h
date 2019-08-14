//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class IASPApplicationListener, NSString;

@interface IASPApplicationProgressControllerListener : NSObject <NSXPCListenerDelegate>
{
    IASPApplicationListener *_applicationProgressController;
}

@property(retain) IASPApplicationListener *applicationProgressController; // @synthesize applicationProgressController=_applicationProgressController;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithApplicationProgressController:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_nameForProcess:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

