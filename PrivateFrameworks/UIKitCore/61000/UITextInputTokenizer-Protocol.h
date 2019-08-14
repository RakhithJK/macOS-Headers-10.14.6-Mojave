//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UITextPosition, UITextRange;

@protocol UITextInputTokenizer <NSObject>
- (BOOL)isPosition:(UITextPosition *)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPosition:(UITextPosition *)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (UITextRange *)rangeEnclosingPosition:(UITextPosition *)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
@end

