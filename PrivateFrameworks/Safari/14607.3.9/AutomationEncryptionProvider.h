//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/EncryptionProvider-Protocol.h>

@class NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AutomationEncryptionProvider : NSObject <EncryptionProvider>
{
    NSData *_encryptionKey;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void).cxx_destruct;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)ensureEncryptionKey;
- (id)init;

@end

