//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@protocol ClickableTextFieldDelegate;

@interface ClickableTextField : NSTextField
{
    id <ClickableTextFieldDelegate> _clickDelegate;
}

+ (Class)cellClass;
@property(nonatomic) __weak id <ClickableTextFieldDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

