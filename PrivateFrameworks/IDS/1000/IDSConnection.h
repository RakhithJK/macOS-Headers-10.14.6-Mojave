//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSAccount, _IDSConnection;

@interface IDSConnection : NSObject
{
    _IDSConnection *_internal;
}

+ (id)_connectionWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3;
- (void).cxx_destruct;
- (BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) IDSAccount *account;
@property(readonly, nonatomic) _IDSConnection *_internal;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 commands:(id)arg2;
- (id)_initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3;
- (BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;

@end

