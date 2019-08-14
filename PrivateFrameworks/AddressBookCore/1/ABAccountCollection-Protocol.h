//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class ABAccount, NSArray, NSString;

@protocol ABAccountCollection <NSObject>
@property(readonly, copy) NSArray *persistentAccounts;
@property(readonly, copy) NSArray *enabledAccounts;
@property(readonly, copy) NSArray *allAccounts;
@property(readonly) ABAccount *defaultAccount;
@property(readonly, copy) NSString *basePath;
- (ABAccount *)accountWithIdentifier:(NSString *)arg1;
- (void)setTag:(NSString *)arg1;
- (NSString *)tag;
@end

