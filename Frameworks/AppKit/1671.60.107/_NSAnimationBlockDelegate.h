//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSAnimationBlockDelegate : NSObject <NSAnimationDelegate>
{
    CDUnknownBlockType _block;
}

- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

