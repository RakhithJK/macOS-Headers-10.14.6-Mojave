//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class UITextInteraction;

@protocol UITextInteractionDelegate <NSObject>

@optional
- (void)interactionDidEnd:(UITextInteraction *)arg1;
- (void)interactionWillBegin:(UITextInteraction *)arg1;
- (BOOL)interactionShouldBegin:(UITextInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)interactionShouldSuppressSystemUI:(UITextInteraction *)arg1;
- (BOOL)interactionShouldBegin:(UITextInteraction *)arg1;
@end

