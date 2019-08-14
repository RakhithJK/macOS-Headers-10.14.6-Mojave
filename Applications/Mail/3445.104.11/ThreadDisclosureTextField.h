//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class CALayer;

@interface ThreadDisclosureTextField : NSTextField
{
    CALayer *_imageLayer;
}

@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)makeBackingLayer;
@property(nonatomic) BOOL isOpen;
- (id)_foregroundColor;
- (id)_backgroundColor;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;

@end

