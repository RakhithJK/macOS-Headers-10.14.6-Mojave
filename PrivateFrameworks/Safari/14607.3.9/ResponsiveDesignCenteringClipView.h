//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

__attribute__((visibility("hidden")))
@interface ResponsiveDesignCenteringClipView : NSClipView
{
}

- (void)setFrameRotation:(double)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)viewBoundsChanged:(id)arg1;
- (struct CGPoint)constrainScrollPoint:(struct CGPoint)arg1;
- (void)centerDocument;
- (struct CGPoint)centeredClipOrigin;

@end

