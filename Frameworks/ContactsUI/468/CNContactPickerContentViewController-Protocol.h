//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNContactPickerServiceProtocol-Protocol.h>

@class UINavigationController;
@protocol CNContactPickerContentDelegate;

@protocol CNContactPickerContentViewController <CNContactPickerServiceProtocol>
@property(readonly, nonatomic) UINavigationController *navigationController;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
@end

