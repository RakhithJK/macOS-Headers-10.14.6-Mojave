//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarEditorViewController, PRLikeness;

@protocol CNAvatarEditorDelegate <NSObject>

@optional
- (void)editorDidFinish:(CNAvatarEditorViewController *)arg1 withRemovedLikeness:(PRLikeness *)arg2;
- (void)editorDidFinish:(CNAvatarEditorViewController *)arg1 withLikenessResult:(PRLikeness *)arg2 cancelled:(BOOL)arg3;
- (void)editorDidFinish:(CNAvatarEditorViewController *)arg1 cancelled:(BOOL)arg2;
@end

