//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString, NSView, SEPreferencesController;

@interface SEPreferences : NSObject
{
    NSView *_view;
    SEPreferencesController *_owner;
    NSString *_label;
    NSString *_identifier;
    NSString *_imageName;
    NSImage *_image;
    BOOL _isResizable;
}

@property(getter=resizable) BOOL isResizable; // @synthesize isResizable=_isResizable;
- (void)write;
- (void)read;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setImageName:(id)arg1;
- (id)imageName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setView:(id)arg1;
- (id)view;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

