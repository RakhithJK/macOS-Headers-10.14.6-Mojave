//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSDictionary;

@protocol CNContactViewServiceProtocol <NSObject>
- (void)toggleEditing;
- (void)editCancel;
- (void)didChangeToEditMode:(BOOL)arg1;
- (void)setupWithOptions:(NSDictionary *)arg1 readyBlock:(void (^)(NSError *))arg2;
@end

