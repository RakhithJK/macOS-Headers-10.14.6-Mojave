//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomAction.h>

@class NSString, UIImage;

@interface UIAccessibilityCustomAction (Private)
- (id)_accessibilityAXAttributedName;
- (BOOL)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (id)_accessibilityCustomActionIdentifier;
@property(nonatomic) BOOL ignoreWhenVoiceOverTouches;
@property(nonatomic) BOOL shouldSuppressActionHint;
@property(retain, nonatomic, getter=_accessibilityInternalCustomActionIdentifier, setter=_accessibilitySetInternalCustomActionIdentifier:) NSString *internalCustomActionIdentifier;
@property(retain, nonatomic, getter=_shortName, setter=_setShortName:) NSString *shortName;
@property(retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image;
@end

