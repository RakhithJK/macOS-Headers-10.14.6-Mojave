//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextField;

@interface IPXContentHuggingTextFieldHelper : NSObject
{
    BOOL _superViewIsClipView;
    NSTextField *_textField;
    double _lastIntrinsicHeight;
}

@property BOOL superViewIsClipView; // @synthesize superViewIsClipView=_superViewIsClipView;
@property double lastIntrinsicHeight; // @synthesize lastIntrinsicHeight=_lastIntrinsicHeight;
@property(nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void)_updateScrollViewElasticity;
- (void)_clipViewFrameDidChange:(id)arg1;
- (void)_stopObservingClipView;
- (void)_startObservingClipView;
- (void)textFieldDidMoveToSuperview;
- (void)textFieldWillMoveToSuperview:(id)arg1;
- (void)updateContentSize;
- (struct CGSize)intrinsicContentSize;
- (double)_wrappedHeightForString;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end
