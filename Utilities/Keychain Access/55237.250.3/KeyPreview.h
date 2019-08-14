//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@class KeychainItemBasic, NSView;

@interface KeyPreview : NSVisualEffectView
{
    id _icon;
    id _kind;
    id _name;
    id _usage;
    NSView *_view;
    KeychainItemBasic *_item;
}

+ (id)keyUsageString:(const struct cssm_key *)arg1;
- (BOOL)isFlipped;
- (void)populateAttributes;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end

