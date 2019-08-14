//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIInputViewSetPlacement.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding>
{
    struct CGPoint _normalizedOffset;
    struct UIEdgeInsets _chromeBuffer;
}

+ (struct CGPoint)computeOffsetForOffset:(struct CGPoint)arg1 withSize:(struct CGSize)arg2 chromeBuffer:(struct UIEdgeInsets)arg3 onScreenSize:(struct CGSize)arg4;
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithPoint:(struct CGPoint)arg1;
@property(nonatomic) struct UIEdgeInsets chromeBuffer; // @synthesize chromeBuffer=_chromeBuffer;
@property(nonatomic) struct CGPoint normalizedOffset; // @synthesize normalizedOffset=_normalizedOffset;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2;
- (BOOL)isUndocked;
- (BOOL)inputViewWillAppear;
- (BOOL)isEqual:(id)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (double)heightOfInputViews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)applicatorClassForKeyboard:(BOOL)arg1;
- (id)applicatorInfoForOwner:(id)arg1;

@end

