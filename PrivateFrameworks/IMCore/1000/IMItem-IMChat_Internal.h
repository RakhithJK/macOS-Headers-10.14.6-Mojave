//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMChat_Internal)
+ (Class)contextClass;
- (id)_copy;
- (BOOL)_isInvitation;
- (void)_setInvitation:(BOOL)arg1;
- (id)_otherHandle;
- (id)_senderHandle;
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;
- (id)message;
@end

