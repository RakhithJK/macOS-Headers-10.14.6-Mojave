//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIInputViewSetPlacementOnScreen.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding>
{
    BOOL _dismissKeyboardOnly;
    double _offset;
}

+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL dismissKeyboardOnly; // @synthesize dismissKeyboardOnly=_dismissKeyboardOnly;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInteractive;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)applicatorClassForKeyboard:(BOOL)arg1;

@end

