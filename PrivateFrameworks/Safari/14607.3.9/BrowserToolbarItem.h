//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

__attribute__((visibility("hidden")))
@interface BrowserToolbarItem : NSToolbarItem
{
    unsigned long long _handledMouseDownModifiersMask;
}

@property(nonatomic) unsigned long long handledMouseDownModifiersMask; // @synthesize handledMouseDownModifiersMask=_handledMouseDownModifiersMask;
- (void)validate;
- (id)initWithItemIdentifier:(id)arg1 target:(id)arg2 button:(id)arg3;
- (id)initWithItemIdentifier:(id)arg1 target:(id)arg2 view:(id)arg3;
- (BOOL)_allowToolbarToStealEvent:(id)arg1;
- (BOOL)_viewMightProcessModifiedMouseDownEvent;

@end

