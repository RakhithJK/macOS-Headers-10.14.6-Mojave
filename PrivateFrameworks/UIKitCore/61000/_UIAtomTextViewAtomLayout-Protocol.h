//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol _UIAtomTextViewAtomLayout <NSObject>
@property(readonly, nonatomic) struct CGRect selectionBounds;
@property(nonatomic) long long selectionStyle;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;

@optional
@property(readonly, nonatomic) long long baseWritingDirection;
@end

