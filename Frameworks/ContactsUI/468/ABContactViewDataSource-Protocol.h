//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>

@class CNCardGroup, CNContactView, UITableViewCell;

@protocol ABContactViewDataSource <NSObject, UITableViewDataSource>

@optional
- (UITableViewCell *)contactView:(CNContactView *)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (long long)contactView:(CNContactView *)arg1 numberOfItemsInGroup:(CNCardGroup *)arg2;
@end

