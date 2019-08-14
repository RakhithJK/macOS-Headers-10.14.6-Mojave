//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol ICTableSelectionDelegate;

@interface ICTableSelectionView : NSView
{
    id <ICTableSelectionDelegate> _delegate;
}

@property(nonatomic) __weak id <ICTableSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateAccentColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

