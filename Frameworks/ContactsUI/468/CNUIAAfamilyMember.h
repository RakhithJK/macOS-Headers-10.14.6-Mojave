//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIAAfamilyMember : NSObject <NSSecureCoding>
{
    BOOL _isMe;
    NSString *_appleID;
    NSString *_firstName;
    NSString *_lastName;
}

+ (BOOL)supportsSecureCoding;
+ (id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

