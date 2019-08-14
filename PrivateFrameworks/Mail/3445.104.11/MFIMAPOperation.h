//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFIMAPOperation : NSObject
{
    BOOL _usesRealUids;
    NSString *_mailboxName;
}

+ (id)newOperationWithSerializedData:(id)arg1 cursor:(unsigned long long *)arg2;
@property(nonatomic) BOOL usesRealUids; // @synthesize usesRealUids=_usesRealUids;
@property(readonly, copy, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char operationType;
- (id)init;
- (id)_initWithMailboxName:(id)arg1;
- (void)serializeIntoData:(id)arg1;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (unsigned char)_magic;

@end

