//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFunction : NSObject
{
    id mObject;
    SEL mSelector;
}

- (double)realValueAt:(double)arg1;
- (struct _NComplex)complexValueAt:(double)arg1;
- (double)valueAtCoord:(const double *)arg1;
- (double)valueAt:(double)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 selector:(SEL)arg2;

@end

