//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSegmentedControl;

@interface PVToolbarMenuSegmentController : NSObject
{
    NSSegmentedControl *_control;
    id _actualTarget;
    SEL _actualSelector;
    BOOL _isForTool;
}

- (void).cxx_destruct;
- (id)_substituteLargeImageIfNecessary:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuSelection:(id)arg1;
- (void)toolChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithControl:(id)arg1 actualTarget:(id)arg2 actualSelector:(SEL)arg3 isForTool:(BOOL)arg4;

@end

