//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXStoreFrontProvider-Protocol.h>

@class NSString;
@protocol FCAppleAccount;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider>
{
    id <FCAppleAccount> _appleAccount;
}

@property(readonly, nonatomic) id <FCAppleAccount> appleAccount; // @synthesize appleAccount=_appleAccount;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *storeFrontIdentifier;
- (id)initWithAppleAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

