//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMEventListenerResponse-Protocol.h>

@class NSDictionary, NSError, NSString;

@interface IMEventListenerResponse : NSObject <IMEventListenerResponse>
{
    BOOL _success;
    NSDictionary *_userInfo;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=didSucceed) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithSuccess:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
