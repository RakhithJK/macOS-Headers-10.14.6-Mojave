//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@protocol SFKeychainItemAttributes <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) NSString *persistentIdentifier;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
@end

