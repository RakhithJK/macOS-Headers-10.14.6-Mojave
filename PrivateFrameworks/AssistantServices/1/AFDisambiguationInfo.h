//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFDisambiguationInfo : NSObject <NSSecureCoding>
{
    long long _version;
    NSArray *_history;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *history; // @synthesize history=_history;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

