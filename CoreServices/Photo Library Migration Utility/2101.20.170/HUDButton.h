//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSButton.h>

@interface HUDButton : NSButton
{
    unsigned long long mModifiersFromLastClick;
}

+ (Class)cellClass;
- (void)setTitle:(id)arg1;
- (void)setModifiersFromLastClick:(unsigned long long)arg1;
- (unsigned long long)modifiersFromLastClick;
- (void)mouseDown:(id)arg1;
- (id)initWithCoder:(id)arg1 andType:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
