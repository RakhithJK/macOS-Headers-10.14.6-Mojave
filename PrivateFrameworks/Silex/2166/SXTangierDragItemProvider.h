//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTangierDragItemProvider-Protocol.h>

@class NSString;

@interface SXTangierDragItemProvider : NSObject <SXTangierDragItemProvider>
{
}

- (BOOL)session:(id)arg1 containsURL:(id)arg2;
- (id)dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

