//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject
{
    HMCharacteristicRequest *_request;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) HMCharacteristicRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end

