//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColorPickingDefault-Protocol.h>

@class NSColor, NSView;

@protocol NSColorPickingCustom <NSColorPickingDefault>
- (void)setColor:(NSColor *)arg1;
- (NSView *)provideNewView:(BOOL)arg1;
- (long long)currentMode;
- (BOOL)supportsMode:(long long)arg1;
@end
