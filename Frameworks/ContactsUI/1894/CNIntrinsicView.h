//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol CNIntrinsicViewDelegate;

@interface CNIntrinsicView : NSView
{
    id <CNIntrinsicViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CNIntrinsicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;

@end

