//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakDisplayLinkTarget : NSObject
{
    id _target;
    SEL _action;
}

+ (SEL)displayLinkAction;
- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

