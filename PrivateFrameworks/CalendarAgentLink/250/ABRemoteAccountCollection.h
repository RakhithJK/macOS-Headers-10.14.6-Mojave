//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgentLink/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface ABRemoteAccountCollection : NSObject <NSSecureCoding>
{
    NSArray *_accounts;
    NSURL *_baseURL;
    NSString *_tag;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *tag; // @synthesize tag=_tag;
@property(copy) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

