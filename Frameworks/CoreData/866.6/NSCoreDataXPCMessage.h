//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding>
{
    unsigned long long _messageCode;
    NSData *_messageBody;
    NSString *_token;
    NSString *_contextName;
    NSString *_contextTransactionAuthor;
    NSString *_processName;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *contextTransactionAuthor; // @synthesize contextTransactionAuthor=_contextTransactionAuthor;
@property(retain, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSData *messageBody; // @synthesize messageBody=_messageBody;
@property unsigned long long messageCode; // @synthesize messageCode=_messageCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
