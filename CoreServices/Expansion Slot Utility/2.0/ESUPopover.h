//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPopover, NSTextField;

@interface ESUPopover : NSObject
{
    NSPopover *_popover;
    NSTextField *_infoField;
}

@property NSTextField *infoField; // @synthesize infoField=_infoField;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void)_cancelHidePopover;
- (void)popoverForArea:(id)arg1 onView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)hidePopover;
- (void)dealloc;
- (id)init;

@end
