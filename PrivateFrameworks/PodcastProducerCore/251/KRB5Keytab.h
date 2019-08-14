//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KRB5Context;

@interface KRB5Keytab : NSObject
{
    KRB5Context *_context;
    struct _krb5_kt *_nativeKeytab;
    int _errorCode;
}

- (BOOL)containsEntry:(id)arg1;
- (void)removeEntry:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)principals;
- (id)entries;
- (id)type;
- (id)name;
- (id)errorMessage;
- (int)errorCode;
- (struct _krb5_kt *)nativeKeytab;
- (id)context;
- (id)description;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(id)arg2 context:(id)arg3;

@end
