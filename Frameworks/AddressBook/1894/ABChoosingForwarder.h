//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABChoosingForwarder : NSObject
{
    CDUnknownBlockType _selectorTest;
    id _yesTarget;
    id _noTarget;
}

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithYesTarget:(id)arg1 noTarget:(id)arg2 selectorTest:(CDUnknownBlockType)arg3;

@end

