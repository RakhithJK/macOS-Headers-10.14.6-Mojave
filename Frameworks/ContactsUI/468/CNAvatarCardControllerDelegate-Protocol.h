//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarCardController, CNContact, NSArray, NSString, UIViewController;

@protocol CNAvatarCardControllerDelegate <NSObject>
- (UIViewController *)presentingViewControllerForAvatarCardController:(CNAvatarCardController *)arg1;

@optional
- (BOOL)avatarCardController:(CNAvatarCardController *)arg1 shouldPresentForLocation:(struct CGPoint)arg2;
- (void)avatarCardControllerDidDismiss:(CNAvatarCardController *)arg1;
- (void)avatarCardControllerWillDismiss:(CNAvatarCardController *)arg1;
- (void)avatarCardControllerWillBeginPreviewInteraction:(CNAvatarCardController *)arg1;
- (BOOL)avatarCardController:(CNAvatarCardController *)arg1 shouldShowContact:(CNContact *)arg2;
- (NSArray *)avatarCardController:(CNAvatarCardController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (long long)avatarCardController:(CNAvatarCardController *)arg1 presentationResultForLocation:(struct CGPoint)arg2;
@end

